#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2031;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2030;
// System.Object[]
struct ObjectU5BU5D_t321;

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13922_gshared (InvokableCall_1_t2031 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13922(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2031 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13922_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13923_gshared (InvokableCall_1_t2031 * __this, UnityAction_1_t2030 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m13923(__this, ___callback, method) (( void (*) (InvokableCall_1_t2031 *, UnityAction_1_t2030 *, const MethodInfo*))InvokableCall_1__ctor_m13923_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13924_gshared (InvokableCall_1_t2031 * __this, ObjectU5BU5D_t321* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13924(__this, ___args, method) (( void (*) (InvokableCall_1_t2031 *, ObjectU5BU5D_t321*, const MethodInfo*))InvokableCall_1_Invoke_m13924_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13925_gshared (InvokableCall_1_t2031 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13925(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2031 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13925_gshared)(__this, ___targetObj, ___method, method)
