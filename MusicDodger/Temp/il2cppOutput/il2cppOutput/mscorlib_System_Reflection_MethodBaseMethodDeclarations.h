#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t441;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t431;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Reflection.Binder
struct Binder_t438;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.Type[]
struct TypeU5BU5D_t267;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m6173 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C" MethodBase_t441 * MethodBase_GetMethodFromHandleNoGenericCheck_m6174 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1405  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t441 * MethodBase_GetMethodFromIntPtr_m6175 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C" MethodBase_t441 * MethodBase_GetMethodFromHandle_m6176 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1405  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t441 * MethodBase_GetMethodFromHandleInternalType_m6177 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C" int32_t MethodBase_GetParameterCount_m6178 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m6179 (MethodBase_t441 * __this, Object_t * ___obj, ObjectU5BU5D_t270* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m6180 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m6181 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m6182 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m6183 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C" bool MethodBase_get_IsAbstract_m6184 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t MethodBase_get_next_table_index_m6185 (MethodBase_t441 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C" TypeU5BU5D_t267* MethodBase_GetGenericArguments_m6186 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m6187 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m6188 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m6189 (MethodBase_t441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
