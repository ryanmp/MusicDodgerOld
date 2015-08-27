#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t275;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t276;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t315;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2002(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t275 *, UnityAction_1_t276 *, UnityAction_1_t276 *, const MethodInfo*))ObjectPool_1__ctor_m11552_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m14130(__this, method) (( int32_t (*) (ObjectPool_1_t275 *, const MethodInfo*))ObjectPool_1_get_countAll_m11554_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m14131(__this, ___value, method) (( void (*) (ObjectPool_1_t275 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11556_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m14132(__this, method) (( int32_t (*) (ObjectPool_1_t275 *, const MethodInfo*))ObjectPool_1_get_countActive_m11558_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m14133(__this, method) (( int32_t (*) (ObjectPool_1_t275 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11560_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2003(__this, method) (( List_1_t315 * (*) (ObjectPool_1_t275 *, const MethodInfo*))ObjectPool_1_Get_m11562_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m2004(__this, ___element, method) (( void (*) (ObjectPool_1_t275 *, List_1_t315 *, const MethodInfo*))ObjectPool_1_Release_m11564_gshared)(__this, ___element, method)
