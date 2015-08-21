#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack/Enumerator
struct Enumerator_t943;
// System.Object
struct Object_t;
// System.Collections.Stack
struct Stack_t339;

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m5230 (Enumerator_t943 * __this, Stack_t339 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m5231 (Enumerator_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m5232 (Enumerator_t943 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
