﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t1266;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
extern "C" void SHA512Managed__ctor_m7203 (SHA512Managed_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
extern "C" void SHA512Managed_Initialize_m7204 (SHA512Managed_t1266 * __this, bool ___reuse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
extern "C" void SHA512Managed_Initialize_m7205 (SHA512Managed_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA512Managed_HashCore_m7206 (SHA512Managed_t1266 * __this, ByteU5BU5D_t36* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
extern "C" ByteU5BU5D_t36* SHA512Managed_HashFinal_m7207 (SHA512Managed_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
extern "C" void SHA512Managed_update_m7208 (SHA512Managed_t1266 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
extern "C" void SHA512Managed_processWord_m7209 (SHA512Managed_t1266 * __this, ByteU5BU5D_t36* ___input, int32_t ___inOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA512Managed_unpackWord_m7210 (SHA512Managed_t1266 * __this, uint64_t ___word, ByteU5BU5D_t36* ___output, int32_t ___outOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
extern "C" void SHA512Managed_adjustByteCounts_m7211 (SHA512Managed_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
extern "C" void SHA512Managed_processLength_m7212 (SHA512Managed_t1266 * __this, uint64_t ___lowW, uint64_t ___hiW, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
extern "C" void SHA512Managed_processBlock_m7213 (SHA512Managed_t1266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
extern "C" uint64_t SHA512Managed_rotateRight_m7214 (SHA512Managed_t1266 * __this, uint64_t ___x, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
extern "C" uint64_t SHA512Managed_Ch_m7215 (SHA512Managed_t1266 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
extern "C" uint64_t SHA512Managed_Maj_m7216 (SHA512Managed_t1266 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
extern "C" uint64_t SHA512Managed_Sum0_m7217 (SHA512Managed_t1266 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
extern "C" uint64_t SHA512Managed_Sum1_m7218 (SHA512Managed_t1266 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
extern "C" uint64_t SHA512Managed_Sigma0_m7219 (SHA512Managed_t1266 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
extern "C" uint64_t SHA512Managed_Sigma1_m7220 (SHA512Managed_t1266 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
