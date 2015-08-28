using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TitleScreen : MonoBehaviour
{

	public Camera c;
	public float cam_transition_time = 0.5f;




	private Vector3 initial_pos = new Vector3 (0f, 0f, -450f); 
	private static Vector3 target_pos = new Vector3 ();

	private static float startTime = 0.0f;

	
	// Use this for initialization
	void Start ()
	{
		c.transform.position = new Vector3 (0, 0, -2000f);
		target_pos = initial_pos;
		startTime = Time.time;
	}
	
	// Update is called once per frame
	void Update ()
	{


		float t = (Time.time - startTime) / cam_transition_time;
		t *= t; // linear -> easeinout


		//Debug.Log ("cam pos " + c.transform.position + " target pos " + target_pos + "start time " + startTime + " t " + t);

		if (t >= 0 && t <= 1) {
			c.transform.position = Vector3.Lerp (c.transform.position, target_pos, t);
		}


	}



	public void ToLevelSets ()
	{
		startTime = Time.time;
		target_pos = new Vector3 (320f, 0f, -450f);
	}

	public void ToOptions ()
	{
		startTime = Time.time;
		target_pos = new Vector3 (-320f, 0f, -450f);
	}

	public void ToBuy ()
	{
		startTime = Time.time;
		target_pos = new Vector3 (0f, -568f, -450f);
	}

	public void ToTitle ()
	{
		startTime = Time.time;
		target_pos = new Vector3 (0f, 0f, -450f);
	}
	
	public void ToDualColor ()
	{
		startTime = Time.time;
		target_pos = new Vector3 (640f, 568f, -450f);
	}
	
	public void ToLevelOrangeBlue ()
	{
		Application.LoadLevel ("OrangeBlue");
	}

	public void ToLevelPurpleGreen ()
	{
		Debug.Log ("loading ToLevelPurpleGreen");
	}

	public void ToLevelRedYellow ()
	{
		Debug.Log ("loading ToLevelRedYellow");
	}








}
