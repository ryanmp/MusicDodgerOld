#pragma once
#include <stdint.h>
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t181;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Camera
struct  Camera_t57  : public Behaviour_t114
{
};
struct Camera_t57_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t181 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t181 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t181 * ___onPostRender_4;
};
