#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t292;
struct GcAchievementData_t292_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t301;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t301 * GcAchievementData_ToAchievement_m1309 (GcAchievementData_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t292_marshal(const GcAchievementData_t292& unmarshaled, GcAchievementData_t292_marshaled& marshaled);
void GcAchievementData_t292_marshal_back(const GcAchievementData_t292_marshaled& marshaled, GcAchievementData_t292& unmarshaled);
void GcAchievementData_t292_marshal_cleanup(GcAchievementData_t292_marshaled& marshaled);
