#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1346;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t638;
// System.ResolveEventArgs
struct ResolveEventArgs_t1402;
// System.IAsyncResult
struct IAsyncResult_t118;
// System.AsyncCallback
struct AsyncCallback_t119;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m8550 (ResolveEventHandler_t1346 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t638 * ResolveEventHandler_Invoke_m8551 (ResolveEventHandler_t1346 * __this, Object_t * ___sender, ResolveEventArgs_t1402 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t638 * pinvoke_delegate_wrapper_ResolveEventHandler_t1346(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1402 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m8552 (ResolveEventHandler_t1346 * __this, Object_t * ___sender, ResolveEventArgs_t1402 * ___args, AsyncCallback_t119 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t638 * ResolveEventHandler_EndInvoke_m8553 (ResolveEventHandler_t1346 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
