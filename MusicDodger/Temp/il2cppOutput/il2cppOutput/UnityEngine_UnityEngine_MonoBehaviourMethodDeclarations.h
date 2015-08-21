#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t52;
// UnityEngine.Coroutine
struct Coroutine_t93;
struct Coroutine_t93_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m239 (MonoBehaviour_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t93 * MonoBehaviour_StartCoroutine_m883 (MonoBehaviour_t52 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t93 * MonoBehaviour_StartCoroutine_Auto_m884 (MonoBehaviour_t52 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
