#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t1730;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t153;
struct Event_t153_marshaled;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_37MethodDeclarations.h"
#define Transform_1__ctor_m11705(__this, ___object, ___method, method) (( void (*) (Transform_1_t1730 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11683_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m11706(__this, ___key, ___value, method) (( DictionaryEntry_t622  (*) (Transform_1_t1730 *, Event_t153 *, int32_t, const MethodInfo*))Transform_1_Invoke_m11684_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m11707(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1730 *, Event_t153 *, int32_t, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11685_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m11708(__this, ___result, method) (( DictionaryEntry_t622  (*) (Transform_1_t1730 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11686_gshared)(__this, ___result, method)
