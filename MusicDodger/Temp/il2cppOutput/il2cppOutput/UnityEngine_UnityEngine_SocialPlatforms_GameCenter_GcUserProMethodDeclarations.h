#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t292;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t302;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t101;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t302 * GcUserProfileData_ToUserProfile_m1317 (GcUserProfileData_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m1318 (GcUserProfileData_t292 * __this, UserProfileU5BU5D_t101** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
