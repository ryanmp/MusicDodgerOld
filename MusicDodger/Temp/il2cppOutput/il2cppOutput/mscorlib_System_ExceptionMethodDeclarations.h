﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Exception
struct Exception_t27;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Text.StringBuilder
struct StringBuilder_t319;
// System.Reflection.MethodBase
struct MethodBase_t709;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
extern "C" void Exception__ctor_m5375 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C" void Exception__ctor_m182 (Exception_t27 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception__ctor_m3396 (Exception_t27 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" void Exception__ctor_m3395 (Exception_t27 * __this, String_t* ___message, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C" Exception_t27 * Exception_get_InnerException_m6246 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" void Exception_set_HResult_m3394 (Exception_t27 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C" String_t* Exception_get_ClassName_m6247 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C" String_t* Exception_get_Message_m6248 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C" String_t* Exception_get_Source_m6249 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C" String_t* Exception_get_StackTrace_m6250 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception_GetObjectData_m4491 (Exception_t27 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C" String_t* Exception_ToString_m6251 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C" void Exception_GetFullNameForStackTrace_m6252 (Exception_t27 * __this, StringBuilder_t319 * ___sb, MethodBase_t709 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C" Type_t * Exception_GetType_m6253 (Exception_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
