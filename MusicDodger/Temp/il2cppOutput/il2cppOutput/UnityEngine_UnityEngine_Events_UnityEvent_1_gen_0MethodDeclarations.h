#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t141;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t305;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t602;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m1624_gshared (UnityEvent_1_t141 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1624(__this, method) (( void (*) (UnityEvent_1_t141 *, const MethodInfo*))UnityEvent_1__ctor_m1624_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1627_gshared (UnityEvent_1_t141 * __this, UnityAction_1_t305 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1627(__this, ___call, method) (( void (*) (UnityEvent_1_t141 *, UnityAction_1_t305 *, const MethodInfo*))UnityEvent_1_AddListener_m1627_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12492_gshared (UnityEvent_1_t141 * __this, UnityAction_1_t305 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12492(__this, ___call, method) (( void (*) (UnityEvent_1_t141 *, UnityAction_1_t305 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12492_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12493_gshared (UnityEvent_1_t141 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12493(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t141 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12493_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12494_gshared (UnityEvent_1_t141 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12494(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t602 * (*) (UnityEvent_1_t141 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12494_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12495_gshared (Object_t * __this /* static, unused */, UnityAction_1_t305 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12495(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t602 * (*) (Object_t * /* static, unused */, UnityAction_1_t305 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12495_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1626_gshared (UnityEvent_1_t141 * __this, Color_t60  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1626(__this, ___arg0, method) (( void (*) (UnityEvent_1_t141 *, Color_t60 , const MethodInfo*))UnityEvent_1_Invoke_m1626_gshared)(__this, ___arg0, method)
