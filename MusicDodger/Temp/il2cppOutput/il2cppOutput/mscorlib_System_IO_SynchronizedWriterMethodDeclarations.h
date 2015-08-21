#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1001;
// System.IO.TextWriter
struct TextWriter_t659;
// System.Char[]
struct CharU5BU5D_t369;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m5770 (SynchronizedWriter_t1001 * __this, TextWriter_t659 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m5771 (SynchronizedWriter_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m5772 (SynchronizedWriter_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m5773 (SynchronizedWriter_t1001 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m5774 (SynchronizedWriter_t1001 * __this, CharU5BU5D_t369* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m5775 (SynchronizedWriter_t1001 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m5776 (SynchronizedWriter_t1001 * __this, CharU5BU5D_t369* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m5777 (SynchronizedWriter_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m5778 (SynchronizedWriter_t1001 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
