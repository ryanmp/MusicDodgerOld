#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t963;
// Mono.Math.BigInteger
struct BigInteger_t962;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4556 (ModulusRing_t963 * __this, BigInteger_t962 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4557 (ModulusRing_t963 * __this, BigInteger_t962 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t962 * ModulusRing_Multiply_m4558 (ModulusRing_t963 * __this, BigInteger_t962 * ___a, BigInteger_t962 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t962 * ModulusRing_Difference_m4559 (ModulusRing_t963 * __this, BigInteger_t962 * ___a, BigInteger_t962 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t962 * ModulusRing_Pow_m4560 (ModulusRing_t963 * __this, BigInteger_t962 * ___a, BigInteger_t962 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t962 * ModulusRing_Pow_m4561 (ModulusRing_t963 * __this, uint32_t ___b, BigInteger_t962 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
