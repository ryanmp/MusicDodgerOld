#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t643;
// System.Security.Cryptography.CspParameters
struct CspParameters_t799;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t708;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C" void DSACryptoServiceProvider__ctor_m6977 (DSACryptoServiceProvider_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void DSACryptoServiceProvider__ctor_m2558 (DSACryptoServiceProvider_t643 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void DSACryptoServiceProvider__ctor_m6978 (DSACryptoServiceProvider_t643 * __this, int32_t ___dwKeySize, CspParameters_t799 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C" void DSACryptoServiceProvider__cctor_m6979 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C" void DSACryptoServiceProvider_Finalize_m6980 (DSACryptoServiceProvider_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C" int32_t DSACryptoServiceProvider_get_KeySize_m6981 (DSACryptoServiceProvider_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C" bool DSACryptoServiceProvider_get_PublicOnly_m2547 (DSACryptoServiceProvider_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" DSAParameters_t644  DSACryptoServiceProvider_ExportParameters_m6982 (DSACryptoServiceProvider_t643 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSACryptoServiceProvider_ImportParameters_m6983 (DSACryptoServiceProvider_t643 * __this, DSAParameters_t644  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t36* DSACryptoServiceProvider_CreateSignature_m6984 (DSACryptoServiceProvider_t643 * __this, ByteU5BU5D_t36* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSACryptoServiceProvider_VerifySignature_m6985 (DSACryptoServiceProvider_t643 * __this, ByteU5BU5D_t36* ___rgbHash, ByteU5BU5D_t36* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void DSACryptoServiceProvider_Dispose_m6986 (DSACryptoServiceProvider_t643 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void DSACryptoServiceProvider_OnKeyGenerated_m6987 (DSACryptoServiceProvider_t643 * __this, Object_t * ___sender, EventArgs_t708 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
