using UnityEngine;
using System.Collections;
using SimpleJSON;

public class LevelSettings : MonoBehaviour {

	public GameObject enemyA;
	public GameObject enemyB;
	public GameObject enemyC;

	public static JSONNode testData; 
	public static TextAsset filejson;
	public static string fileNamejson = "Music/Levels/";
	public string songName = "demo1";

	private static int track_idx = 0;

	// Use this for initialization
	void Start () {
	
		filejson = (TextAsset) Resources.Load(fileNamejson + songName);
		testData = JSON.Parse(filejson.text); 

		/*
		Debug.Log (
			testData[0][0]["actual_time"].AsFloat
			);
		*/

	}

	void GenEnemy(){
		float x_pos = Random.Range(-5.0f,5.0f);
		float y_pos = Random.Range(-5.0f,5.0f);
		
		float x_vel = Random.Range(-5.0f,5.0f); 
		float y_vel = Random.Range(-5.0f,5.0f); 
		
		GameObject clone = Instantiate(enemyA, new Vector3(x_pos, y_pos, 0), Quaternion.identity) as GameObject;
		Rigidbody2D rb = clone.GetComponent ("Rigidbody2D") as Rigidbody2D;
		rb.velocity = new Vector2(x_vel,y_vel);
	}

	
	// Update is called once per frame
	void Update () {

		float current_trigger = testData[4][track_idx]["actual_time"].AsFloat;

		if (Time.timeSinceLevelLoad >= current_trigger){

			Debug.Log (current_trigger);
			GenEnemy();
			track_idx++;

		}

	}
}
