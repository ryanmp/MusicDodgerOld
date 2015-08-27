#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t378;
struct AsyncOperation_t378_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2542 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2543 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2544 (AsyncOperation_t378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t378_marshal(const AsyncOperation_t378& unmarshaled, AsyncOperation_t378_marshaled& marshaled);
void AsyncOperation_t378_marshal_back(const AsyncOperation_t378_marshaled& marshaled, AsyncOperation_t378& unmarshaled);
void AsyncOperation_t378_marshal_cleanup(AsyncOperation_t378_marshaled& marshaled);
