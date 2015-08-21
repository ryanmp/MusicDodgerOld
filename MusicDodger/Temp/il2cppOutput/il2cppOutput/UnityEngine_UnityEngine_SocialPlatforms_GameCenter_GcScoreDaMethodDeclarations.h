#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t293;
struct GcScoreData_t293_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t303;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t303 * GcScoreData_ToScore_m1310 (GcScoreData_t293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t293_marshal(const GcScoreData_t293& unmarshaled, GcScoreData_t293_marshaled& marshaled);
void GcScoreData_t293_marshal_back(const GcScoreData_t293_marshaled& marshaled, GcScoreData_t293& unmarshaled);
void GcScoreData_t293_marshal_cleanup(GcScoreData_t293_marshaled& marshaled);
