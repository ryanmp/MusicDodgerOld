#pragma strict

/*

todo:





*/

public var song_data : demo1;

public var enemy_typeA : GameObject;
public var enemy_typeB : GameObject;
public var enemy_typeC : GameObject;


function Start () {

	var track1 = song_data.o[3];
	Debug.Log( track1.length );
	for (var i = 0; i < track1.length ; i++){
		Debug.Log(track1[i]['normalized_note']);

	}

}

function Update () {

	var t = Time.timeSinceLevelLoad;
	Debug.Log(t);

}