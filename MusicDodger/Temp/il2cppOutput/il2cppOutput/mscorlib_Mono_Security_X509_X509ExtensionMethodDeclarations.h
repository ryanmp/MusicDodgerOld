﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Extension
struct X509Extension_t909;
// Mono.Security.ASN1
struct ASN1_t900;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t370;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" void X509Extension__ctor_m4883 (X509Extension_t909 * __this, ASN1_t900 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" void X509Extension_Decode_m4884 (X509Extension_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" bool X509Extension_Equals_m4885 (X509Extension_t909 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" int32_t X509Extension_GetHashCode_m4886 (X509Extension_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void X509Extension_WriteLine_m4887 (X509Extension_t909 * __this, StringBuilder_t370 * ___sb, int32_t ___n, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" String_t* X509Extension_ToString_m4888 (X509Extension_t909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
