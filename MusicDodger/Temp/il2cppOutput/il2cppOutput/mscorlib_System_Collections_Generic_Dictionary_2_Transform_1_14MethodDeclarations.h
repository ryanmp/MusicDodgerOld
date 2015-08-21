﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t1598;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m9858(__this, ___object, ___method, method) (( void (*) (Transform_1_t1598 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m8881_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m9859(__this, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Transform_1_t1598 *, String_t*, String_t*, const MethodInfo*))Transform_1_Invoke_m8882_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m9860(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1598 *, String_t*, String_t*, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m8883_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m9861(__this, ___result, method) (( DictionaryEntry_t622  (*) (Transform_1_t1598 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m8884_gshared)(__this, ___result, method)
