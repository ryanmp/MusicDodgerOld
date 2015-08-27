﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1866;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1865;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11552_gshared (ObjectPool_1_t1866 * __this, UnityAction_1_t1865 * ___actionOnGet, UnityAction_1_t1865 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m11552(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1866 *, UnityAction_1_t1865 *, UnityAction_1_t1865 *, const MethodInfo*))ObjectPool_1__ctor_m11552_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11554_gshared (ObjectPool_1_t1866 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m11554(__this, method) (( int32_t (*) (ObjectPool_1_t1866 *, const MethodInfo*))ObjectPool_1_get_countAll_m11554_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11556_gshared (ObjectPool_1_t1866 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m11556(__this, ___value, method) (( void (*) (ObjectPool_1_t1866 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11556_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m11558_gshared (ObjectPool_1_t1866 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m11558(__this, method) (( int32_t (*) (ObjectPool_1_t1866 *, const MethodInfo*))ObjectPool_1_get_countActive_m11558_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m11560_gshared (ObjectPool_1_t1866 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m11560(__this, method) (( int32_t (*) (ObjectPool_1_t1866 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11560_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11562_gshared (ObjectPool_1_t1866 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m11562(__this, method) (( Object_t * (*) (ObjectPool_1_t1866 *, const MethodInfo*))ObjectPool_1_Get_m11562_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11564_gshared (ObjectPool_1_t1866 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m11564(__this, ___element, method) (( void (*) (ObjectPool_1_t1866 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m11564_gshared)(__this, ___element, method)
