﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1591;
// System.String
struct String_t;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1589;
// System.Object
struct Object_t;

// System.Void System.Text.EncoderReplacementFallback::.ctor()
extern "C" void EncoderReplacementFallback__ctor_m9268 (EncoderReplacementFallback_t1591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
extern "C" void EncoderReplacementFallback__ctor_m9269 (EncoderReplacementFallback_t1591 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.EncoderReplacementFallback::get_DefaultString()
extern "C" String_t* EncoderReplacementFallback_get_DefaultString_m9270 (EncoderReplacementFallback_t1591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallbackBuffer System.Text.EncoderReplacementFallback::CreateFallbackBuffer()
extern "C" EncoderFallbackBuffer_t1589 * EncoderReplacementFallback_CreateFallbackBuffer_m9271 (EncoderReplacementFallback_t1591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallback::Equals(System.Object)
extern "C" bool EncoderReplacementFallback_Equals_m9272 (EncoderReplacementFallback_t1591 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallback::GetHashCode()
extern "C" int32_t EncoderReplacementFallback_GetHashCode_m9273 (EncoderReplacementFallback_t1591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;