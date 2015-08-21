#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// EnemyScript
#include "AssemblyU2DCSharp_EnemyScript.h"
#ifndef _MSC_VER
#else
#endif
// EnemyScript
#include "AssemblyU2DCSharp_EnemyScriptMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystem.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
// UnityEngine.ParticleSystem
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"


// System.Void EnemyScript::.ctor()
extern "C" void EnemyScript__ctor_m224 (EnemyScript_t51 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyScript::Start()
extern TypeInfo* ParticleSystem_t49_il2cpp_TypeInfo_var;
extern TypeInfo* SpriteRenderer_t50_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral26;
extern Il2CppCodeGenString* _stringLiteral27;
extern "C" void EnemyScript_Start_m225 (EnemyScript_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParticleSystem_t49_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(38);
		SpriteRenderer_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral26 = il2cpp_codegen_string_literal_from_index(26);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t58 * L_0 = Component_get_gameObject_m240(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Component_t69 * L_1 = GameObject_GetComponent_m241(L_0, _stringLiteral26, /*hidden argument*/NULL);
		__this->___ps_2 = ((ParticleSystem_t49 *)IsInst(L_1, ParticleSystem_t49_il2cpp_TypeInfo_var));
		GameObject_t58 * L_2 = Component_get_gameObject_m240(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Component_t69 * L_3 = GameObject_GetComponent_m241(L_2, _stringLiteral27, /*hidden argument*/NULL);
		__this->___sr_3 = ((SpriteRenderer_t50 *)IsInst(L_3, SpriteRenderer_t50_il2cpp_TypeInfo_var));
		ParticleSystem_t49 * L_4 = (__this->___ps_2);
		SpriteRenderer_t50 * L_5 = (__this->___sr_3);
		NullCheck(L_5);
		Color_t60  L_6 = SpriteRenderer_get_color_m242(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ParticleSystem_set_startColor_m243(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyScript::Update()
extern "C" void EnemyScript_Update_m226 (EnemyScript_t51 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// LevelSettings
#include "AssemblyU2DCSharp_LevelSettings.h"
#ifndef _MSC_VER
#else
#endif
// LevelSettings
#include "AssemblyU2DCSharp_LevelSettingsMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// System.Double
#include "mscorlib_System_Double.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
// SimpleJSON.JSON
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONMethodDeclarations.h"
// SimpleJSON.JSONNode
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNodeMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct GameObject_t58;
struct AudioSource_t62;
struct GameObject_t58;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m245_gshared (GameObject_t58 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m245(__this, method) (( Object_t * (*) (GameObject_t58 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m245_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t62_m244(__this, method) (( AudioSource_t62 * (*) (GameObject_t58 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m245_gshared)(__this, method)


// System.Void LevelSettings::.ctor()
extern TypeInfo* SingleU5BU5D_t54_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t63_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t64_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m246_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m247_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral28;
extern "C" void LevelSettings__ctor_m227 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SingleU5BU5D_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		List_1_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(43);
		List_1_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		List_1__ctor_m246_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		List_1__ctor_m247_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		_stringLiteral28 = il2cpp_codegen_string_literal_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___songName_11 = _stringLiteral28;
		SingleU5BU5D_t54* L_0 = ((SingleU5BU5D_t54*)SZArrayNew(SingleU5BU5D_t54_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((float*)(float*)SZArrayLdElema(L_0, 0)) = (float)(5.0f);
		SingleU5BU5D_t54* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((float*)(float*)SZArrayLdElema(L_1, 1)) = (float)(10.0f);
		SingleU5BU5D_t54* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((float*)(float*)SZArrayLdElema(L_2, 2)) = (float)(20.0f);
		__this->___transition_times_19 = L_2;
		__this->___transition_duration_20 = (1.0f);
		List_1_t63 * L_3 = (List_1_t63 *)il2cpp_codegen_object_new (List_1_t63_il2cpp_TypeInfo_var);
		List_1__ctor_m246(L_3, /*hidden argument*/List_1__ctor_m246_MethodInfo_var);
		__this->___clones_28 = L_3;
		List_1_t64 * L_4 = (List_1_t64 *)il2cpp_codegen_object_new (List_1_t64_il2cpp_TypeInfo_var);
		List_1__ctor_m247(L_4, /*hidden argument*/List_1__ctor_m247_MethodInfo_var);
		__this->___fade_in_list_29 = L_4;
		MonoBehaviour__ctor_m239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelSettings::.cctor()
extern TypeInfo* LevelSettings_t65_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t61_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m248_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral29;
extern "C" void LevelSettings__cctor_m228 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelSettings_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		List_1_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		List_1__ctor_m248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		_stringLiteral29 = il2cpp_codegen_string_literal_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	{
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___fileNamejson_10 = _stringLiteral29;
		List_1_t61 * L_0 = (List_1_t61 *)il2cpp_codegen_object_new (List_1_t61_il2cpp_TypeInfo_var);
		List_1__ctor_m248(L_0, /*hidden argument*/List_1__ctor_m248_MethodInfo_var);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24 = L_0;
		return;
	}
}
// System.Void LevelSettings::Awake()
extern "C" void LevelSettings_Awake_m229 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	{
		Application_set_targetFrameRate_m249(NULL /*static, unused*/, ((int32_t)300), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelSettings::Start()
extern TypeInfo* LevelSettings_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TextAsset_t55_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t72_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t62_m244_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral30;
extern Il2CppCodeGenString* _stringLiteral31;
extern "C" void LevelSettings_Start_m230 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelSettings_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		TextAsset_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		Int32_t72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		GameObject_AddComponent_TisAudioSource_t62_m244_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		_stringLiteral30 = il2cpp_codegen_string_literal_from_index(30);
		_stringLiteral31 = il2cpp_codegen_string_literal_from_index(31);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t70  V_2 = {0};
	Vector3_t70  V_3 = {0};
	{
		Random_set_seed_m250(NULL /*static, unused*/, ((int32_t)123), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		String_t* L_0 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___fileNamejson_10;
		String_t* L_1 = (__this->___songName_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m174(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Object_t71 * L_3 = Resources_Load_m251(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___filejson_9 = ((TextAsset_t55 *)Castclass(L_3, TextAsset_t55_il2cpp_TypeInfo_var));
		TextAsset_t55 * L_4 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___filejson_9;
		NullCheck(L_4);
		String_t* L_5 = TextAsset_get_text_m252(L_4, /*hidden argument*/NULL);
		JSONNode_t2 * L_6 = JSON_Parse_m159(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8 = L_6;
		JSONNode_t2 * L_7 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 SimpleJSON.JSONNode::get_Count() */, L_7);
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t72_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m253(NULL /*static, unused*/, _stringLiteral30, L_10, _stringLiteral31, /*hidden argument*/NULL);
		Debug_Log_m254(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0073;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		List_1_t61 * L_12 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24;
		NullCheck(L_12);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_12, 0);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		JSONNode_t2 * L_15 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 SimpleJSON.JSONNode::get_Count() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0064;
		}
	}
	{
		Camera_t57 * L_17 = (__this->___main_camera_13);
		NullCheck(L_17);
		Transform_t73 * L_18 = Component_get_transform_m255(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t70  L_19 = Transform_get_position_m256(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		float L_20 = ((&V_3)->___z_2);
		V_1 = L_20;
		Camera_t57 * L_21 = (__this->___main_camera_13);
		float L_22 = V_1;
		Vector3_t70  L_23 = {0};
		Vector3__ctor_m257(&L_23, (0.0f), (0.0f), L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t70  L_24 = Camera_ScreenToWorldPoint_m258(L_21, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		float L_25 = ((&V_2)->___x_0);
		float L_26 = ((&V_2)->___y_1);
		Vector2_t66  L_27 = {0};
		Vector2__ctor_m259(&L_27, L_25, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25 = L_27;
		GameObject_t58 * L_28 = Component_get_gameObject_m240(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		AudioSource_t62 * L_29 = GameObject_AddComponent_TisAudioSource_t62_m244(L_28, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t62_m244_MethodInfo_var);
		__this->___audio_source_26 = L_29;
		AudioSource_t62 * L_30 = (__this->___audio_source_26);
		AudioClip_t56 * L_31 = (__this->___song_audio_12);
		NullCheck(L_30);
		AudioSource_set_clip_m260(L_30, L_31, /*hidden argument*/NULL);
		AudioSource_t62 * L_32 = (__this->___audio_source_26);
		NullCheck(L_32);
		AudioSource_set_volume_m261(L_32, (0.1f), /*hidden argument*/NULL);
		AudioSource_t62 * L_33 = (__this->___audio_source_26);
		double L_34 = AudioSettings_get_dspTime_m262(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_35 = (__this->___initial_delay_14);
		NullCheck(L_33);
		AudioSource_PlayScheduled_m263(L_33, ((double)((double)L_34+(double)(((double)L_35)))), /*hidden argument*/NULL);
		GameObject_t58 * L_36 = (__this->___bg_container_17);
		NullCheck(L_36);
		Transform_t73 * L_37 = GameObject_get_transform_m264(L_36, /*hidden argument*/NULL);
		float L_38 = ((&((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25)->___x_1);
		float L_39 = ((&((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25)->___y_2);
		Vector3_t70  L_40 = {0};
		Vector3__ctor_m257(&L_40, ((float)((float)L_38/(float)(5.6f))), ((float)((float)L_39/(float)(5.6f))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localScale_m265(L_37, L_40, /*hidden argument*/NULL);
		ColorU5BU5D_t59* L_41 = (__this->___enemy_colors_21);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___current_enemy_color_23 = (*(Color_t60 *)((Color_t60 *)(Color_t60 *)SZArrayLdElema(L_41, 0)));
		return;
	}
}
// UnityEngine.GameObject LevelSettings::GenEnemy(System.Int32,System.Single,System.Single)
extern TypeInfo* GameObject_t58_il2cpp_TypeInfo_var;
extern TypeInfo* LevelSettings_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Rigidbody2D_t74_il2cpp_TypeInfo_var;
extern TypeInfo* SpriteRenderer_t50_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral33;
extern Il2CppCodeGenString* _stringLiteral27;
extern "C" GameObject_t58 * LevelSettings_GenEnemy_m231 (LevelSettings_t65 * __this, int32_t ___i, float ___velocity, float ___note, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		LevelSettings_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Rigidbody2D_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		SpriteRenderer_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral32 = il2cpp_codegen_string_literal_from_index(32);
		_stringLiteral33 = il2cpp_codegen_string_literal_from_index(33);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t58 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	String_t* V_5 = {0};
	float V_6 = 0.0f;
	Rigidbody2D_t74 * V_7 = {0};
	String_t* V_8 = {0};
	SpriteRenderer_t50 * V_9 = {0};
	Color_t60  V_10 = {0};
	Vector3_t70  V_11 = {0};
	{
		GameObjectU5BU5D_t53* L_0 = (__this->___enemy_prefabs_2);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		Vector3_t70  L_3 = {0};
		Vector3__ctor_m257(&L_3, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t75  L_4 = Quaternion_get_identity_m266(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t71 * L_5 = Object_Instantiate_m267(NULL /*static, unused*/, (*(GameObject_t58 **)(GameObject_t58 **)SZArrayLdElema(L_0, L_2)), L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((GameObject_t58 *)IsInst(L_5, GameObject_t58_il2cpp_TypeInfo_var));
		GameObject_t58 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t73 * L_7 = GameObject_get_transform_m264(L_6, /*hidden argument*/NULL);
		Vector3_t70  L_8 = Vector3_get_one_m268(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___velocity;
		SingleU5BU5D_t54* L_10 = (__this->___enemy_size_params_4);
		int32_t L_11 = ___i;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		Vector3_t70  L_13 = Vector3_op_Multiply_m269(NULL /*static, unused*/, L_8, ((float)((float)L_9+(float)(*(float*)(float*)SZArrayLdElema(L_10, L_12)))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_m265(L_7, L_13, /*hidden argument*/NULL);
		GameObject_t58 * L_14 = V_0;
		NullCheck(L_14);
		Transform_t73 * L_15 = GameObject_get_transform_m264(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t70  L_16 = Transform_get_localScale_m270(L_15, /*hidden argument*/NULL);
		V_11 = L_16;
		float L_17 = ((&V_11)->___x_0);
		V_1 = ((float)((float)L_17*(float)(3.0f)));
		float L_18 = ___note;
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		float L_19 = ((&((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25)->___x_1);
		float L_20 = V_1;
		float L_21 = V_1;
		float L_22 = ((&((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25)->___x_1);
		V_2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_18*(float)((float)((float)L_19-(float)L_20))))*(float)(2.0f)))+(float)L_21))-(float)L_22));
		float L_23 = ((&((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___bounds_25)->___y_2);
		V_3 = L_23;
		GameObject_t58 * L_24 = V_0;
		NullCheck(L_24);
		Transform_t73 * L_25 = GameObject_get_transform_m264(L_24, /*hidden argument*/NULL);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector3_t70  L_28 = {0};
		Vector3__ctor_m257(&L_28, L_26, L_27, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_m271(L_25, L_28, /*hidden argument*/NULL);
		V_4 = (0.0f);
		StringU5BU5D_t45* L_29 = (__this->___enemy_x_v_params_6);
		int32_t L_30 = ___i;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		V_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31));
		String_t* L_32 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m223(NULL /*static, unused*/, L_32, _stringLiteral32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00db;
		}
	}
	{
		float L_34 = ___note;
		V_4 = ((float)((float)((float)((float)L_34-(float)(0.5f)))*(float)(10.0f)));
	}

IL_00db:
	{
		float L_35 = V_4;
		float L_36 = Random_Range_m272(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		SingleU5BU5D_t54* L_37 = (__this->___enemy_x_v_add_rand_7);
		int32_t L_38 = ___i;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		V_4 = ((float)((float)L_35+(float)((float)((float)L_36*(float)(*(float*)(float*)SZArrayLdElema(L_37, L_39))))));
		SingleU5BU5D_t54* L_40 = (__this->___enemy_y_v_params_5);
		int32_t L_41 = ___i;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		float L_43 = (__this->___end_loop_multiplier_15);
		V_6 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_40, L_42))+(float)L_43));
		GameObject_t58 * L_44 = V_0;
		NullCheck(L_44);
		Component_t69 * L_45 = GameObject_GetComponent_m241(L_44, _stringLiteral33, /*hidden argument*/NULL);
		V_7 = ((Rigidbody2D_t74 *)IsInst(L_45, Rigidbody2D_t74_il2cpp_TypeInfo_var));
		Rigidbody2D_t74 * L_46 = V_7;
		float L_47 = V_4;
		float L_48 = V_6;
		Vector2_t66  L_49 = {0};
		Vector2__ctor_m259(&L_49, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Rigidbody2D_set_velocity_m273(L_46, L_49, /*hidden argument*/NULL);
		StringU5BU5D_t45* L_50 = (__this->___enemy_rotation_params_3);
		int32_t L_51 = ___i;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = L_51;
		V_8 = (*(String_t**)(String_t**)SZArrayLdElema(L_50, L_52));
		String_t* L_53 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_54 = String_op_Equality_m223(NULL /*static, unused*/, L_53, _stringLiteral32, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_015f;
		}
	}
	{
		Rigidbody2D_t74 * L_55 = V_7;
		float L_56 = ___note;
		NullCheck(L_55);
		Rigidbody2D_set_angularVelocity_m274(L_55, ((float)((float)((float)((float)L_56-(float)(0.5f)))*(float)(300.0f))), /*hidden argument*/NULL);
		goto IL_016b;
	}

IL_015f:
	{
		Rigidbody2D_t74 * L_57 = V_7;
		NullCheck(L_57);
		Rigidbody2D_set_angularVelocity_m274(L_57, (0.0f), /*hidden argument*/NULL);
	}

IL_016b:
	{
		GameObject_t58 * L_58 = V_0;
		NullCheck(L_58);
		Component_t69 * L_59 = GameObject_GetComponent_m241(L_58, _stringLiteral27, /*hidden argument*/NULL);
		V_9 = ((SpriteRenderer_t50 *)IsInst(L_59, SpriteRenderer_t50_il2cpp_TypeInfo_var));
		ColorU5BU5D_t59* L_60 = (__this->___enemy_colors_21);
		int32_t L_61 = (__this->___color_idx_22);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___current_enemy_color_23 = (*(Color_t60 *)((Color_t60 *)(Color_t60 *)SZArrayLdElema(L_60, L_61)));
		Color_t60  L_62 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___current_enemy_color_23;
		V_10 = L_62;
		SpriteRenderer_t50 * L_63 = V_9;
		float L_64 = ((&V_10)->___r_0);
		float L_65 = ((&V_10)->___g_1);
		float L_66 = ((&V_10)->___b_2);
		Color_t60  L_67 = {0};
		Color__ctor_m275(&L_67, L_64, L_65, L_66, (0.7f), /*hidden argument*/NULL);
		NullCheck(L_63);
		SpriteRenderer_set_color_m276(L_63, L_67, /*hidden argument*/NULL);
		GameObject_t58 * L_68 = V_0;
		return L_68;
	}
}
// System.Void LevelSettings::Update()
extern TypeInfo* LevelSettings_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t77_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral35;
extern Il2CppCodeGenString* _stringLiteral36;
extern "C" void LevelSettings_Update_m232 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LevelSettings_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Input_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		_stringLiteral34 = il2cpp_codegen_string_literal_from_index(34);
		_stringLiteral35 = il2cpp_codegen_string_literal_from_index(35);
		_stringLiteral36 = il2cpp_codegen_string_literal_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	List_1_t61 * V_5 = {0};
	int32_t V_6 = 0;
	Touch_t76  V_7 = {0};
	Vector2_t66  V_8 = {0};
	Touch_t76  V_9 = {0};
	{
		LevelSettings_ColorFades_m234(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_00dc;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		JSONNode_t2 * L_0 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		JSONNode_t2 * L_2 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_0, L_1);
		List_1_t61 * L_3 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, L_3, L_4);
		NullCheck(L_2);
		JSONNode_t2 * L_6 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_2, L_5);
		NullCheck(L_6);
		JSONNode_t2 * L_7 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_6, _stringLiteral34);
		NullCheck(L_7);
		float L_8 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_7);
		V_1 = L_8;
		float L_9 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = V_1;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_00d8;
		}
	}
	{
		float L_11 = V_1;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		JSONNode_t2 * L_12 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JSONNode_t2 * L_14 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_12, L_13);
		List_1_t61 * L_15 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, L_15, L_16);
		NullCheck(L_14);
		JSONNode_t2 * L_18 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_14, L_17);
		NullCheck(L_18);
		JSONNode_t2 * L_19 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_18, _stringLiteral35);
		NullCheck(L_19);
		float L_20 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_19);
		V_2 = L_20;
		JSONNode_t2 * L_21 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		JSONNode_t2 * L_23 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_21, L_22);
		List_1_t61 * L_24 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, L_24, L_25);
		NullCheck(L_23);
		JSONNode_t2 * L_27 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_23, L_26);
		NullCheck(L_27);
		JSONNode_t2 * L_28 = (JSONNode_t2 *)VirtFuncInvoker1< JSONNode_t2 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_27, _stringLiteral36);
		NullCheck(L_28);
		float L_29 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_28);
		V_3 = L_29;
		List_1_t63 * L_30 = (__this->___clones_28);
		int32_t L_31 = V_0;
		float L_32 = V_2;
		float L_33 = V_3;
		GameObject_t58 * L_34 = LevelSettings_GenEnemy_m231(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtActionInvoker1< GameObject_t58 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_30, L_34);
		List_1_t61 * L_35 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___track_idxs_24;
		List_1_t61 * L_36 = L_35;
		V_5 = L_36;
		int32_t L_37 = V_0;
		int32_t L_38 = L_37;
		V_6 = L_38;
		List_1_t61 * L_39 = V_5;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, L_39, L_40);
		V_6 = L_41;
		int32_t L_42 = V_6;
		NullCheck(L_36);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0) */, L_36, L_38, ((int32_t)((int32_t)L_42+(int32_t)1)));
	}

IL_00d8:
	{
		int32_t L_43 = V_0;
		V_0 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(LevelSettings_t65_il2cpp_TypeInfo_var);
		JSONNode_t2 * L_45 = ((LevelSettings_t65_StaticFields*)LevelSettings_t65_il2cpp_TypeInfo_var->static_fields)->___testData_8;
		NullCheck(L_45);
		int32_t L_46 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 SimpleJSON.JSONNode::get_Count() */, L_45);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_000d;
		}
	}
	{
		LevelSettings_UpdateEnemies_m233(__this, /*hidden argument*/NULL);
		V_4 = 0;
		goto IL_0166;
	}

IL_00fa:
	{
		int32_t L_47 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t77_il2cpp_TypeInfo_var);
		Touch_t76  L_48 = Input_GetTouch_m278(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		Vector2_t66  L_49 = Touch_get_position_m279((&V_7), /*hidden argument*/NULL);
		V_8 = L_49;
		float L_50 = ((&V_8)->___x_1);
		int32_t L_51 = Screen_get_width_m280(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_50) < ((float)((float)((float)(((float)L_51))/(float)(2.0f)))))))
		{
			goto IL_0134;
		}
	}
	{
		__this->___player_movement_dir_27 = (-1.0f);
		goto IL_013f;
	}

IL_0134:
	{
		__this->___player_movement_dir_27 = (1.0f);
	}

IL_013f:
	{
		int32_t L_52 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t77_il2cpp_TypeInfo_var);
		Touch_t76  L_53 = Input_GetTouch_m278(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		V_9 = L_53;
		int32_t L_54 = Touch_get_phase_m281((&V_9), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_54) == ((uint32_t)3))))
		{
			goto IL_0160;
		}
	}
	{
		__this->___player_movement_dir_27 = (0.0f);
	}

IL_0160:
	{
		int32_t L_55 = V_4;
		V_4 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_0166:
	{
		int32_t L_56 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t77_il2cpp_TypeInfo_var);
		int32_t L_57 = Input_get_touchCount_m282(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00fa;
		}
	}
	{
		return;
	}
}
// System.Void LevelSettings::UpdateEnemies()
extern "C" void LevelSettings_UpdateEnemies_m233 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000b;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		List_1_t63 * L_2 = (__this->___clones_28);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelSettings::ColorFades()
extern TypeInfo* SpriteRenderer_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t78_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t79_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral27;
extern "C" void LevelSettings_ColorFades_m234 (LevelSettings_t65 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SpriteRenderer_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Single_t78_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		Mathf_t79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		_stringLiteral27 = il2cpp_codegen_string_literal_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	SpriteRenderer_t50 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	SpriteRenderer_t50 * V_5 = {0};
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		GameObjectU5BU5D_t53* L_0 = (__this->___bgs_18);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		int32_t L_1 = 1;
		NullCheck((*(GameObject_t58 **)(GameObject_t58 **)SZArrayLdElema(L_0, L_1)));
		Component_t69 * L_2 = GameObject_GetComponent_m241((*(GameObject_t58 **)(GameObject_t58 **)SZArrayLdElema(L_0, L_1)), _stringLiteral27, /*hidden argument*/NULL);
		V_0 = ((SpriteRenderer_t50 *)IsInst(L_2, SpriteRenderer_t50_il2cpp_TypeInfo_var));
		SingleU5BU5D_t54* L_3 = (__this->___transition_times_19);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		float L_5 = (__this->___initial_delay_14);
		V_1 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_3, L_4))+(float)L_5));
		SingleU5BU5D_t54* L_6 = (__this->___transition_times_19);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		int32_t L_7 = 0;
		float L_8 = (__this->___initial_delay_14);
		float L_9 = (__this->___transition_duration_20);
		V_2 = ((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_6, L_7))+(float)L_8))+(float)L_9));
		float L_10 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = V_1;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_12 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = V_2;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_00a4;
		}
	}
	{
		__this->___color_idx_22 = 1;
		float L_14 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = V_1;
		float L_16 = (__this->___transition_duration_20);
		V_3 = ((float)((float)((float)((float)L_14-(float)L_15))/(float)L_16));
		float L_17 = V_3;
		float L_18 = L_17;
		Object_t * L_19 = Box(Single_t78_il2cpp_TypeInfo_var, &L_18);
		Debug_Log_m254(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		float L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Lerp_m283(NULL /*static, unused*/, (0.0f), (1.0f), L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		SpriteRenderer_t50 * L_22 = V_0;
		float L_23 = V_4;
		Color_t60  L_24 = {0};
		Color__ctor_m275(&L_24, (1.0f), (1.0f), (1.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		SpriteRenderer_set_color_m276(L_22, L_24, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		GameObjectU5BU5D_t53* L_25 = (__this->___bgs_18);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 2);
		int32_t L_26 = 2;
		NullCheck((*(GameObject_t58 **)(GameObject_t58 **)SZArrayLdElema(L_25, L_26)));
		Component_t69 * L_27 = GameObject_GetComponent_m241((*(GameObject_t58 **)(GameObject_t58 **)SZArrayLdElema(L_25, L_26)), _stringLiteral27, /*hidden argument*/NULL);
		V_5 = ((SpriteRenderer_t50 *)IsInst(L_27, SpriteRenderer_t50_il2cpp_TypeInfo_var));
		SingleU5BU5D_t54* L_28 = (__this->___transition_times_19);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		float L_30 = (__this->___initial_delay_14);
		V_1 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_28, L_29))+(float)L_30));
		SingleU5BU5D_t54* L_31 = (__this->___transition_times_19);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 1);
		int32_t L_32 = 1;
		float L_33 = (__this->___initial_delay_14);
		float L_34 = (__this->___transition_duration_20);
		V_2 = ((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_31, L_32))+(float)L_33))+(float)L_34));
		float L_35 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = V_1;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_014d;
		}
	}
	{
		float L_37 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_38 = V_2;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_014d;
		}
	}
	{
		__this->___color_idx_22 = 2;
		float L_39 = Time_get_timeSinceLevelLoad_m277(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_40 = V_1;
		float L_41 = (__this->___transition_duration_20);
		V_6 = ((float)((float)((float)((float)L_39-(float)L_40))/(float)L_41));
		float L_42 = V_6;
		float L_43 = L_42;
		Object_t * L_44 = Box(Single_t78_il2cpp_TypeInfo_var, &L_43);
		Debug_Log_m254(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		float L_45 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t79_il2cpp_TypeInfo_var);
		float L_46 = Mathf_Lerp_m283(NULL /*static, unused*/, (0.0f), (1.0f), L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		SpriteRenderer_t50 * L_47 = V_5;
		float L_48 = V_7;
		Color_t60  L_49 = {0};
		Color__ctor_m275(&L_49, (1.0f), (1.0f), (1.0f), L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		SpriteRenderer_set_color_m276(L_47, L_49, /*hidden argument*/NULL);
	}

IL_014d:
	{
		return;
	}
}
// Player
#include "AssemblyU2DCSharp_Player.h"
#ifndef _MSC_VER
#else
#endif
// Player
#include "AssemblyU2DCSharp_PlayerMethodDeclarations.h"

// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"


// System.Void Player::.ctor()
extern "C" void Player__ctor_m235 (Player_t67 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C" void Player_Start_m236 (Player_t67 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Player::Update()
extern "C" void Player_Update_m237 (Player_t67 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Player::OnCollisionEnter(UnityEngine.Collision)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral37;
extern "C" void Player_OnCollisionEnter_m238 (Player_t67 * __this, Collision_t68 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		_stringLiteral37 = il2cpp_codegen_string_literal_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collision_t68 * L_0 = ___col;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m175(NULL /*static, unused*/, _stringLiteral37, L_0, /*hidden argument*/NULL);
		Debug_Log_m254(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
