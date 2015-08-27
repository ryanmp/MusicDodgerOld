#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t565;
struct GcAchievementData_t565_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t574;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t574 * GcAchievementData_ToAchievement_m3077 (GcAchievementData_t565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t565_marshal(const GcAchievementData_t565& unmarshaled, GcAchievementData_t565_marshaled& marshaled);
void GcAchievementData_t565_marshal_back(const GcAchievementData_t565_marshaled& marshaled, GcAchievementData_t565& unmarshaled);
void GcAchievementData_t565_marshal_cleanup(GcAchievementData_t565_marshaled& marshaled);
