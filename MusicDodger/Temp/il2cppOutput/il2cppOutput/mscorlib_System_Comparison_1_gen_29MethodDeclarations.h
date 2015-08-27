#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2128;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15393_gshared (Comparison_1_t2128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15393(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2128 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15393_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15394_gshared (Comparison_1_t2128 * __this, UILineInfo_t353  ___x, UILineInfo_t353  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15394(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2128 *, UILineInfo_t353 , UILineInfo_t353 , const MethodInfo*))Comparison_1_Invoke_m15394_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15395_gshared (Comparison_1_t2128 * __this, UILineInfo_t353  ___x, UILineInfo_t353  ___y, AsyncCallback_t195 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15395(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2128 *, UILineInfo_t353 , UILineInfo_t353 , AsyncCallback_t195 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15395_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15396_gshared (Comparison_1_t2128 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15396(__this, ___result, method) (( int32_t (*) (Comparison_1_t2128 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15396_gshared)(__this, ___result, method)
