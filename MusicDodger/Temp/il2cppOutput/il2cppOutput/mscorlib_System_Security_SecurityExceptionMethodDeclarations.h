﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t1569;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t1568;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C" void SecurityException__ctor_m9176 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C" void SecurityException__ctor_m9177 (SecurityException_t1569 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException__ctor_m9178 (SecurityException_t1569 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C" Object_t * SecurityException_get_Demanded_m9179 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C" Object_t * SecurityException_get_FirstPermissionThatFailed_m9180 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C" String_t* SecurityException_get_PermissionState_m9181 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C" Type_t * SecurityException_get_PermissionType_m9182 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C" String_t* SecurityException_get_GrantedSet_m9183 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C" String_t* SecurityException_get_RefusedSet_m9184 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException_GetObjectData_m9185 (SecurityException_t1569 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C" String_t* SecurityException_ToString_m9186 (SecurityException_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
