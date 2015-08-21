#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t115;
struct Gradient_t115_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m402 (Gradient_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m403 (Gradient_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m404 (Gradient_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m405 (Gradient_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t115_marshal(const Gradient_t115& unmarshaled, Gradient_t115_marshaled& marshaled);
void Gradient_t115_marshal_back(const Gradient_t115_marshaled& marshaled, Gradient_t115& unmarshaled);
void Gradient_t115_marshal_cleanup(Gradient_t115_marshaled& marshaled);
