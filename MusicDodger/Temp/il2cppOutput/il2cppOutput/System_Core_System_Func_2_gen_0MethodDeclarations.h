#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t249;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t246;
// System.IAsyncResult
struct IAsyncResult_t194;
// System.AsyncCallback
struct AsyncCallback_t195;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
#define Func_2__ctor_m1957(__this, ___object, ___method, method) (( void (*) (Func_2_t249 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m14016_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m14017(__this, ___arg1, method) (( bool (*) (Func_2_t249 *, Toggle_t246 *, const MethodInfo*))Func_2_Invoke_m14018_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m14019(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t249 *, Toggle_t246 *, AsyncCallback_t195 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m14020_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m14021(__this, ___result, method) (( bool (*) (Func_2_t249 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m14022_gshared)(__this, ___result, method)
