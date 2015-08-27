#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList/Enumerator
struct Enumerator_t1218;
// System.Object
struct Object_t;
// System.Collections.SortedList
struct SortedList_t914;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"

// System.Void System.Collections.SortedList/Enumerator::.ctor(System.Collections.SortedList,System.Collections.SortedList/EnumeratorMode)
extern "C" void Enumerator__ctor_m7026 (Enumerator_t1218 * __this, SortedList_t914 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m7027 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::Reset()
extern "C" void Enumerator_Reset_m7028 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m7029 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.SortedList/Enumerator::get_Entry()
extern "C" DictionaryEntry_t897  Enumerator_get_Entry_m7030 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m7031 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m7032 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m7033 (Enumerator_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
