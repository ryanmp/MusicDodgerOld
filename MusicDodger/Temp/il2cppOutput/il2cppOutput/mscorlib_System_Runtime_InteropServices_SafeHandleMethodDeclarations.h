#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t853;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m6385 (SafeHandle_t853 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C" void SafeHandle_Close_m6386 (SafeHandle_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C" void SafeHandle_DangerousAddRef_m6387 (SafeHandle_t853 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m6388 (SafeHandle_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C" void SafeHandle_DangerousRelease_m6389 (SafeHandle_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" void SafeHandle_Dispose_m6390 (SafeHandle_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m6391 (SafeHandle_t853 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m6392 (SafeHandle_t853 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m6393 (SafeHandle_t853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
