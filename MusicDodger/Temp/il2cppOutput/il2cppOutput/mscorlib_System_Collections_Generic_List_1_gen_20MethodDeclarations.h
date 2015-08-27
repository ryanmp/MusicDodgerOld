#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t317;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2037;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t637;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t365;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1782;
// System.Object[]
struct ObjectU5BU5D_t321;
// System.Predicate`1<System.Object>
struct Predicate_1_t1787;
// System.Comparison`1<System.Object>
struct Comparison_1_t1793;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3336_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1__ctor_m3336(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10453_gshared (List_1_t317 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10453(__this, ___capacity, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10455_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10455(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457(__this, method) (( Object_t* (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10459_gshared (List_1_t317 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10459(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10461(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10463_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10463(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10465_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10465(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10467_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10467(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10469_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10469(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10471_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10471(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10475(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10477(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10479(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10481(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10483_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10483(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10485_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10485(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10487_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10487(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10489_gshared (List_1_t317 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10489(__this, ___newCount, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10491_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10491(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10493_gshared (List_1_t317 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10493(__this, ___enumerable, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10495_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10495(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1782 * List_1_AsReadOnly_m10497_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10497(__this, method) (( ReadOnlyCollection_1_t1782 * (*) (List_1_t317 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10499_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Clear_m10499(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10501_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10501(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10503_gshared (List_1_t317 * __this, ObjectU5BU5D_t321* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10503(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, ObjectU5BU5D_t321*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10505_gshared (List_1_t317 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_Find_m10505(__this, ___match, method) (( Object_t * (*) (List_1_t317 *, Predicate_1_t1787 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10507_gshared (Object_t * __this /* static, unused */, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10507(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1787 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10509_gshared (List_1_t317 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10509(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t317 *, int32_t, int32_t, Predicate_1_t1787 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1780  List_1_GetEnumerator_m10510_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10510(__this, method) (( Enumerator_t1780  (*) (List_1_t317 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10512_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10512(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10514_gshared (List_1_t317 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10514(__this, ___start, ___delta, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10516_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10516(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10518_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10518(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10520_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10520(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10522_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10522(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10524_gshared (List_1_t317 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10524(__this, ___match, method) (( int32_t (*) (List_1_t317 *, Predicate_1_t1787 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10526_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10526(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10528_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Reverse_m10528(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10530_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Sort_m10530(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10532_gshared (List_1_t317 * __this, Comparison_1_t1793 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10532(__this, ___comparison, method) (( void (*) (List_1_t317 *, Comparison_1_t1793 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t321* List_1_ToArray_m10534_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_ToArray_m10534(__this, method) (( ObjectU5BU5D_t321* (*) (List_1_t317 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10536_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10536(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10538_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10538(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10540_gshared (List_1_t317 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10540(__this, ___value, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10542_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Count_m10542(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10544_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10544(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10546_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10546(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
