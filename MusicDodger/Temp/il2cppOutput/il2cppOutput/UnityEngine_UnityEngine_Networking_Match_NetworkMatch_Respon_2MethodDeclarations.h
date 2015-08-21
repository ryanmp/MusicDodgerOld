#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t363;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t246;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m10744(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t363 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m10724_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m10745(__this, ___response, method) (( void (*) (ResponseDelegate_1_t363 *, ListMatchResponse_t246 *, const MethodInfo*))ResponseDelegate_1_Invoke_m10726_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m10746(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t363 *, ListMatchResponse_t246 *, AsyncCallback_t123 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m10728_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m10747(__this, ___result, method) (( void (*) (ResponseDelegate_1_t363 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m10730_gshared)(__this, ___result, method)
