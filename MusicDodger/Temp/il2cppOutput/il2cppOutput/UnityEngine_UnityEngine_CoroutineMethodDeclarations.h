#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t93;
struct Coroutine_t93_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m304 (Coroutine_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m305 (Coroutine_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m306 (Coroutine_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t93_marshal(const Coroutine_t93& unmarshaled, Coroutine_t93_marshaled& marshaled);
void Coroutine_t93_marshal_back(const Coroutine_t93_marshaled& marshaled, Coroutine_t93& unmarshaled);
void Coroutine_t93_marshal_cleanup(Coroutine_t93_marshaled& marshaled);
