using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;
using System.Linq;

/*
 * todo:
 * 
 * add in text for UI in level
 * start the title screen and level select screen
 * 
 * 
 * add in possibility of collision of walls for some enemy types (probably just the circle!)
 * add in color change of enemies on song transitions
 * 
 * 
 * 
 * 
 * 
 * 
 */


public class LevelSettings : MonoBehaviour
{

	// set all of these in the inspector to setup level enemies
	public GameObject[] enemy_prefabs;
	public string[] enemy_rotation_params;
	public float[] enemy_size_params;
	public float[] enemy_y_v_params;
	public string[] enemy_x_v_params;
	public float[] enemy_x_v_add_rand;


	public static JSONNode testData; 
	public static TextAsset filejson;
	public static string fileNamejson = "Music/Levels/";
	public string songName = "demo1";
	public AudioClip song_audio;
	
	public Camera main_camera;
	public float initial_delay;
	public float end_loop_multiplier;

	//public int[] active_tracks = new int[]{0,1,2,3};

	public GameObject player;
	public GameObject bg_container;
	public GameObject[] bgs;
	
	public float[] transition_times = {5.0f,10.0f,20.0f};
	public float transition_duration = 1.0f;
	// should have as many as enemy types perhaps? ... 
	// no --- setting color just based on current song phase now
	public Color[] enemy_colors; 
	private int color_idx = 0;
	public static Color current_enemy_color;


	
	private static List<int> track_idxs = new List<int> ();
	private static Vector2 bounds;
	private AudioSource audio_source;
	private float player_movement_dir = 0; // 0 = no movement, -1 = left, 1 = right

	private List<GameObject> clones = new List<GameObject> ();
	private List<float> fade_in_list = new List<float> ();



	void Awake ()
	{
		Application.targetFrameRate = 300;
	}

	void Start ()
	{
	
		Random.seed = 123;

		filejson = (TextAsset)Resources.Load (fileNamejson + songName);
		testData = JSON.Parse (filejson.text); 

		Debug.Log ("there are " + testData.Count + " tracks for this song - you need params for each!");

		// make an index for each track (for incrementing through the notes while playing the song)
		for (int i = 0; i < testData.Count; i++) {
			track_idxs.Add (0);
		}

		// let's figure out the max and min world coords currently visible with our screen dimensions
		//Debug.Log (Screen.height + " " + Screen.width);
		float camera_distance = main_camera.transform.position.z;
		Vector3 upper_right = main_camera.ScreenToWorldPoint (new Vector3 (0f, 0f, camera_distance));
		//Vector3 bottom_left = main_camera.ScreenToWorldPoint(new Vector3(Screen.width,Screen.height,camera_distance));

		bounds = new Vector2 (upper_right.x, upper_right.y);

		audio_source = gameObject.AddComponent<AudioSource> ();
		audio_source.clip = song_audio;
		audio_source.volume = 0.1f;
		audio_source.PlayScheduled (AudioSettings.dspTime + initial_delay); // 2 second delay

		bg_container.transform.localScale = new Vector3 (bounds.x / 5.6f, bounds.y / 5.6f, 1.0f); // set background size to fill screen

		current_enemy_color = enemy_colors [0];

	}

