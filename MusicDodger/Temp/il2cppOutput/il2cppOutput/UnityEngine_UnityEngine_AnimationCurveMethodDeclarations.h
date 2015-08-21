#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t205;
struct AnimationCurve_t205_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t350;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m973 (AnimationCurve_t205 * __this, KeyframeU5BU5D_t350* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m974 (AnimationCurve_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m975 (AnimationCurve_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m976 (AnimationCurve_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m977 (AnimationCurve_t205 * __this, KeyframeU5BU5D_t350* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t205_marshal(const AnimationCurve_t205& unmarshaled, AnimationCurve_t205_marshaled& marshaled);
void AnimationCurve_t205_marshal_back(const AnimationCurve_t205_marshaled& marshaled, AnimationCurve_t205& unmarshaled);
void AnimationCurve_t205_marshal_cleanup(AnimationCurve_t205_marshaled& marshaled);
