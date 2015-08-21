#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t970;
// System.Text.DecoderFallback
struct DecoderFallback_t1300;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1301;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Char[]
struct CharU5BU5D_t367;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7381 (Decoder_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7382 (Decoder_t970 * __this, DecoderFallback_t1300 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1301 * Decoder_get_FallbackBuffer_m7383 (Decoder_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
