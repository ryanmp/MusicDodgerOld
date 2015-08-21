#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t207;
struct AnimationCurve_t207_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t352;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m984 (AnimationCurve_t207 * __this, KeyframeU5BU5D_t352* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m985 (AnimationCurve_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m986 (AnimationCurve_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m987 (AnimationCurve_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m988 (AnimationCurve_t207 * __this, KeyframeU5BU5D_t352* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t207_marshal(const AnimationCurve_t207& unmarshaled, AnimationCurve_t207_marshaled& marshaled);
void AnimationCurve_t207_marshal_back(const AnimationCurve_t207_marshaled& marshaled, AnimationCurve_t207& unmarshaled);
void AnimationCurve_t207_marshal_cleanup(AnimationCurve_t207_marshaled& marshaled);
