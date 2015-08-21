#pragma once
#include <stdint.h>
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t704;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// Mono.Security.Cryptography.HMAC
struct  HMAC_t725  : public KeyedHashAlgorithm_t726
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t704 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t36* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t36* ___outerPad_8;
};
