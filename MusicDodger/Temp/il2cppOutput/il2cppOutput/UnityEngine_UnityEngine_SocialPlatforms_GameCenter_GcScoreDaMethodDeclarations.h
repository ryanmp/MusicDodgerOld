#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t295;
struct GcScoreData_t295_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t305;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t305 * GcScoreData_ToScore_m1321 (GcScoreData_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t295_marshal(const GcScoreData_t295& unmarshaled, GcScoreData_t295_marshaled& marshaled);
void GcScoreData_t295_marshal_back(const GcScoreData_t295_marshaled& marshaled, GcScoreData_t295& unmarshaled);
void GcScoreData_t295_marshal_cleanup(GcScoreData_t295_marshaled& marshaled);
