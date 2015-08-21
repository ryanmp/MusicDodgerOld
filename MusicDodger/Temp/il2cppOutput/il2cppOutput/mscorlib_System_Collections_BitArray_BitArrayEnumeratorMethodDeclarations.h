#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.BitArray/BitArrayEnumerator
struct BitArrayEnumerator_t931;
// System.Object
struct Object_t;
// System.Collections.BitArray
struct BitArray_t604;

// System.Void System.Collections.BitArray/BitArrayEnumerator::.ctor(System.Collections.BitArray)
extern "C" void BitArrayEnumerator__ctor_m5099 (BitArrayEnumerator_t931 * __this, BitArray_t604 * ___ba, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray/BitArrayEnumerator::get_Current()
extern "C" Object_t * BitArrayEnumerator_get_Current_m5100 (BitArrayEnumerator_t931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray/BitArrayEnumerator::MoveNext()
extern "C" bool BitArrayEnumerator_MoveNext_m5101 (BitArrayEnumerator_t931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray/BitArrayEnumerator::checkVersion()
extern "C" void BitArrayEnumerator_checkVersion_m5102 (BitArrayEnumerator_t931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
