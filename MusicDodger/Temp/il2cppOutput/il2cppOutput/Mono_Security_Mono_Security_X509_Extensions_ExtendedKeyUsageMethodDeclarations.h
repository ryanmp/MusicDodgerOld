﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t718;
// System.Collections.ArrayList
struct ArrayList_t457;
// Mono.Security.X509.X509Extension
struct X509Extension_t628;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void ExtendedKeyUsageExtension__ctor_m3035 (ExtendedKeyUsageExtension_t718 * __this, X509Extension_t628 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
extern "C" void ExtendedKeyUsageExtension_Decode_m3036 (ExtendedKeyUsageExtension_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
extern "C" void ExtendedKeyUsageExtension_Encode_m3037 (ExtendedKeyUsageExtension_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
extern "C" ArrayList_t457 * ExtendedKeyUsageExtension_get_KeyPurpose_m3038 (ExtendedKeyUsageExtension_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
extern "C" String_t* ExtendedKeyUsageExtension_ToString_m3039 (ExtendedKeyUsageExtension_t718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
