#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t913;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t912;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.ASN1
struct ASN1_t900;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4931 (EncryptedData_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4932 (EncryptedData_t913 * __this, ASN1_t900 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t912 * EncryptedData_get_EncryptionAlgorithm_m4933 (EncryptedData_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t36* EncryptedData_get_EncryptedContent_m4934 (EncryptedData_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
