#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t536;
// System.String
struct String_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t499;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t501;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2000 (X509SubjectKeyIdentifierExtension_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2001 (X509SubjectKeyIdentifierExtension_t536 * __this, AsnEncodedData_t499 * ___encodedSubjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2002 (X509SubjectKeyIdentifierExtension_t536 * __this, ByteU5BU5D_t36* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2003 (X509SubjectKeyIdentifierExtension_t536 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2004 (X509SubjectKeyIdentifierExtension_t536 * __this, PublicKey_t501 * ___key, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m2005 (X509SubjectKeyIdentifierExtension_t536 * __this, PublicKey_t501 * ___key, int32_t ___algorithm, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C" String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m2006 (X509SubjectKeyIdentifierExtension_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509SubjectKeyIdentifierExtension_CopyFrom_m2007 (X509SubjectKeyIdentifierExtension_t536 * __this, AsnEncodedData_t499 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m2008 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m2009 (Object_t * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C" ByteU5BU5D_t36* X509SubjectKeyIdentifierExtension_FromHex_m2010 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C" int32_t X509SubjectKeyIdentifierExtension_Decode_m2011 (X509SubjectKeyIdentifierExtension_t536 * __this, ByteU5BU5D_t36* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C" ByteU5BU5D_t36* X509SubjectKeyIdentifierExtension_Encode_m2012 (X509SubjectKeyIdentifierExtension_t536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C" String_t* X509SubjectKeyIdentifierExtension_ToString_m2013 (X509SubjectKeyIdentifierExtension_t536 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
