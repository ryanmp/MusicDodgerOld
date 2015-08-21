#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t930;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t457;
// System.Collections.IComparer
struct IComparer_t452;

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ReadOnlyArrayListWrapper__ctor_m5058 (ReadOnlyArrayListWrapper_t930 * __this, ArrayList_t457 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C" String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m5059 (ReadOnlyArrayListWrapper_t930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C" bool ReadOnlyArrayListWrapper_get_IsReadOnly_m5060 (ReadOnlyArrayListWrapper_t930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyArrayListWrapper_get_Item_m5061 (ReadOnlyArrayListWrapper_t930 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyArrayListWrapper_set_Item_m5062 (ReadOnlyArrayListWrapper_t930 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C" void ReadOnlyArrayListWrapper_Sort_m5063 (ReadOnlyArrayListWrapper_t930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ReadOnlyArrayListWrapper_Sort_m5064 (ReadOnlyArrayListWrapper_t930 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
