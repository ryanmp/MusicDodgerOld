#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t884;
// Mono.Math.BigInteger
struct BigInteger_t883;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4615 (ModulusRing_t884 * __this, BigInteger_t883 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4616 (ModulusRing_t884 * __this, BigInteger_t883 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t883 * ModulusRing_Multiply_m4617 (ModulusRing_t884 * __this, BigInteger_t883 * ___a, BigInteger_t883 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t883 * ModulusRing_Difference_m4618 (ModulusRing_t884 * __this, BigInteger_t883 * ___a, BigInteger_t883 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t883 * ModulusRing_Pow_m4619 (ModulusRing_t884 * __this, BigInteger_t883 * ___a, BigInteger_t883 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t883 * ModulusRing_Pow_m4620 (ModulusRing_t884 * __this, uint32_t ___b, BigInteger_t883 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
