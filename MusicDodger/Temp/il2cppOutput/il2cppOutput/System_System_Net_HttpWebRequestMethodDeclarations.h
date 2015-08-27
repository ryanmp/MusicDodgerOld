#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t759;
// System.Uri
struct Uri_t528;
// System.Net.ServicePoint
struct ServicePoint_t758;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m3531 (HttpWebRequest_t759 * __this, Uri_t528 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m3532 (HttpWebRequest_t759 * __this, SerializationInfo_t649 * ___serializationInfo, StreamingContext_t650  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m3533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3534 (HttpWebRequest_t759 * __this, SerializationInfo_t649 * ___serializationInfo, StreamingContext_t650  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t528 * HttpWebRequest_get_Address_m3535 (HttpWebRequest_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t758 * HttpWebRequest_get_ServicePoint_m3536 (HttpWebRequest_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t758 * HttpWebRequest_GetServicePoint_m3537 (HttpWebRequest_t759 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m3538 (HttpWebRequest_t759 * __this, SerializationInfo_t649 * ___serializationInfo, StreamingContext_t650  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
