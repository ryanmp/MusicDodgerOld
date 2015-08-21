#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t509;
// System.Security.Cryptography.DSA
struct DSA_t623;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t653;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t624;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t498;
// Mono.Security.ASN1
struct ASN1_t625;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t379;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m2601 (X509Certificate_t509 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m2947 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m2948 (X509Certificate_t509 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t36* X509Certificate_GetUnsignedBigInteger_m2949 (X509Certificate_t509 * __this, ByteU5BU5D_t36* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t623 * X509Certificate_get_DSA_m2557 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C" void X509Certificate_set_DSA_m2599 (X509Certificate_t509 * __this, DSA_t623 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C" X509ExtensionCollection_t653 * X509Certificate_get_Extensions_m2617 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C" ByteU5BU5D_t36* X509Certificate_get_Hash_m2950 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m2951 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C" String_t* X509Certificate_get_KeyAlgorithm_m2952 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t36* X509Certificate_get_KeyAlgorithmParameters_m2953 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C" void X509Certificate_set_KeyAlgorithmParameters_m2954 (X509Certificate_t509 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t36* X509Certificate_get_PublicKey_m2955 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C" RSA_t624 * X509Certificate_get_RSA_m2956 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C" void X509Certificate_set_RSA_m2957 (X509Certificate_t509 * __this, RSA_t624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t36* X509Certificate_get_RawData_m2958 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C" ByteU5BU5D_t36* X509Certificate_get_SerialNumber_m2959 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C" ByteU5BU5D_t36* X509Certificate_get_Signature_m2960 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C" String_t* X509Certificate_get_SignatureAlgorithm_m2961 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m2962 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t129  X509Certificate_get_ValidFrom_m2963 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t129  X509Certificate_get_ValidUntil_m2964 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C" int32_t X509Certificate_get_Version_m2591 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C" bool X509Certificate_get_IsCurrent_m2965 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C" bool X509Certificate_WasCurrent_m2966 (X509Certificate_t509 * __this, DateTime_t129  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Certificate_VerifySignature_m2967 (X509Certificate_t509 * __this, DSA_t623 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Certificate_VerifySignature_m2968 (X509Certificate_t509 * __this, RSA_t624 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Certificate_VerifySignature_m2616 (X509Certificate_t509 * __this, AsymmetricAlgorithm_t498 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C" bool X509Certificate_get_IsSelfSigned_m2969 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t625 * X509Certificate_GetIssuerName_m2586 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t625 * X509Certificate_GetSubjectName_m2589 (X509Certificate_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m2970 (X509Certificate_t509 * __this, SerializationInfo_t379 * ___info, StreamingContext_t380  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t36* X509Certificate_PEM_m2971 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
