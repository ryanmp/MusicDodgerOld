#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t294;
struct GcAchievementData_t294_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t303;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t303 * GcAchievementData_ToAchievement_m1320 (GcAchievementData_t294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t294_marshal(const GcAchievementData_t294& unmarshaled, GcAchievementData_t294_marshaled& marshaled);
void GcAchievementData_t294_marshal_back(const GcAchievementData_t294_marshaled& marshaled, GcAchievementData_t294& unmarshaled);
void GcAchievementData_t294_marshal_cleanup(GcAchievementData_t294_marshaled& marshaled);
