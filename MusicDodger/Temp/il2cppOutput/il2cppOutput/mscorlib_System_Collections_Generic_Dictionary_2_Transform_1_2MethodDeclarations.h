#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t1800;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m10894(__this, ___object, ___method, method) (( void (*) (Transform_1_t1800 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10875_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m10895(__this, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Transform_1_t1800 *, String_t*, JSONNode_t2 *, const MethodInfo*))Transform_1_Invoke_m10876_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m10896(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1800 *, String_t*, JSONNode_t2 *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10877_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m10897(__this, ___result, method) (( DictionaryEntry_t897  (*) (Transform_1_t1800 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10878_gshared)(__this, ___result, method)
