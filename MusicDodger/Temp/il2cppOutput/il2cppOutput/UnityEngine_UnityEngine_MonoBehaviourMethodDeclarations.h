#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t50;
// UnityEngine.Coroutine
struct Coroutine_t89;
struct Coroutine_t89_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m234 (MonoBehaviour_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t89 * MonoBehaviour_StartCoroutine_m874 (MonoBehaviour_t50 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t89 * MonoBehaviour_StartCoroutine_Auto_m875 (MonoBehaviour_t50 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
