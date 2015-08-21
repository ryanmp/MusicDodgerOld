#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_t1261;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::.ctor()
extern "C" void SHA1CryptoServiceProvider__ctor_m7182 (SHA1CryptoServiceProvider_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Finalize()
extern "C" void SHA1CryptoServiceProvider_Finalize_m7183 (SHA1CryptoServiceProvider_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Dispose(System.Boolean)
extern "C" void SHA1CryptoServiceProvider_Dispose_m7184 (SHA1CryptoServiceProvider_t1261 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1CryptoServiceProvider_HashCore_m7185 (SHA1CryptoServiceProvider_t1261 * __this, ByteU5BU5D_t36* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1CryptoServiceProvider::HashFinal()
extern "C" ByteU5BU5D_t36* SHA1CryptoServiceProvider_HashFinal_m7186 (SHA1CryptoServiceProvider_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1CryptoServiceProvider::Initialize()
extern "C" void SHA1CryptoServiceProvider_Initialize_m7187 (SHA1CryptoServiceProvider_t1261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
