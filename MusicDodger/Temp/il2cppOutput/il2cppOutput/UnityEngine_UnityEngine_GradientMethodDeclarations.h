#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t409;
struct Gradient_t409_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2141 (Gradient_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2142 (Gradient_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2143 (Gradient_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2144 (Gradient_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t409_marshal(const Gradient_t409& unmarshaled, Gradient_t409_marshaled& marshaled);
void Gradient_t409_marshal_back(const Gradient_t409_marshaled& marshaled, Gradient_t409& unmarshaled);
void Gradient_t409_marshal_cleanup(Gradient_t409_marshaled& marshaled);
