#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t705;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t2588;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t2623;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t2240;
// System.Type[]
struct TypeU5BU5D_t539;
// System.Predicate`1<System.Type>
struct Predicate_1_t2241;
// System.Comparison`1<System.Type>
struct Comparison_1_t2243;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_20MethodDeclarations.h"
#define List_1__ctor_m3382(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1__ctor_m3336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m16836(__this, ___capacity, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1__ctor_m10453_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m16837(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10455_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16838(__this, method) (( Object_t* (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16839(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t705 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16840(__this, method) (( Object_t * (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16841(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10463_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16842(__this, ___item, method) (( bool (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10465_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16843(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16844(__this, ___index, ___item, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16845(__this, ___item, method) (( void (*) (List_1_t705 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10471_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16846(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16847(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10475_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16848(__this, method) (( Object_t * (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16849(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16850(__this, method) (( bool (*) (List_1_t705 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10481_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16851(__this, ___index, method) (( Object_t * (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16852(__this, ___index, ___value, method) (( void (*) (List_1_t705 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10485_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m16853(__this, ___item, method) (( void (*) (List_1_t705 *, Type_t *, const MethodInfo*))List_1_Add_m10487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16854(__this, ___newCount, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10489_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16855(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10491_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16856(__this, ___enumerable, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10493_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16857(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_AddRange_m10495_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m16858(__this, method) (( ReadOnlyCollection_1_t2240 * (*) (List_1_t705 *, const MethodInfo*))List_1_AsReadOnly_m10497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m16859(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Clear_m10499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m16860(__this, ___item, method) (( bool (*) (List_1_t705 *, Type_t *, const MethodInfo*))List_1_Contains_m10501_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16861(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t705 *, TypeU5BU5D_t539*, int32_t, const MethodInfo*))List_1_CopyTo_m10503_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m16862(__this, ___match, method) (( Type_t * (*) (List_1_t705 *, Predicate_1_t2241 *, const MethodInfo*))List_1_Find_m10505_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16863(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2241 *, const MethodInfo*))List_1_CheckMatch_m10507_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16864(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t705 *, int32_t, int32_t, Predicate_1_t2241 *, const MethodInfo*))List_1_GetIndex_m10509_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m16865(__this, method) (( Enumerator_t2242  (*) (List_1_t705 *, const MethodInfo*))List_1_GetEnumerator_m10510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m16866(__this, ___item, method) (( int32_t (*) (List_1_t705 *, Type_t *, const MethodInfo*))List_1_IndexOf_m10512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16867(__this, ___start, ___delta, method) (( void (*) (List_1_t705 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16868(__this, ___index, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m16869(__this, ___index, ___item, method) (( void (*) (List_1_t705 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m10518_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16870(__this, ___collection, method) (( void (*) (List_1_t705 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10520_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m16871(__this, ___item, method) (( bool (*) (List_1_t705 *, Type_t *, const MethodInfo*))List_1_Remove_m10522_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16872(__this, ___match, method) (( int32_t (*) (List_1_t705 *, Predicate_1_t2241 *, const MethodInfo*))List_1_RemoveAll_m10524_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16873(__this, ___index, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10526_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m16874(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Reverse_m10528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m16875(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_Sort_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16876(__this, ___comparison, method) (( void (*) (List_1_t705 *, Comparison_1_t2243 *, const MethodInfo*))List_1_Sort_m10532_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3383(__this, method) (( TypeU5BU5D_t539* (*) (List_1_t705 *, const MethodInfo*))List_1_ToArray_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m16877(__this, method) (( void (*) (List_1_t705 *, const MethodInfo*))List_1_TrimExcess_m10536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m16878(__this, method) (( int32_t (*) (List_1_t705 *, const MethodInfo*))List_1_get_Capacity_m10538_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16879(__this, ___value, method) (( void (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10540_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m16880(__this, method) (( int32_t (*) (List_1_t705 *, const MethodInfo*))List_1_get_Count_m10542_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m16881(__this, ___index, method) (( Type_t * (*) (List_1_t705 *, int32_t, const MethodInfo*))List_1_get_Item_m10544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m16882(__this, ___index, ___value, method) (( void (*) (List_1_t705 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m10546_gshared)(__this, ___index, ___value, method)
