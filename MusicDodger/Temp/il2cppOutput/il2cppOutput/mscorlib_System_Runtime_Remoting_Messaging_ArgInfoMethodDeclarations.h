#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t1136;
// System.Reflection.MethodBase
struct MethodBase_t439;
// System.Object[]
struct ObjectU5BU5D_t268;
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C" void ArgInfo__ctor_m6465 (ArgInfo_t1136 * __this, MethodBase_t439 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C" ObjectU5BU5D_t268* ArgInfo_GetInOutArgs_m6466 (ArgInfo_t1136 * __this, ObjectU5BU5D_t268* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
