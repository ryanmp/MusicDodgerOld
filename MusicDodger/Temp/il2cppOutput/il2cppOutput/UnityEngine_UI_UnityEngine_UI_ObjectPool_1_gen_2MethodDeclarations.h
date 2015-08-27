#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t278;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t279;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t313;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2006(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t278 *, UnityAction_1_t279 *, UnityAction_1_t279 *, const MethodInfo*))ObjectPool_1__ctor_m11552_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m14148(__this, method) (( int32_t (*) (ObjectPool_1_t278 *, const MethodInfo*))ObjectPool_1_get_countAll_m11554_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14149(__this, ___value, method) (( void (*) (ObjectPool_1_t278 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11556_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m14150(__this, method) (( int32_t (*) (ObjectPool_1_t278 *, const MethodInfo*))ObjectPool_1_get_countActive_m11558_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14151(__this, method) (( int32_t (*) (ObjectPool_1_t278 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11560_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m2007(__this, method) (( List_1_t313 * (*) (ObjectPool_1_t278 *, const MethodInfo*))ObjectPool_1_Get_m11562_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m2008(__this, ___element, method) (( void (*) (ObjectPool_1_t278 *, List_1_t313 *, const MethodInfo*))ObjectPool_1_Release_m11564_gshared)(__this, ___element, method)
