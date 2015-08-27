﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t2277;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2278;
// System.Object[]
struct ObjectU5BU5D_t321;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17208_gshared (InvokableCall_1_t2277 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17208(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2277 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17208_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17209_gshared (InvokableCall_1_t2277 * __this, UnityAction_1_t2278 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m17209(__this, ___callback, method) (( void (*) (InvokableCall_1_t2277 *, UnityAction_1_t2278 *, const MethodInfo*))InvokableCall_1__ctor_m17209_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17210_gshared (InvokableCall_1_t2277 * __this, ObjectU5BU5D_t321* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17210(__this, ___args, method) (( void (*) (InvokableCall_1_t2277 *, ObjectU5BU5D_t321*, const MethodInfo*))InvokableCall_1_Invoke_m17210_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17211_gshared (InvokableCall_1_t2277 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17211(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2277 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17211_gshared)(__this, ___targetObj, ___method, method)