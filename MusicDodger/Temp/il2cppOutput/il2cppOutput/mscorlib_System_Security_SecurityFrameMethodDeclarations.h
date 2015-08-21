#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityFrame
struct SecurityFrame_t1296;
// System.Reflection.Assembly
struct Assembly_t640;
// System.AppDomain
struct AppDomain_t1294;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1295;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t457;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m7362 (SecurityFrame_t1296 * __this, RuntimeSecurityFrame_t1295 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m7363 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m7364 (SecurityFrame_t1296 * __this, RuntimeSecurityFrame_t1295 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t640 * SecurityFrame_get_Assembly_m7365 (SecurityFrame_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t1294 * SecurityFrame_get_Domain_m7366 (SecurityFrame_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m7367 (SecurityFrame_t1296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t457 * SecurityFrame_GetStack_m7368 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
