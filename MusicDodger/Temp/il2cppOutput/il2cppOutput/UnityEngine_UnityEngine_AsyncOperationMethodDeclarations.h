#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t78;
struct AsyncOperation_t78_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m804 (AsyncOperation_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m805 (AsyncOperation_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m806 (AsyncOperation_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t78_marshal(const AsyncOperation_t78& unmarshaled, AsyncOperation_t78_marshaled& marshaled);
void AsyncOperation_t78_marshal_back(const AsyncOperation_t78_marshaled& marshaled, AsyncOperation_t78& unmarshaled);
void AsyncOperation_t78_marshal_cleanup(AsyncOperation_t78_marshaled& marshaled);
