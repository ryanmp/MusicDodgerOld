#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t53;
// System.String[]
struct StringU5BU5D_t45;
// System.Single[]
struct SingleU5BU5D_t54;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// UnityEngine.TextAsset
struct TextAsset_t55;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t56;
// UnityEngine.Camera
struct Camera_t57;
// UnityEngine.GameObject
struct GameObject_t58;
// UnityEngine.Color[]
struct ColorU5BU5D_t59;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t61;
// UnityEngine.AudioSource
struct AudioSource_t62;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t63;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t64;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// LevelSettings
struct  LevelSettings_t65  : public MonoBehaviour_t52
{
	// UnityEngine.GameObject[] LevelSettings::enemy_prefabs
	GameObjectU5BU5D_t53* ___enemy_prefabs_2;
	// System.String[] LevelSettings::enemy_rotation_params
	StringU5BU5D_t45* ___enemy_rotation_params_3;
	// System.Single[] LevelSettings::enemy_size_params
	SingleU5BU5D_t54* ___enemy_size_params_4;
	// System.Single[] LevelSettings::enemy_y_v_params
	SingleU5BU5D_t54* ___enemy_y_v_params_5;
	// System.String[] LevelSettings::enemy_x_v_params
	StringU5BU5D_t45* ___enemy_x_v_params_6;
	// System.Single[] LevelSettings::enemy_x_v_add_rand
	SingleU5BU5D_t54* ___enemy_x_v_add_rand_7;
	// System.String LevelSettings::songName
	String_t* ___songName_11;
	// UnityEngine.AudioClip LevelSettings::song_audio
	AudioClip_t56 * ___song_audio_12;
	// UnityEngine.Camera LevelSettings::main_camera
	Camera_t57 * ___main_camera_13;
	// System.Single LevelSettings::initial_delay
	float ___initial_delay_14;
	// System.Single LevelSettings::end_loop_multiplier
	float ___end_loop_multiplier_15;
	// UnityEngine.GameObject LevelSettings::player
	GameObject_t58 * ___player_16;
	// UnityEngine.GameObject LevelSettings::bg_container
	GameObject_t58 * ___bg_container_17;
	// UnityEngine.GameObject[] LevelSettings::bgs
	GameObjectU5BU5D_t53* ___bgs_18;
	// System.Single[] LevelSettings::transition_times
	SingleU5BU5D_t54* ___transition_times_19;
	// System.Single LevelSettings::transition_duration
	float ___transition_duration_20;
	// UnityEngine.Color[] LevelSettings::enemy_colors
	ColorU5BU5D_t59* ___enemy_colors_21;
	// System.Int32 LevelSettings::color_idx
	int32_t ___color_idx_22;
	// UnityEngine.AudioSource LevelSettings::audio_source
	AudioSource_t62 * ___audio_source_26;
	// System.Single LevelSettings::player_movement_dir
	float ___player_movement_dir_27;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelSettings::clones
	List_1_t63 * ___clones_28;
	// System.Collections.Generic.List`1<System.Single> LevelSettings::fade_in_list
	List_1_t64 * ___fade_in_list_29;
};
struct LevelSettings_t65_StaticFields{
	// SimpleJSON.JSONNode LevelSettings::testData
	JSONNode_t2 * ___testData_8;
	// UnityEngine.TextAsset LevelSettings::filejson
	TextAsset_t55 * ___filejson_9;
	// System.String LevelSettings::fileNamejson
	String_t* ___fileNamejson_10;
	// UnityEngine.Color LevelSettings::current_enemy_color
	Color_t60  ___current_enemy_color_23;
	// System.Collections.Generic.List`1<System.Int32> LevelSettings::track_idxs
	List_1_t61 * ___track_idxs_24;
	// UnityEngine.Vector2 LevelSettings::bounds
	Vector2_t66  ___bounds_25;
};
