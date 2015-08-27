#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t423;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t422;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2528;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t2529;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t2530;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t2074;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2072;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t2075;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t2076;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
#define List_1__ctor_m3274(__this, method) (( void (*) (List_1_t423 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m14428(__this, ___capacity, method) (( void (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m14429(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14430(__this, method) (( Object_t* (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14431(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t423 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14432(__this, method) (( Object_t * (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14433(__this, ___item, method) (( int32_t (*) (List_1_t423 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14434(__this, ___item, method) (( bool (*) (List_1_t423 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14435(__this, ___item, method) (( int32_t (*) (List_1_t423 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14436(__this, ___index, ___item, method) (( void (*) (List_1_t423 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14437(__this, ___item, method) (( void (*) (List_1_t423 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14438(__this, method) (( bool (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14439(__this, method) (( bool (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14440(__this, method) (( Object_t * (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14441(__this, method) (( bool (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14442(__this, method) (( bool (*) (List_1_t423 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14443(__this, ___index, method) (( Object_t * (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14444(__this, ___index, ___value, method) (( void (*) (List_1_t423 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m14445(__this, ___item, method) (( void (*) (List_1_t423 *, GUILayoutEntry_t422 *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14446(__this, ___newCount, method) (( void (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14447(__this, ___collection, method) (( void (*) (List_1_t423 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14448(__this, ___enumerable, method) (( void (*) (List_1_t423 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14449(__this, ___collection, method) (( void (*) (List_1_t423 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m14450(__this, method) (( ReadOnlyCollection_1_t2074 * (*) (List_1_t423 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m14451(__this, method) (( void (*) (List_1_t423 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m14452(__this, ___item, method) (( bool (*) (List_1_t423 *, GUILayoutEntry_t422 *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14453(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t423 *, GUILayoutEntryU5BU5D_t2072*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m14454(__this, ___match, method) (( GUILayoutEntry_t422 * (*) (List_1_t423 *, Predicate_1_t2075 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14455(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2075 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14456(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t423 *, int32_t, int32_t, Predicate_1_t2075 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m3271(__this, method) (( Enumerator_t657  (*) (List_1_t423 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m14457(__this, ___item, method) (( int32_t (*) (List_1_t423 *, GUILayoutEntry_t422 *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14458(__this, ___start, ___delta, method) (( void (*) (List_1_t423 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14459(__this, ___index, method) (( void (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m14460(__this, ___index, ___item, method) (( void (*) (List_1_t423 *, int32_t, GUILayoutEntry_t422 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14461(__this, ___collection, method) (( void (*) (List_1_t423 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m14462(__this, ___item, method) (( bool (*) (List_1_t423 *, GUILayoutEntry_t422 *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14463(__this, ___match, method) (( int32_t (*) (List_1_t423 *, Predicate_1_t2075 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14464(__this, ___index, method) (( void (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m14465(__this, method) (( void (*) (List_1_t423 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m14466(__this, method) (( void (*) (List_1_t423 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14467(__this, ___comparison, method) (( void (*) (List_1_t423 *, Comparison_1_t2076 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m14468(__this, method) (( GUILayoutEntryU5BU5D_t2072* (*) (List_1_t423 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m14469(__this, method) (( void (*) (List_1_t423 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m14470(__this, method) (( int32_t (*) (List_1_t423 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14471(__this, ___value, method) (( void (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m14472(__this, method) (( int32_t (*) (List_1_t423 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m14473(__this, ___index, method) (( GUILayoutEntry_t422 * (*) (List_1_t423 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m14474(__this, ___index, ___value, method) (( void (*) (List_1_t423 *, int32_t, GUILayoutEntry_t422 *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
