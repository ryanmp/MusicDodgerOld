#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t119;
struct Gradient_t119_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m412 (Gradient_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m413 (Gradient_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m414 (Gradient_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m415 (Gradient_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t119_marshal(const Gradient_t119& unmarshaled, Gradient_t119_marshaled& marshaled);
void Gradient_t119_marshal_back(const Gradient_t119_marshaled& marshaled, Gradient_t119& unmarshaled);
void Gradient_t119_marshal_cleanup(Gradient_t119_marshaled& marshaled);
