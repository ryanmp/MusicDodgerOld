#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t501;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t499;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t498;
// System.Security.Cryptography.Oid
struct Oid_t500;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t509;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.DSA
struct DSA_t623;
// System.Security.Cryptography.RSA
struct RSA_t624;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1828 (PublicKey_t501 * __this, X509Certificate_t509 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t499 * PublicKey_get_EncodedKeyValue_m1829 (PublicKey_t501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t499 * PublicKey_get_EncodedParameters_m1830 (PublicKey_t501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t498 * PublicKey_get_Key_m1831 (PublicKey_t501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t500 * PublicKey_get_Oid_m1832 (PublicKey_t501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t36* PublicKey_GetUnsignedBigInteger_m1833 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t623 * PublicKey_DecodeDSA_m1834 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, ByteU5BU5D_t36* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t624 * PublicKey_DecodeRSA_m1835 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
