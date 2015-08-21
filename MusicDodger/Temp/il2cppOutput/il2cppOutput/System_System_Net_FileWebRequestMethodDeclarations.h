#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest
struct FileWebRequest_t472;
// System.Uri
struct Uri_t255;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C" void FileWebRequest__ctor_m1707 (FileWebRequest_t472 * __this, Uri_t255 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest__ctor_m1708 (FileWebRequest_t472 * __this, SerializationInfo_t379 * ___serializationInfo, StreamingContext_t380  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1709 (FileWebRequest_t472 * __this, SerializationInfo_t379 * ___serializationInfo, StreamingContext_t380  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_GetObjectData_m1710 (FileWebRequest_t472 * __this, SerializationInfo_t379 * ___serializationInfo, StreamingContext_t380  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
