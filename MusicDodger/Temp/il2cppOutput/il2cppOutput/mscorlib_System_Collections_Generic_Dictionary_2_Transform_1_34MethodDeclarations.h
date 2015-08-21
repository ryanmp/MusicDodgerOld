#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>
struct Transform_1_t1697;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_32MethodDeclarations.h"
#define Transform_1__ctor_m11371(__this, ___object, ___method, method) (( void (*) (Transform_1_t1697 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11349_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m11372(__this, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Transform_1_t1697 *, String_t*, KeyValuePair_2_t425 , const MethodInfo*))Transform_1_Invoke_m11350_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m11373(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1697 *, String_t*, KeyValuePair_2_t425 , AsyncCallback_t123 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11351_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m11374(__this, ___result, method) (( DictionaryEntry_t622  (*) (Transform_1_t1697 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11352_gshared)(__this, ___result, method)
