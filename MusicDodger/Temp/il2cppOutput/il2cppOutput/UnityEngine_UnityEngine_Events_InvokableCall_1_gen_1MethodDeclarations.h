#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2008;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t360;
// System.Object[]
struct ObjectU5BU5D_t321;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13615_gshared (InvokableCall_1_t2008 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13615(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2008 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13615_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13616_gshared (InvokableCall_1_t2008 * __this, UnityAction_1_t360 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m13616(__this, ___callback, method) (( void (*) (InvokableCall_1_t2008 *, UnityAction_1_t360 *, const MethodInfo*))InvokableCall_1__ctor_m13616_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13617_gshared (InvokableCall_1_t2008 * __this, ObjectU5BU5D_t321* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13617(__this, ___args, method) (( void (*) (InvokableCall_1_t2008 *, ObjectU5BU5D_t321*, const MethodInfo*))InvokableCall_1_Invoke_m13617_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13618_gshared (InvokableCall_1_t2008 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13618(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2008 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13618_gshared)(__this, ___targetObj, ___method, method)
