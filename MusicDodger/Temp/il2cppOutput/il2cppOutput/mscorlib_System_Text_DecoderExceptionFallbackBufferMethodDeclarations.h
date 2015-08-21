﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t1305;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C" void DecoderExceptionFallbackBuffer__ctor_m7399 (DecoderExceptionFallbackBuffer_t1305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderExceptionFallbackBuffer_get_Remaining_m7400 (DecoderExceptionFallbackBuffer_t1305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderExceptionFallbackBuffer_Fallback_m7401 (DecoderExceptionFallbackBuffer_t1305 * __this, ByteU5BU5D_t36* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m7402 (DecoderExceptionFallbackBuffer_t1305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
