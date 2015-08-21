using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;
using System.Linq;

/*
 * todo:
 * 
 * add bullet shape and hexagon (so every track can have a unique shape!)
 * each enemy has a torque param (just apply to squares and hexagons!)
 * add in the x_vel param for each enemy
 * add in possibility of collision of walls for some enemy types (probably just the circle!)
 * 
 * 
 * 
 * 
 * 
 * 
 */


public class LevelSettings : MonoBehaviour {

	public GameObject[] enemy_prefabs;

	public static JSONNode testData; 
	public static TextAsset filejson;
	public static string fileNamejson = "Music/Levels/";
	public string songName = "demo1";

	private static List<int> track_idxs = new List<int>();

	public Camera main_camera;

	private static Vector2 bounds;

	public static float initial_y_velocity = -16.0f; 
	public static float min_size = 1.0f;
	
	public Color[] enemy_colors; // should have as many as enemy types perhaps?
	public Color bg_color;

	public AudioClip song_audio;
	private AudioSource audio_source;

	//public int[] active_tracks = new int[]{0,1,2,3};
	
	public float initial_delay = 2.0f;

	private List<GameObject> clones = new List<GameObject>();
	private List<float> fade_in_list = new List<float>();

	public GameObject player;
	private float player_movement_dir = 0; // 0 = no movement, -1 = left, 1 = right

	public GameObject bg_container;

	public GameObject[] bgs;
	
	public float[] transition_times = {5.0f,10.0f,20.0f};
	public float transition_duration = 1.0f;
	
	void Awake() {
		Application.targetFrameRate = 300;
	}
	
	// Use this for initialization
	void Start () {
	
		filejson = (TextAsset) Resources.Load(fileNamejson + songName);
		testData = JSON.Parse(filejson.text); 

		Debug.Log ("there are " +testData.Count+ " tracks for this song - you need params for each!");

		// make an index for each track (for incrementing through the notes while playing the song)
		for (int i = 0; i < testData.Count; i++){
			track_idxs.Add(0);
		}

		// let's figure out the max and min world coords currently visible with our screen dimensions
		//Debug.Log (Screen.height + " " + Screen.width);
		float camera_distance = main_camera.transform.position.z;
		Vector3 upper_right = main_camera.ScreenToWorldPoint(new Vector3(0f,0f,camera_distance));
		//Vector3 bottom_left = main_camera.ScreenToWorldPoint(new Vector3(Screen.width,Screen.height,camera_distance));

		bounds = new Vector2(upper_right.x,upper_right.y);

		Debug.Log (bounds);
	
		main_camera.backgroundColor = bg_color;

		audio_source = gameObject.AddComponent<AudioSource>();
		audio_source.clip = song_audio;
		audio_source.volume = 0.1f;
		audio_source.PlayScheduled(AudioSettings.dspTime + initial_delay); // 2 second delay


		// set background size to fill screen

		bg_container.transform.localScale = new Vector3(bounds.x/5.6f,bounds.y/5.6f,1.0f);



	}

	GameObject GenEnemy(int i, float velocity, float note){

		// set initial position (based on note for now)
		//float x_pos = Random.Range(-bounds.x,bounds.x);
		float x_pos = note*bounds.x*2 - bounds.x;
		float y_pos = bounds.y;

		// pick prefab
		int prefab_idx = i%enemy_prefabs.Length; // in case we have more tracks than enemy types
		GameObject clone = Instantiate(enemy_prefabs[prefab_idx], new Vector3(x_pos, y_pos, 0), Quaternion.identity) as GameObject;

		// set size (based on velocity for now)
		clone.transform.localScale = Vector3.one*(velocity+min_size);

		// set velocity
		//float x_vel = Random.Range(-5.0f,5.0f); 
		//float y_vel = Random.Range(-5.0f,-10.0f); 
		float x_vel = 0.0f;
		float y_vel = initial_y_velocity;
		Rigidbody2D rb = clone.GetComponent ("Rigidbody2D") as Rigidbody2D;
		rb.velocity = new Vector2(x_vel,y_vel);

		rb.angularVelocity = (note-0.5f)*100f;

		// set color
		SpriteRenderer sr = clone.GetComponent ("SpriteRenderer") as SpriteRenderer;
		//int color_idx = i%enemy_colors.Length;
		int color_idx = 0;
		//sr.color = enemy_colors[color_idx];

		//sr.color = Color.Lerp(new Color(0.0f,0.0f,0.0f), new Color(0.0f,0.0f,0.0f), 2.0f);
		Color c = enemy_colors[color_idx];
		sr.color = new Color(c.r,c.g,c.b,0.7f);

		return clone;
	

	}





