#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t688;
// Mono.Math.BigInteger
struct BigInteger_t687;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2746 (ModulusRing_t688 * __this, BigInteger_t687 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2747 (ModulusRing_t688 * __this, BigInteger_t687 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t687 * ModulusRing_Multiply_m2748 (ModulusRing_t688 * __this, BigInteger_t687 * ___a, BigInteger_t687 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t687 * ModulusRing_Difference_m2749 (ModulusRing_t688 * __this, BigInteger_t687 * ___a, BigInteger_t687 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t687 * ModulusRing_Pow_m2750 (ModulusRing_t688 * __this, BigInteger_t687 * ___a, BigInteger_t687 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t687 * ModulusRing_Pow_m2751 (ModulusRing_t688 * __this, uint32_t ___b, BigInteger_t687 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
