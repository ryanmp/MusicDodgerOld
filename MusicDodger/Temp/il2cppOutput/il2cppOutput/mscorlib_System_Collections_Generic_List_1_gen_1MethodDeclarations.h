#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t1889;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Single[]
struct SingleU5BU5D_t54;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m247_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1__ctor_m247(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1__ctor_m247_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9062_gshared (List_1_t64 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9062(__this, ___capacity, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1__ctor_m9062_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m9063_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9063(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9063_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9064_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9064(__this, method) (( Object_t* (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9065_gshared (List_1_t64 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9065(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9065_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9066_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9066(__this, method) (( Object_t * (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9067_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9067(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9067_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9068_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9068(__this, ___item, method) (( bool (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9069_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9069(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9070_gshared (List_1_t64 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9070(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9071_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9071(__this, ___item, method) (( void (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9071_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9072_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9072(__this, method) (( bool (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9072_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9073_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9073(__this, method) (( Object_t * (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9074_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9074(__this, ___index, method) (( Object_t * (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9075_gshared (List_1_t64 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9075(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m9076_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m9076(__this, ___item, method) (( void (*) (List_1_t64 *, float, const MethodInfo*))List_1_Add_m9076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9077_gshared (List_1_t64 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9077(__this, ___newCount, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9077_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m9078_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_Clear_m9078(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1_Clear_m9078_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m9079_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m9079(__this, ___item, method) (( bool (*) (List_1_t64 *, float, const MethodInfo*))List_1_Contains_m9079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9080_gshared (List_1_t64 * __this, SingleU5BU5D_t54* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9080(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, SingleU5BU5D_t54*, int32_t, const MethodInfo*))List_1_CopyTo_m9080_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t1537  List_1_GetEnumerator_m9081_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9081(__this, method) (( Enumerator_t1537  (*) (List_1_t64 *, const MethodInfo*))List_1_GetEnumerator_m9081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9082_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m9082(__this, ___item, method) (( int32_t (*) (List_1_t64 *, float, const MethodInfo*))List_1_IndexOf_m9082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9083_gshared (List_1_t64 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9083(__this, ___start, ___delta, method) (( void (*) (List_1_t64 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9083_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9084_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9084(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9084_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9085_gshared (List_1_t64 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m9085(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, float, const MethodInfo*))List_1_Insert_m9085_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m9086_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m9086(__this, ___item, method) (( bool (*) (List_1_t64 *, float, const MethodInfo*))List_1_Remove_m9086_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9087_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9087(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9087_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t54* List_1_ToArray_m9088_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_ToArray_m9088(__this, method) (( SingleU5BU5D_t54* (*) (List_1_t64 *, const MethodInfo*))List_1_ToArray_m9088_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9089_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9089(__this, method) (( int32_t (*) (List_1_t64 *, const MethodInfo*))List_1_get_Capacity_m9089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9090_gshared (List_1_t64 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9090(__this, ___value, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9090_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m9091_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_get_Count_m9091(__this, method) (( int32_t (*) (List_1_t64 *, const MethodInfo*))List_1_get_Count_m9091_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m9092_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9092(__this, ___index, method) (( float (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_get_Item_m9092_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9093_gshared (List_1_t64 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m9093(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, float, const MethodInfo*))List_1_set_Item_m9093_gshared)(__this, ___index, ___value, method)
