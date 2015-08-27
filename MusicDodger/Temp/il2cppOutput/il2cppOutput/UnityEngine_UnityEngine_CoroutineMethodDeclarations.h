#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t209;
struct Coroutine_t209_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2026 (Coroutine_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2027 (Coroutine_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2028 (Coroutine_t209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t209_marshal(const Coroutine_t209& unmarshaled, Coroutine_t209_marshaled& marshaled);
void Coroutine_t209_marshal_back(const Coroutine_t209_marshaled& marshaled, Coroutine_t209& unmarshaled);
void Coroutine_t209_marshal_cleanup(Coroutine_t209_marshaled& marshaled);
