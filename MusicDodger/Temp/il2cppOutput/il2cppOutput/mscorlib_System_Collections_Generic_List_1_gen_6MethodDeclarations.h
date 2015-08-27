#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t92;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t91;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t2435;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t2436;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t2437;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t1892;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t1890;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t1893;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t1895;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
#define List_1__ctor_m1507(__this, method) (( void (*) (List_1_t92 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m11911(__this, ___capacity, method) (( void (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m11912(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11913(__this, method) (( Object_t* (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11914(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t92 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11915(__this, method) (( Object_t * (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11916(__this, ___item, method) (( int32_t (*) (List_1_t92 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11917(__this, ___item, method) (( bool (*) (List_1_t92 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11918(__this, ___item, method) (( int32_t (*) (List_1_t92 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11919(__this, ___index, ___item, method) (( void (*) (List_1_t92 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11920(__this, ___item, method) (( void (*) (List_1_t92 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11921(__this, method) (( bool (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11922(__this, method) (( bool (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11923(__this, method) (( Object_t * (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11924(__this, method) (( bool (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11925(__this, method) (( bool (*) (List_1_t92 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11926(__this, ___index, method) (( Object_t * (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11927(__this, ___index, ___value, method) (( void (*) (List_1_t92 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m11928(__this, ___item, method) (( void (*) (List_1_t92 *, Entry_t91 *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11929(__this, ___newCount, method) (( void (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11930(__this, ___collection, method) (( void (*) (List_1_t92 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11931(__this, ___enumerable, method) (( void (*) (List_1_t92 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11932(__this, ___collection, method) (( void (*) (List_1_t92 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m11933(__this, method) (( ReadOnlyCollection_1_t1892 * (*) (List_1_t92 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m11934(__this, method) (( void (*) (List_1_t92 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m11935(__this, ___item, method) (( bool (*) (List_1_t92 *, Entry_t91 *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11936(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t92 *, EntryU5BU5D_t1890*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m11937(__this, ___match, method) (( Entry_t91 * (*) (List_1_t92 *, Predicate_1_t1893 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11938(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1893 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11939(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t92 *, int32_t, int32_t, Predicate_1_t1893 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m11940(__this, method) (( Enumerator_t1894  (*) (List_1_t92 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m11941(__this, ___item, method) (( int32_t (*) (List_1_t92 *, Entry_t91 *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11942(__this, ___start, ___delta, method) (( void (*) (List_1_t92 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11943(__this, ___index, method) (( void (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m11944(__this, ___index, ___item, method) (( void (*) (List_1_t92 *, int32_t, Entry_t91 *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11945(__this, ___collection, method) (( void (*) (List_1_t92 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m11946(__this, ___item, method) (( bool (*) (List_1_t92 *, Entry_t91 *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11947(__this, ___match, method) (( int32_t (*) (List_1_t92 *, Predicate_1_t1893 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11948(__this, ___index, method) (( void (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m11949(__this, method) (( void (*) (List_1_t92 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m11950(__this, method) (( void (*) (List_1_t92 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11951(__this, ___comparison, method) (( void (*) (List_1_t92 *, Comparison_1_t1895 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m11952(__this, method) (( EntryU5BU5D_t1890* (*) (List_1_t92 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m11953(__this, method) (( void (*) (List_1_t92 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m11954(__this, method) (( int32_t (*) (List_1_t92 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11955(__this, ___value, method) (( void (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m11956(__this, method) (( int32_t (*) (List_1_t92 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m11957(__this, ___index, method) (( Entry_t91 * (*) (List_1_t92 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m11958(__this, ___index, ___value, method) (( void (*) (List_1_t92 *, int32_t, Entry_t91 *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
