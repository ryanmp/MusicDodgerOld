#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t1990;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t168;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m13480(__this, ___object, ___method, method) (( void (*) (Transform_1_t1990 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12653_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m13481(__this, ___key, ___value, method) (( DictionaryEntry_t897  (*) (Transform_1_t1990 *, Graphic_t168 *, int32_t, const MethodInfo*))Transform_1_Invoke_m12654_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m13482(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1990 *, Graphic_t168 *, int32_t, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12655_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m13483(__this, ___result, method) (( DictionaryEntry_t897  (*) (Transform_1_t1990 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12656_gshared)(__this, ___result, method)
