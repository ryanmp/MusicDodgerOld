#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t499;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t497;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t496;
// System.Security.Cryptography.Oid
struct Oid_t498;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t507;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.DSA
struct DSA_t621;
// System.Security.Cryptography.RSA
struct RSA_t622;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1817 (PublicKey_t499 * __this, X509Certificate_t507 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t497 * PublicKey_get_EncodedKeyValue_m1818 (PublicKey_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t497 * PublicKey_get_EncodedParameters_m1819 (PublicKey_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t496 * PublicKey_get_Key_m1820 (PublicKey_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t498 * PublicKey_get_Oid_m1821 (PublicKey_t499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t36* PublicKey_GetUnsignedBigInteger_m1822 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t621 * PublicKey_DecodeDSA_m1823 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, ByteU5BU5D_t36* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t622 * PublicKey_DecodeRSA_m1824 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
