#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t1758;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42MethodDeclarations.h"
#define Transform_1__ctor_m12021(__this, ___object, ___method, method) (( void (*) (Transform_1_t1758 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11996_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m12022(__this, ___key, ___value, method) (( DictionaryEntry_t620  (*) (Transform_1_t1758 *, String_t*, bool, const MethodInfo*))Transform_1_Invoke_m11997_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m12023(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1758 *, String_t*, bool, AsyncCallback_t119 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11998_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m12024(__this, ___result, method) (( DictionaryEntry_t620  (*) (Transform_1_t1758 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11999_gshared)(__this, ___result, method)
