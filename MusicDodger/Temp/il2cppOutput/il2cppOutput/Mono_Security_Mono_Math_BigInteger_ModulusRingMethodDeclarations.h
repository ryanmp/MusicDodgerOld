#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t686;
// Mono.Math.BigInteger
struct BigInteger_t685;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2735 (ModulusRing_t686 * __this, BigInteger_t685 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2736 (ModulusRing_t686 * __this, BigInteger_t685 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t685 * ModulusRing_Multiply_m2737 (ModulusRing_t686 * __this, BigInteger_t685 * ___a, BigInteger_t685 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t685 * ModulusRing_Difference_m2738 (ModulusRing_t686 * __this, BigInteger_t685 * ___a, BigInteger_t685 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t685 * ModulusRing_Pow_m2739 (ModulusRing_t686 * __this, BigInteger_t685 * ___a, BigInteger_t685 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t685 * ModulusRing_Pow_m2740 (ModulusRing_t686 * __this, uint32_t ___b, BigInteger_t685 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