	GameObject GenEnemy (int i, float velocity, float note)
	{





		// pick prefab -> set size & position
		GameObject clone = Instantiate (enemy_prefabs [i], new Vector3 (0, 0, 0), Quaternion.identity) as GameObject;
		clone.transform.localScale = Vector3.one * (velocity + enemy_size_params [i]);
		float sc = clone.transform.localScale.x * 3;

		//float x_pos = note * bounds.x * 2 - bounds.x;
		float x_pos = (note * (bounds.x - sc)) * 2 + (sc) - bounds.x;
		float y_pos = bounds.y;

		clone.transform.position = new Vector3 (x_pos, y_pos, 0);




		// set wall bounce param
		//EnemyScript e = clone.GetComponent ("EnemyScript") as EnemyScript;
		//e.does_wall_bounce = true;




		// set velocity
		float x_vel = 0.0f;
		string x_vel_type = enemy_x_v_params [i];
		if (x_vel_type == "note") {
			x_vel = (note - 0.5f) * 10f;
		}

		x_vel += Random.Range (-1.0f, 1.0f) * enemy_x_v_add_rand [i];

		float y_vel = enemy_y_v_params [i] + end_loop_multiplier;
		Rigidbody2D rb = clone.GetComponent ("Rigidbody2D") as Rigidbody2D;
		rb.velocity = new Vector2 (x_vel, y_vel);

		// set rotation type
		string rotation_type = enemy_rotation_params [i];
		if (rotation_type == "note") {
			rb.angularVelocity = (note - 0.5f) * 300f;
		} else {
			rb.angularVelocity = 0.0f;
		}




		// set color
		SpriteRenderer sr = clone.GetComponent ("SpriteRenderer") as SpriteRenderer;
		//int color_idx = i%enemy_colors.Length;

		//sr.color = enemy_colors [color_idx];

		current_enemy_color = enemy_colors [color_idx];

		//sr.color = Color.Lerp(new Color(0.0f,0.0f,0.0f), new Color(0.0f,0.0f,0.0f), 2.0f);
		Color c = current_enemy_color;
		sr.color = new Color (c.r, c.g, c.b, 0.7f);

		return clone;
	

	}





	void Update ()
	{

		ColorFades ();





		// phase 1 --- spawn enemies
		for (int i = 0; i < testData.Count; i++) { //loop through all tracks

			float current_trigger = testData [i] [track_idxs [i]] ["actual_time"].AsFloat;

			// note: at the end of each track of notes... I'm getting zeroes for the trigger??
			// the fix below works, but will miss the first beat of the song
			if (Time.timeSinceLevelLoad >= current_trigger && current_trigger > 0) {
				//if (Time.timeSinceLevelLoad - initial_delay >= current_trigger ){
				//Debug.Log (current_trigger);

				float velocity = testData [i] [track_idxs [i]] ["normalized_velocity"].AsFloat;
				float note = testData [i] [track_idxs [i]] ["normalized_note"].AsFloat;

				clones.Add (GenEnemy (i, velocity, note));
				track_idxs [i]++;
			}
		}

		// phase 2 --- loop through all existant enemies
		UpdateEnemies ();





		// phase 3 -- get input and move player
		for (var i = 0; i < Input.touchCount; ++i) {

			if (Input.GetTouch (i).position.x < Screen.width / 2.0f) {
				player_movement_dir = -1.0f;
			} else {
				player_movement_dir = 1.0f;
			}

			if (Input.GetTouch (i).phase == TouchPhase.Ended) {
				//Debug.Log ("ended at: " + Input.GetTouch(i).position);
				player_movement_dir = 0;
			}
		}

		//Debug.Log (player_movement_dir);
		//Debug.Log (Input.GetAxis("Horizontal"));

	}


	void UpdateEnemies ()
	{
		for (int i = 0; i < clones.Count; i++) {

		}
	}

	void ColorFades ()
	{

		SpriteRenderer bg2_sr = bgs [1].GetComponent ("SpriteRenderer") as SpriteRenderer;
		float start_fade_at = transition_times [0] + initial_delay;
		float end_fade_at = transition_times [0] + initial_delay + transition_duration;
		if (Time.timeSinceLevelLoad > start_fade_at && Time.timeSinceLevelLoad < end_fade_at) {

			color_idx = 1;

			float this_t = (Time.timeSinceLevelLoad - start_fade_at) / transition_duration;
			Debug.Log (this_t);
			// fade in bg2
			float alpha = Mathf.Lerp (0, 1, this_t);
			bg2_sr.color = new Color (1.0f, 1.0f, 1.0f, alpha);
		}


		SpriteRenderer bg3_sr = bgs [2].GetComponent ("SpriteRenderer") as SpriteRenderer;
		start_fade_at = transition_times [1] + initial_delay;
		end_fade_at = transition_times [1] + initial_delay + transition_duration;
		if (Time.timeSinceLevelLoad > start_fade_at && Time.timeSinceLevelLoad < end_fade_at) {

			color_idx = 2;

			float this_t = (Time.timeSinceLevelLoad - start_fade_at) / transition_duration;
			Debug.Log (this_t);
			// fade in bg2
			float alpha = Mathf.Lerp (0, 1, this_t);
			bg3_sr.color = new Color (1.0f, 1.0f, 1.0f, alpha);
		}
		
		
	}



}
