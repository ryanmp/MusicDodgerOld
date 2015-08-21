#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t625;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t651;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t627;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t507;
// System.Security.Cryptography.DSA
struct DSA_t621;
// System.Security.Cryptography.RSA
struct RSA_t622;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t496;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2987 (X509Crl_t625 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2988 (X509Crl_t625 * __this, ByteU5BU5D_t36* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t651 * X509Crl_get_Extensions_m2608 (X509Crl_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t36* X509Crl_get_Hash_m2989 (X509Crl_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2616 (X509Crl_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t125  X509Crl_get_NextUpdate_m2614 (X509Crl_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2990 (X509Crl_t625 * __this, ByteU5BU5D_t36* ___array1, ByteU5BU5D_t36* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t627 * X509Crl_GetCrlEntry_m2612 (X509Crl_t625 * __this, X509Certificate_t507 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t627 * X509Crl_GetCrlEntry_m2991 (X509Crl_t625 * __this, ByteU5BU5D_t36* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2992 (X509Crl_t625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2993 (X509Crl_t625 * __this, DSA_t621 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2994 (X509Crl_t625 * __this, RSA_t622 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2611 (X509Crl_t625 * __this, AsymmetricAlgorithm_t496 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
