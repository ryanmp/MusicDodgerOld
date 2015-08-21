#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t99;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t301;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m9142(__this, ___object, ___method, method) (( void (*) (Action_1_t99 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9115_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
#define Action_1_Invoke_m1463(__this, ___obj, method) (( void (*) (Action_1_t99 *, IUserProfileU5BU5D_t301*, const MethodInfo*))Action_1_Invoke_m9116_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m9143(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t99 *, IUserProfileU5BU5D_t301*, AsyncCallback_t123 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9118_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m9144(__this, ___result, method) (( void (*) (Action_1_t99 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9120_gshared)(__this, ___result, method)
