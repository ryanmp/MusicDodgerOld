#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t89;
struct Coroutine_t89_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m294 (Coroutine_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m295 (Coroutine_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m296 (Coroutine_t89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t89_marshal(const Coroutine_t89& unmarshaled, Coroutine_t89_marshaled& marshaled);
void Coroutine_t89_marshal_back(const Coroutine_t89_marshaled& marshaled, Coroutine_t89& unmarshaled);
void Coroutine_t89_marshal_cleanup(Coroutine_t89_marshaled& marshaled);
