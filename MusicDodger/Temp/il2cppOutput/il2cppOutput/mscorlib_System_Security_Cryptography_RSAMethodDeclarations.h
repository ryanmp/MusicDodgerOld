#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSA
struct RSA_t624;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C" void RSA__ctor_m3577 (RSA_t624 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C" RSA_t624 * RSA_Create_m2556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C" RSA_t624 * RSA_Create_m7121 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C" void RSA_ZeroizePrivateKey_m7122 (RSA_t624 * __this, RSAParameters_t644  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C" void RSA_FromXmlString_m7123 (RSA_t624 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C" String_t* RSA_ToXmlString_m7124 (RSA_t624 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
