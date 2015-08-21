#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t815;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t498;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m3628 (RSAPKCS1KeyExchangeFormatter_t815 * __this, AsymmetricAlgorithm_t498 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t36* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m7136 (RSAPKCS1KeyExchangeFormatter_t815 * __this, ByteU5BU5D_t36* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m7137 (RSAPKCS1KeyExchangeFormatter_t815 * __this, AsymmetricAlgorithm_t498 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
