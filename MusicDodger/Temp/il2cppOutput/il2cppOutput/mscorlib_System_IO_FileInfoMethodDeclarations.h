#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileInfo
struct FileInfo_t33;
// System.String
struct String_t;
// System.IO.DirectoryInfo
struct DirectoryInfo_t34;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t649;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C" void FileInfo__ctor_m187 (FileInfo_t33 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileInfo__ctor_m7342 (FileInfo_t33 * __this, SerializationInfo_t649 * ___info, StreamingContext_t650  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C" void FileInfo_InternalRefresh_m7343 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C" bool FileInfo_get_Exists_m7344 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C" String_t* FileInfo_get_Name_m7345 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
extern "C" String_t* FileInfo_get_DirectoryName_m7346 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C" DirectoryInfo_t34 * FileInfo_get_Directory_m188 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C" String_t* FileInfo_ToString_m7347 (FileInfo_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
