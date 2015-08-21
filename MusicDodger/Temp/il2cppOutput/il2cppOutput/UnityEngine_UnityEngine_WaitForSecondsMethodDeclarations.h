#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t89;
struct WaitForSeconds_t89_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m301 (WaitForSeconds_t89 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t89_marshal(const WaitForSeconds_t89& unmarshaled, WaitForSeconds_t89_marshaled& marshaled);
void WaitForSeconds_t89_marshal_back(const WaitForSeconds_t89_marshaled& marshaled, WaitForSeconds_t89& unmarshaled);
void WaitForSeconds_t89_marshal_cleanup(WaitForSeconds_t89_marshaled& marshaled);
