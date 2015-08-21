#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t181;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t57;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m824 (CameraCallback_t181 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m825 (CameraCallback_t181 * __this, Camera_t57 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t181(Il2CppObject* delegate, Camera_t57 * ___cam);
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m826 (CameraCallback_t181 * __this, Camera_t57 * ___cam, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m827 (CameraCallback_t181 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
