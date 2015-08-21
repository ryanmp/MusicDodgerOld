#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t1072;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t431;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Exception
struct Exception_t27;
// System.Reflection.Binder
struct Binder_t438;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m6286 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t431* MonoCMethod_GetParameters_m6287 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m6288 (MonoCMethod_t1072 * __this, Object_t * ___obj, ObjectU5BU5D_t270* ___parameters, Exception_t27 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m6289 (MonoCMethod_t1072 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t438 * ___binder, ObjectU5BU5D_t270* ___parameters, CultureInfo_t405 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m6290 (MonoCMethod_t1072 * __this, int32_t ___invokeAttr, Binder_t438 * ___binder, ObjectU5BU5D_t270* ___parameters, CultureInfo_t405 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1405  MonoCMethod_get_MethodHandle_m6291 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m6292 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m6293 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m6294 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m6295 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m6296 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoCMethod_IsDefined_m6297 (MonoCMethod_t1072 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t270* MonoCMethod_GetCustomAttributes_m6298 (MonoCMethod_t1072 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t270* MonoCMethod_GetCustomAttributes_m6299 (MonoCMethod_t1072 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m6300 (MonoCMethod_t1072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m6301 (MonoCMethod_t1072 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
