#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1278;
// System.IO.Stream
struct Stream_t24;
// System.Text.Encoding
struct Encoding_t626;
// System.Char[]
struct CharU5BU5D_t203;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m7608 (UnexceptionalStreamWriter_t1278 * __this, Stream_t24 * ___stream, Encoding_t626 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m7609 (UnexceptionalStreamWriter_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m7610 (UnexceptionalStreamWriter_t1278 * __this, CharU5BU5D_t203* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m7611 (UnexceptionalStreamWriter_t1278 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m7612 (UnexceptionalStreamWriter_t1278 * __this, CharU5BU5D_t203* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m7613 (UnexceptionalStreamWriter_t1278 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
