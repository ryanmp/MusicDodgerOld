#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t725;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C" void HMAC__ctor_m3058 (HMAC_t725 * __this, String_t* ___hashName, ByteU5BU5D_t36* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t36* HMAC_get_Key_m3059 (HMAC_t725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m3060 (HMAC_t725 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m3061 (HMAC_t725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t36* HMAC_HashFinal_m3062 (HMAC_t725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m3063 (HMAC_t725 * __this, ByteU5BU5D_t36* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C" void HMAC_initializePad_m3064 (HMAC_t725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
