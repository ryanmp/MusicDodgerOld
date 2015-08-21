using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour
{

	ParticleSystem ps;
	SpriteRenderer sr;

	// Use this for initialization
	void Start ()
	{
	
		ps = gameObject.GetComponent ("ParticleSystem") as ParticleSystem;
		sr = gameObject.GetComponent ("SpriteRenderer") as SpriteRenderer;
		ps.startColor = sr.color;

	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}


/*
 * 
 * 
 *  function Start () {
     ps = GetComponent (ParticleSystem);
 }
 
 function Update () {
     psColor = Color.Lerp(Color.blue, Color.red, Time.time/5);
     ps.startColor = psColor;
 }

*/