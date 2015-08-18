using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class LevelSettings : MonoBehaviour {

	public GameObject[] enemy_prefabs;

	public static JSONNode testData; 
	public static TextAsset filejson;
	public static string fileNamejson = "Music/Levels/";
	public string songName = "demo1";

	private static List<int> track_idxs = new List<int>();

	public Camera main_camera;

	private static Vector2 bounds;


	// Use this for initialization
	void Start () {
	
		filejson = (TextAsset) Resources.Load(fileNamejson + songName);
		testData = JSON.Parse(filejson.text); 

		// make an index for each track (for incrementing through the notes while playing the song)
		for (int i = 0; i < testData.Count; i++){
			track_idxs.Add(0);
		}

		// let's figure out the max and min world coords currently visible with our screen dimensions
		//Debug.Log (Screen.height + " " + Screen.width);
		float camera_distance = main_camera.transform.position.z;
		Vector3 upper_right = main_camera.ScreenToWorldPoint(
			new Vector3(0f,0f,camera_distance));
		Vector3 bottom_left = main_camera.ScreenToWorldPoint(
			new Vector3(Screen.width,Screen.height,camera_distance));

		bounds = new Vector2(upper_right.x,upper_right.y);

	}

	void GenEnemy(int i){

		// set initial position
		float x_pos = Random.Range(-bounds.x,bounds.x);
		float y_pos = bounds.y;

		// pick prefab
		int prefab_idx = i%enemy_prefabs.Length; // in case we have more tracks than enemy types
		GameObject clone = Instantiate(enemy_prefabs[prefab_idx], new Vector3(x_pos, y_pos, 0), Quaternion.identity) as GameObject;

		// set velocity
		float x_vel = Random.Range(-5.0f,5.0f); 
		float y_vel = Random.Range(-5.0f,-10.0f); 
		Rigidbody2D rb = clone.GetComponent ("Rigidbody2D") as Rigidbody2D;
		rb.velocity = new Vector2(x_vel,y_vel);

		// set color
		SpriteRenderer sr = clone.GetComponent ("SpriteRenderer") as SpriteRenderer;

		float red = Random.Range(0.0f,1.0f);
		float blue = Random.Range(0.0f,1.0f);
		sr.color = new Color(red,1.0f,blue);


	}
	
	// Update is called once per frame
	void Update () {
		for (int i = 0; i < testData.Count; i++){
			float current_trigger = testData[i][track_idxs[i]]["actual_time"].AsFloat;
			if (Time.timeSinceLevelLoad >= current_trigger){
				Debug.Log (current_trigger);
				GenEnemy(i);
				track_idxs[i]++;
			}
		}



	}
}
