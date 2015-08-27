#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t917;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1076;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t985;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C" void RSACryptoServiceProvider__ctor_m8949 (RSACryptoServiceProvider_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider__ctor_m5389 (RSACryptoServiceProvider_t917 * __this, CspParameters_t1076 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void RSACryptoServiceProvider__ctor_m4385 (RSACryptoServiceProvider_t917 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C" void RSACryptoServiceProvider__cctor_m8950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider_Common_m8951 (RSACryptoServiceProvider_t917 * __this, int32_t ___dwKeySize, CspParameters_t1076 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C" void RSACryptoServiceProvider_Finalize_m8952 (RSACryptoServiceProvider_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C" int32_t RSACryptoServiceProvider_get_KeySize_m8953 (RSACryptoServiceProvider_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C" bool RSACryptoServiceProvider_get_PublicOnly_m4369 (RSACryptoServiceProvider_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t36* RSACryptoServiceProvider_DecryptValue_m8954 (RSACryptoServiceProvider_t917 * __this, ByteU5BU5D_t36* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t36* RSACryptoServiceProvider_EncryptValue_m8955 (RSACryptoServiceProvider_t917 * __this, ByteU5BU5D_t36* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" RSAParameters_t919  RSACryptoServiceProvider_ExportParameters_m8956 (RSACryptoServiceProvider_t917 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSACryptoServiceProvider_ImportParameters_m8957 (RSACryptoServiceProvider_t917 * __this, RSAParameters_t919  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void RSACryptoServiceProvider_Dispose_m8958 (RSACryptoServiceProvider_t917 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void RSACryptoServiceProvider_OnKeyGenerated_m8959 (RSACryptoServiceProvider_t917 * __this, Object_t * ___sender, EventArgs_t985 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
