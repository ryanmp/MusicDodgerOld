#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t57;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TitleScreen
struct  TitleScreen_t68  : public MonoBehaviour_t52
{
	// UnityEngine.Camera TitleScreen::c
	Camera_t57 * ___c_2;
	// System.Single TitleScreen::cam_transition_time
	float ___cam_transition_time_3;
	// UnityEngine.Vector3 TitleScreen::initial_pos
	Vector3_t69  ___initial_pos_4;
};
struct TitleScreen_t68_StaticFields{
	// UnityEngine.Vector3 TitleScreen::target_pos
	Vector3_t69  ___target_pos_5;
	// System.Single TitleScreen::startTime
	float ___startTime_6;
};