	void Update () {

		ColorFades();





		// phase 1 --- spawn enemies
		for (int i = 0; i < testData.Count; i++){ //loop through all tracks

			float current_trigger = testData[i][track_idxs[i]]["actual_time"].AsFloat;

			// note: at the end of each track of notes... I'm getting zeroes for the trigger??
			// the fix below works, but will miss the first beat of the song
			if (Time.timeSinceLevelLoad >= current_trigger && current_trigger > 0 ){
			//if (Time.timeSinceLevelLoad - initial_delay >= current_trigger ){
				//Debug.Log (current_trigger);

				float velocity = testData[i][track_idxs[i]]["normalized_velocity"].AsFloat;
				float note = testData[i][track_idxs[i]]["normalized_note"].AsFloat;

				clones.Add (GenEnemy(i,velocity, note));
				track_idxs[i]++;
			}
		}


		// phase 2 --- loop through all existant enemies
		for (int i = 0; i < clones.Count; i++){
			// destroy off screen ones
			/*
			SpriteRenderer sr = clones[i].GetComponent ("SpriteRenderer") as SpriteRenderer;
			if (!sr.isVisible) {
				Destroy(clones[i]);
				clones.RemoveAt(i);
			}
			*/
		}


		// phase 3 -- get input and move player
		for (var i = 0; i < Input.touchCount; ++i) {

			if (Input.GetTouch(i).position.x < Screen.width/2.0f){
				player_movement_dir = -1.0f;
			} else {
				player_movement_dir = 1.0f;
			}

			if (Input.GetTouch(i).phase == TouchPhase.Ended){
				//Debug.Log ("ended at: " + Input.GetTouch(i).position);
				player_movement_dir = 0;
			}
		}

		//Debug.Log (player_movement_dir);
		//Debug.Log (Input.GetAxis("Horizontal"));

	}




	void ColorFades(){

		SpriteRenderer bg2_sr = bgs[1].GetComponent ("SpriteRenderer") as SpriteRenderer;
		float start_fade_at = transition_times[0] + initial_delay;
		float end_fade_at = transition_times[0] + initial_delay + transition_duration;
		if (Time.timeSinceLevelLoad > start_fade_at && Time.timeSinceLevelLoad < end_fade_at){
			float this_t = (Time.timeSinceLevelLoad-start_fade_at)/transition_duration;
			Debug.Log (this_t);
			// fade in bg2
			float alpha = Mathf.Lerp(0,1,this_t);
			bg2_sr.color = new Color(1.0f, 1.0f, 1.0f, alpha);
		}


		SpriteRenderer bg3_sr = bgs[2].GetComponent ("SpriteRenderer") as SpriteRenderer;
		start_fade_at = transition_times[1] + initial_delay;
		end_fade_at = transition_times[1] + initial_delay + transition_duration;
		if (Time.timeSinceLevelLoad > start_fade_at && Time.timeSinceLevelLoad < end_fade_at){
			float this_t = (Time.timeSinceLevelLoad-start_fade_at)/transition_duration;
			Debug.Log (this_t);
			// fade in bg2
			float alpha = Mathf.Lerp(0,1,this_t);
			bg3_sr.color = new Color(1.0f, 1.0f, 1.0f, alpha);
		}
		
		
	}



}
