#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1061;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t397;
// System.IAsyncResult
struct IAsyncResult_t122;
// System.AsyncCallback
struct AsyncCallback_t123;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void AddEventAdapter__ctor_m6147 (AddEventAdapter_t1061 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C" void AddEventAdapter_Invoke_m6148 (AddEventAdapter_t1061 * __this, Object_t * ____this, Delegate_t397 * ___dele, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t1061(Il2CppObject* delegate, Object_t * ____this, Delegate_t397 * ___dele);
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C" Object_t * AddEventAdapter_BeginInvoke_m6149 (AddEventAdapter_t1061 * __this, Object_t * ____this, Delegate_t397 * ___dele, AsyncCallback_t123 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C" void AddEventAdapter_EndInvoke_m6150 (AddEventAdapter_t1061 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
