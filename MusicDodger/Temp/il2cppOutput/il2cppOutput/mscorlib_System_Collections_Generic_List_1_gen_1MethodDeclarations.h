﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t64;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t2415;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t2416;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2417;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t1841;
// System.Single[]
struct SingleU5BU5D_t54;
// System.Predicate`1<System.Single>
struct Predicate_1_t1846;
// System.Comparison`1<System.Single>
struct Comparison_1_t1850;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m259_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1__ctor_m259(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1__ctor_m259_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11210_gshared (List_1_t64 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11210(__this, ___capacity, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1__ctor_m11210_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m11211_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11211(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11211_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11212_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11212(__this, method) (( Object_t* (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11212_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11213_gshared (List_1_t64 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11213(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11213_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11214_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11214(__this, method) (( Object_t * (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11214_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11215_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11215(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11215_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11216_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11216(__this, ___item, method) (( bool (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11216_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11217_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11217(__this, ___item, method) (( int32_t (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11217_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11218_gshared (List_1_t64 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11218(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11218_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11219_gshared (List_1_t64 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11219(__this, ___item, method) (( void (*) (List_1_t64 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11219_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220(__this, method) (( bool (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11221_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11221(__this, method) (( bool (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11221_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11222_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11222(__this, method) (( Object_t * (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11223_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11223(__this, method) (( bool (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11224_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11224(__this, method) (( bool (*) (List_1_t64 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11224_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11225_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11225(__this, ___index, method) (( Object_t * (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11225_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11226_gshared (List_1_t64 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11226(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11226_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m11227_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m11227(__this, ___item, method) (( void (*) (List_1_t64 *, float, const MethodInfo*))List_1_Add_m11227_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11228_gshared (List_1_t64 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11228(__this, ___newCount, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11228_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11229_gshared (List_1_t64 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11229(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11229_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11230_gshared (List_1_t64 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11230(__this, ___enumerable, method) (( void (*) (List_1_t64 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11230_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11231_gshared (List_1_t64 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11231(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, const MethodInfo*))List_1_AddRange_m11231_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1841 * List_1_AsReadOnly_m11232_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11232(__this, method) (( ReadOnlyCollection_1_t1841 * (*) (List_1_t64 *, const MethodInfo*))List_1_AsReadOnly_m11232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m11233_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_Clear_m11233(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1_Clear_m11233_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m11234_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m11234(__this, ___item, method) (( bool (*) (List_1_t64 *, float, const MethodInfo*))List_1_Contains_m11234_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11235_gshared (List_1_t64 * __this, SingleU5BU5D_t54* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11235(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t64 *, SingleU5BU5D_t54*, int32_t, const MethodInfo*))List_1_CopyTo_m11235_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m11236_gshared (List_1_t64 * __this, Predicate_1_t1846 * ___match, const MethodInfo* method);
#define List_1_Find_m11236(__this, ___match, method) (( float (*) (List_1_t64 *, Predicate_1_t1846 *, const MethodInfo*))List_1_Find_m11236_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11237_gshared (Object_t * __this /* static, unused */, Predicate_1_t1846 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11237(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1846 *, const MethodInfo*))List_1_CheckMatch_m11237_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11238_gshared (List_1_t64 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1846 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11238(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t64 *, int32_t, int32_t, Predicate_1_t1846 *, const MethodInfo*))List_1_GetIndex_m11238_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t1839  List_1_GetEnumerator_m11239_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11239(__this, method) (( Enumerator_t1839  (*) (List_1_t64 *, const MethodInfo*))List_1_GetEnumerator_m11239_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11240_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m11240(__this, ___item, method) (( int32_t (*) (List_1_t64 *, float, const MethodInfo*))List_1_IndexOf_m11240_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11241_gshared (List_1_t64 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11241(__this, ___start, ___delta, method) (( void (*) (List_1_t64 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11241_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11242_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11242(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11243_gshared (List_1_t64 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m11243(__this, ___index, ___item, method) (( void (*) (List_1_t64 *, int32_t, float, const MethodInfo*))List_1_Insert_m11243_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11244_gshared (List_1_t64 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11244(__this, ___collection, method) (( void (*) (List_1_t64 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11244_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m11245_gshared (List_1_t64 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m11245(__this, ___item, method) (( bool (*) (List_1_t64 *, float, const MethodInfo*))List_1_Remove_m11245_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11246_gshared (List_1_t64 * __this, Predicate_1_t1846 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11246(__this, ___match, method) (( int32_t (*) (List_1_t64 *, Predicate_1_t1846 *, const MethodInfo*))List_1_RemoveAll_m11246_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11247_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11247(__this, ___index, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11247_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m11248_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_Reverse_m11248(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1_Reverse_m11248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m11249_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_Sort_m11249(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1_Sort_m11249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11250_gshared (List_1_t64 * __this, Comparison_1_t1850 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11250(__this, ___comparison, method) (( void (*) (List_1_t64 *, Comparison_1_t1850 *, const MethodInfo*))List_1_Sort_m11250_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t54* List_1_ToArray_m11251_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_ToArray_m11251(__this, method) (( SingleU5BU5D_t54* (*) (List_1_t64 *, const MethodInfo*))List_1_ToArray_m11251_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m11252_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11252(__this, method) (( void (*) (List_1_t64 *, const MethodInfo*))List_1_TrimExcess_m11252_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11253_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11253(__this, method) (( int32_t (*) (List_1_t64 *, const MethodInfo*))List_1_get_Capacity_m11253_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11254_gshared (List_1_t64 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11254(__this, ___value, method) (( void (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11254_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m11255_gshared (List_1_t64 * __this, const MethodInfo* method);
#define List_1_get_Count_m11255(__this, method) (( int32_t (*) (List_1_t64 *, const MethodInfo*))List_1_get_Count_m11255_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m11256_gshared (List_1_t64 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11256(__this, ___index, method) (( float (*) (List_1_t64 *, int32_t, const MethodInfo*))List_1_get_Item_m11256_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11257_gshared (List_1_t64 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m11257(__this, ___index, ___value, method) (( void (*) (List_1_t64 *, int32_t, float, const MethodInfo*))List_1_set_Item_m11257_gshared)(__this, ___index, ___value, method)
