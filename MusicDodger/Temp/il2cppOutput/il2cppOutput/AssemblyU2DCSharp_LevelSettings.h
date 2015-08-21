#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t51;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// UnityEngine.TextAsset
struct TextAsset_t52;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t53;
// UnityEngine.Camera
struct Camera_t54;
// UnityEngine.Color[]
struct ColorU5BU5D_t55;
// UnityEngine.AudioClip
struct AudioClip_t57;
// UnityEngine.AudioSource
struct AudioSource_t58;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t59;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t60;
// UnityEngine.GameObject
struct GameObject_t61;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// LevelSettings
struct  LevelSettings_t62  : public MonoBehaviour_t50
{
	// UnityEngine.GameObject[] LevelSettings::enemy_prefabs
	GameObjectU5BU5D_t51* ___enemy_prefabs_2;
	// System.String LevelSettings::songName
	String_t* ___songName_6;
	// UnityEngine.Camera LevelSettings::main_camera
	Camera_t54 * ___main_camera_8;
	// UnityEngine.Color[] LevelSettings::enemy_colors
	ColorU5BU5D_t55* ___enemy_colors_12;
	// UnityEngine.Color LevelSettings::bg_color
	Color_t56  ___bg_color_13;
	// UnityEngine.AudioClip LevelSettings::song_audio
	AudioClip_t57 * ___song_audio_14;
	// UnityEngine.AudioSource LevelSettings::audio_source
	AudioSource_t58 * ___audio_source_15;
	// System.Single LevelSettings::initial_delay
	float ___initial_delay_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelSettings::clones
	List_1_t59 * ___clones_17;
	// System.Collections.Generic.List`1<System.Single> LevelSettings::fade_in_list
	List_1_t60 * ___fade_in_list_18;
	// UnityEngine.GameObject LevelSettings::player
	GameObject_t61 * ___player_19;
	// System.Single LevelSettings::player_movement_dir
	float ___player_movement_dir_20;
};
struct LevelSettings_t62_StaticFields{
	// SimpleJSON.JSONNode LevelSettings::testData
	JSONNode_t2 * ___testData_3;
	// UnityEngine.TextAsset LevelSettings::filejson
	TextAsset_t52 * ___filejson_4;
	// System.String LevelSettings::fileNamejson
	String_t* ___fileNamejson_5;
	// System.Collections.Generic.List`1<System.Int32> LevelSettings::track_idxs
	List_1_t53 * ___track_idxs_7;
	// UnityEngine.Vector2 LevelSettings::bounds
	Vector2_t63  ___bounds_9;
	// System.Single LevelSettings::initial_y_velocity
	float ___initial_y_velocity_10;
	// System.Single LevelSettings::min_size
	float ___min_size_11;
};
