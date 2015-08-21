#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t806;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t498;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m6999 (DSASignatureDeformatter_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m3593 (DSASignatureDeformatter_t806 * __this, AsymmetricAlgorithm_t498 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m7000 (DSASignatureDeformatter_t806 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m7001 (DSASignatureDeformatter_t806 * __this, AsymmetricAlgorithm_t498 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m7002 (DSASignatureDeformatter_t806 * __this, ByteU5BU5D_t36* ___rgbHash, ByteU5BU5D_t36* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
