﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t105;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t306;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t307;
// System.String[]
struct StringU5BU5D_t45;
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C" void Leaderboard__ctor_m1372 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C" String_t* Leaderboard_ToString_m1373 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m1374 (Leaderboard_t105 * __this, Object_t * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m1375 (Leaderboard_t105 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m1376 (Leaderboard_t105 * __this, IScoreU5BU5D_t307* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m1377 (Leaderboard_t105 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t45* Leaderboard_GetUserFilter_m1378 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m1379 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m1380 (Leaderboard_t105 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m1381 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m1382 (Leaderboard_t105 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t308  Leaderboard_get_range_m1383 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m1384 (Leaderboard_t105 * __this, Range_t308  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m1385 (Leaderboard_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m1386 (Leaderboard_t105 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
