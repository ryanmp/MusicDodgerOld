#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t303;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t1860;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerator_1_t2421;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ICollection_1_t2422;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.IEventSystemHandler>
struct IEnumerable_1_t2423;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.IEventSystemHandler>
struct ReadOnlyCollection_1_t1859;
// UnityEngine.EventSystems.IEventSystemHandler[]
struct IEventSystemHandlerU5BU5D_t1857;
// System.Predicate`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Predicate_1_t1861;
// System.Comparison`1<UnityEngine.EventSystems.IEventSystemHandler>
struct Comparison_1_t1863;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
#define List_1__ctor_m11459(__this, method) (( void (*) (List_1_t303 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.ctor(System.Int32)
#define List_1__ctor_m11460(__this, ___capacity, method) (( void (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::.cctor()
#define List_1__cctor_m11461(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11462(__this, method) (( Object_t* (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11463(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t303 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11464(__this, method) (( Object_t * (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11465(__this, ___item, method) (( int32_t (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11466(__this, ___item, method) (( bool (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11467(__this, ___item, method) (( int32_t (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11468(__this, ___index, ___item, method) (( void (*) (List_1_t303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11469(__this, ___item, method) (( void (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11470(__this, method) (( bool (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11471(__this, method) (( bool (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11472(__this, method) (( Object_t * (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11473(__this, method) (( bool (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11474(__this, method) (( bool (*) (List_1_t303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11475(__this, ___index, method) (( Object_t * (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11476(__this, ___index, ___value, method) (( void (*) (List_1_t303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Add(T)
#define List_1_Add_m11477(__this, ___item, method) (( void (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11478(__this, ___newCount, method) (( void (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11479(__this, ___collection, method) (( void (*) (List_1_t303 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11480(__this, ___enumerable, method) (( void (*) (List_1_t303 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11481(__this, ___collection, method) (( void (*) (List_1_t303 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::AsReadOnly()
#define List_1_AsReadOnly_m11482(__this, method) (( ReadOnlyCollection_1_t1859 * (*) (List_1_t303 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Clear()
#define List_1_Clear_m11483(__this, method) (( void (*) (List_1_t303 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Contains(T)
#define List_1_Contains_m11484(__this, ___item, method) (( bool (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11485(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t303 *, IEventSystemHandlerU5BU5D_t1857*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m11486(__this, ___match, method) (( Object_t * (*) (List_1_t303 *, Predicate_1_t1861 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11487(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1861 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11488(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t303 *, int32_t, int32_t, Predicate_1_t1861 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::GetEnumerator()
#define List_1_GetEnumerator_m11489(__this, method) (( Enumerator_t1862  (*) (List_1_t303 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::IndexOf(T)
#define List_1_IndexOf_m11490(__this, ___item, method) (( int32_t (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11491(__this, ___start, ___delta, method) (( void (*) (List_1_t303 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11492(__this, ___index, method) (( void (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Insert(System.Int32,T)
#define List_1_Insert_m11493(__this, ___index, ___item, method) (( void (*) (List_1_t303 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11494(__this, ___collection, method) (( void (*) (List_1_t303 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Remove(T)
#define List_1_Remove_m11495(__this, ___item, method) (( bool (*) (List_1_t303 *, Object_t *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11496(__this, ___match, method) (( int32_t (*) (List_1_t303 *, Predicate_1_t1861 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11497(__this, ___index, method) (( void (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Reverse()
#define List_1_Reverse_m11498(__this, method) (( void (*) (List_1_t303 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort()
#define List_1_Sort_m11499(__this, method) (( void (*) (List_1_t303 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11500(__this, ___comparison, method) (( void (*) (List_1_t303 *, Comparison_1_t1863 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::ToArray()
#define List_1_ToArray_m11501(__this, method) (( IEventSystemHandlerU5BU5D_t1857* (*) (List_1_t303 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::TrimExcess()
#define List_1_TrimExcess_m11502(__this, method) (( void (*) (List_1_t303 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Capacity()
#define List_1_get_Capacity_m11503(__this, method) (( int32_t (*) (List_1_t303 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11504(__this, ___value, method) (( void (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Count()
#define List_1_get_Count_m11505(__this, method) (( int32_t (*) (List_1_t303 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::get_Item(System.Int32)
#define List_1_get_Item_m11506(__this, ___index, method) (( Object_t * (*) (List_1_t303 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m11507(__this, ___index, ___value, method) (( void (*) (List_1_t303 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
