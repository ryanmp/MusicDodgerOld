#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t882;
// Mono.Math.BigInteger
struct BigInteger_t881;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4604 (ModulusRing_t882 * __this, BigInteger_t881 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4605 (ModulusRing_t882 * __this, BigInteger_t881 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t881 * ModulusRing_Multiply_m4606 (ModulusRing_t882 * __this, BigInteger_t881 * ___a, BigInteger_t881 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t881 * ModulusRing_Difference_m4607 (ModulusRing_t882 * __this, BigInteger_t881 * ___a, BigInteger_t881 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t881 * ModulusRing_Pow_m4608 (ModulusRing_t882 * __this, BigInteger_t881 * ___a, BigInteger_t881 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t881 * ModulusRing_Pow_m4609 (ModulusRing_t882 * __this, uint32_t ___b, BigInteger_t881 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
