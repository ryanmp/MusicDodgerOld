#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t85;
struct WaitForSeconds_t85_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m291 (WaitForSeconds_t85 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t85_marshal(const WaitForSeconds_t85& unmarshaled, WaitForSeconds_t85_marshaled& marshaled);
void WaitForSeconds_t85_marshal_back(const WaitForSeconds_t85_marshaled& marshaled, WaitForSeconds_t85& unmarshaled);
void WaitForSeconds_t85_marshal_cleanup(WaitForSeconds_t85_marshaled& marshaled);
