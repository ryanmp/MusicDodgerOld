#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t995;
// System.Char[]
struct CharU5BU5D_t369;
// System.String
struct String_t;

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern "C" void NullStreamReader__ctor_m5689 (NullStreamReader_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C" int32_t NullStreamReader_Peek_m5690 (NullStreamReader_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C" int32_t NullStreamReader_Read_m5691 (NullStreamReader_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NullStreamReader_Read_m5692 (NullStreamReader_t995 * __this, CharU5BU5D_t369* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C" String_t* NullStreamReader_ReadLine_m5693 (NullStreamReader_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern "C" String_t* NullStreamReader_ReadToEnd_m5694 (NullStreamReader_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
