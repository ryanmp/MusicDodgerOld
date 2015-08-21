#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t624;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t704;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1256  : public AsymmetricSignatureFormatter_t760
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t624 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t704 * ___hash_1;
};
