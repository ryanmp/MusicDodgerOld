using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TitleScreen : MonoBehaviour
{

	public Camera c;
	public float cam_speed = 10f;

	private Vector3 initial_pos = new Vector3 (0f, 0f, -450f); 
	private Vector3 target_pos = new Vector3 ();
	
	// Use this for initialization
	void Start ()
	{
		c.transform.position = new Vector3 (0, 0, -2000f);
		target_pos = initial_pos;
	}
	
	// Update is called once per frame
	void Update ()
	{
		c.transform.position = Vector3.Lerp (c.transform.position, target_pos, cam_speed * Time.deltaTime);


	}



	public void LevelSets_btn ()
	{
		Debug.Log ("LevelSets_btn");

		target_pos = new Vector3 (640.0f, 0.0f, -450f);
	}

	public void Options_btn ()
	{
		Debug.Log ("Options_btn");
	}

	public void Buy_btn ()
	{
		Debug.Log ("Buy_btn");
	}

	public void LevelSetsScreen_back_btn ()
	{
		Debug.Log ("LevelSetsScreen_back_btn");

		target_pos = new Vector3 (0.0f, 0.0f, -450f);
	}


}
