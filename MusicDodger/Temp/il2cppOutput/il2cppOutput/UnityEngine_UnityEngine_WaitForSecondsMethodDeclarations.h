#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t348;
struct WaitForSeconds_t348_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1764 (WaitForSeconds_t348 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t348_marshal(const WaitForSeconds_t348& unmarshaled, WaitForSeconds_t348_marshaled& marshaled);
void WaitForSeconds_t348_marshal_back(const WaitForSeconds_t348_marshaled& marshaled, WaitForSeconds_t348& unmarshaled);
void WaitForSeconds_t348_marshal_cleanup(WaitForSeconds_t348_marshaled& marshaled);
