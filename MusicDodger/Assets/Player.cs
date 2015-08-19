using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	



	}

	void OnCollisionEnter (Collision col)
	{

		Debug.Log ("collision triggered by player collider by " + col);

	}
}
