#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t566;
struct GcScoreData_t566_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t576;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t576 * GcScoreData_ToScore_m3078 (GcScoreData_t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t566_marshal(const GcScoreData_t566& unmarshaled, GcScoreData_t566_marshaled& marshaled);
void GcScoreData_t566_marshal_back(const GcScoreData_t566_marshaled& marshaled, GcScoreData_t566& unmarshaled);
void GcScoreData_t566_marshal_cleanup(GcScoreData_t566_marshaled& marshaled);
