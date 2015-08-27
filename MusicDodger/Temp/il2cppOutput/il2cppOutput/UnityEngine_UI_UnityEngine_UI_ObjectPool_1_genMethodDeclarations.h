#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t112;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t114;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t303;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1530(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t112 *, UnityAction_1_t114 *, UnityAction_1_t114 *, const MethodInfo*))ObjectPool_1__ctor_m11552_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11553(__this, method) (( int32_t (*) (ObjectPool_1_t112 *, const MethodInfo*))ObjectPool_1_get_countAll_m11554_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11555(__this, ___value, method) (( void (*) (ObjectPool_1_t112 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11556_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11557(__this, method) (( int32_t (*) (ObjectPool_1_t112 *, const MethodInfo*))ObjectPool_1_get_countActive_m11558_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11559(__this, method) (( int32_t (*) (ObjectPool_1_t112 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11560_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11561(__this, method) (( List_1_t303 * (*) (ObjectPool_1_t112 *, const MethodInfo*))ObjectPool_1_Get_m11562_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11563(__this, ___element, method) (( void (*) (ObjectPool_1_t112 *, List_1_t303 *, const MethodInfo*))ObjectPool_1_Release_m11564_gshared)(__this, ___element, method)
