#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t82;
struct AsyncOperation_t82_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m814 (AsyncOperation_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m815 (AsyncOperation_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m816 (AsyncOperation_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t82_marshal(const AsyncOperation_t82& unmarshaled, AsyncOperation_t82_marshaled& marshaled);
void AsyncOperation_t82_marshal_back(const AsyncOperation_t82_marshaled& marshaled, AsyncOperation_t82& unmarshaled);
void AsyncOperation_t82_marshal_cleanup(AsyncOperation_t82_marshaled& marshaled);
