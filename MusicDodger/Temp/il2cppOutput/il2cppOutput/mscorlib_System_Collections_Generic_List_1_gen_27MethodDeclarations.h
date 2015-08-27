#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t501;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2556;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t357;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2557;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2121;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t630;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2125;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2128;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15255_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1__ctor_m15255(__this, method) (( void (*) (List_1_t501 *, const MethodInfo*))List_1__ctor_m15255_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3312_gshared (List_1_t501 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3312(__this, ___capacity, method) (( void (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1__ctor_m3312_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15256_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15256(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15256_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15257_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15257(__this, method) (( Object_t* (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15257_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15258_gshared (List_1_t501 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15258(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t501 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15258_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15259_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15259(__this, method) (( Object_t * (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15259_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15260_gshared (List_1_t501 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15260(__this, ___item, method) (( int32_t (*) (List_1_t501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15260_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15261_gshared (List_1_t501 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15261(__this, ___item, method) (( bool (*) (List_1_t501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15261_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15262_gshared (List_1_t501 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15262(__this, ___item, method) (( int32_t (*) (List_1_t501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15263_gshared (List_1_t501 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15263(__this, ___index, ___item, method) (( void (*) (List_1_t501 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15263_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15264_gshared (List_1_t501 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15264(__this, ___item, method) (( void (*) (List_1_t501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15264_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15265_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15265(__this, method) (( bool (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15266_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15266(__this, method) (( bool (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15266_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15267_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15267(__this, method) (( Object_t * (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15267_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15268_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15268(__this, method) (( bool (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15268_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15269_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15269(__this, method) (( bool (*) (List_1_t501 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15269_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15270_gshared (List_1_t501 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15270(__this, ___index, method) (( Object_t * (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15270_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15271_gshared (List_1_t501 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15271(__this, ___index, ___value, method) (( void (*) (List_1_t501 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15271_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15272_gshared (List_1_t501 * __this, UILineInfo_t353  ___item, const MethodInfo* method);
#define List_1_Add_m15272(__this, ___item, method) (( void (*) (List_1_t501 *, UILineInfo_t353 , const MethodInfo*))List_1_Add_m15272_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15273_gshared (List_1_t501 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15273(__this, ___newCount, method) (( void (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15273_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15274_gshared (List_1_t501 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15274(__this, ___collection, method) (( void (*) (List_1_t501 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15275_gshared (List_1_t501 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15275(__this, ___enumerable, method) (( void (*) (List_1_t501 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15275_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15276_gshared (List_1_t501 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15276(__this, ___collection, method) (( void (*) (List_1_t501 *, Object_t*, const MethodInfo*))List_1_AddRange_m15276_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2121 * List_1_AsReadOnly_m15277_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15277(__this, method) (( ReadOnlyCollection_1_t2121 * (*) (List_1_t501 *, const MethodInfo*))List_1_AsReadOnly_m15277_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15278_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_Clear_m15278(__this, method) (( void (*) (List_1_t501 *, const MethodInfo*))List_1_Clear_m15278_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15279_gshared (List_1_t501 * __this, UILineInfo_t353  ___item, const MethodInfo* method);
#define List_1_Contains_m15279(__this, ___item, method) (( bool (*) (List_1_t501 *, UILineInfo_t353 , const MethodInfo*))List_1_Contains_m15279_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15280_gshared (List_1_t501 * __this, UILineInfoU5BU5D_t630* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15280(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t501 *, UILineInfoU5BU5D_t630*, int32_t, const MethodInfo*))List_1_CopyTo_m15280_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t353  List_1_Find_m15281_gshared (List_1_t501 * __this, Predicate_1_t2125 * ___match, const MethodInfo* method);
#define List_1_Find_m15281(__this, ___match, method) (( UILineInfo_t353  (*) (List_1_t501 *, Predicate_1_t2125 *, const MethodInfo*))List_1_Find_m15281_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15282_gshared (Object_t * __this /* static, unused */, Predicate_1_t2125 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15282(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2125 *, const MethodInfo*))List_1_CheckMatch_m15282_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15283_gshared (List_1_t501 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2125 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15283(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t501 *, int32_t, int32_t, Predicate_1_t2125 *, const MethodInfo*))List_1_GetIndex_m15283_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2120  List_1_GetEnumerator_m15284_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15284(__this, method) (( Enumerator_t2120  (*) (List_1_t501 *, const MethodInfo*))List_1_GetEnumerator_m15284_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15285_gshared (List_1_t501 * __this, UILineInfo_t353  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15285(__this, ___item, method) (( int32_t (*) (List_1_t501 *, UILineInfo_t353 , const MethodInfo*))List_1_IndexOf_m15285_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15286_gshared (List_1_t501 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15286(__this, ___start, ___delta, method) (( void (*) (List_1_t501 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15286_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15287_gshared (List_1_t501 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15287(__this, ___index, method) (( void (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15287_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15288_gshared (List_1_t501 * __this, int32_t ___index, UILineInfo_t353  ___item, const MethodInfo* method);
#define List_1_Insert_m15288(__this, ___index, ___item, method) (( void (*) (List_1_t501 *, int32_t, UILineInfo_t353 , const MethodInfo*))List_1_Insert_m15288_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15289_gshared (List_1_t501 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15289(__this, ___collection, method) (( void (*) (List_1_t501 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15289_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15290_gshared (List_1_t501 * __this, UILineInfo_t353  ___item, const MethodInfo* method);
#define List_1_Remove_m15290(__this, ___item, method) (( bool (*) (List_1_t501 *, UILineInfo_t353 , const MethodInfo*))List_1_Remove_m15290_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15291_gshared (List_1_t501 * __this, Predicate_1_t2125 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15291(__this, ___match, method) (( int32_t (*) (List_1_t501 *, Predicate_1_t2125 *, const MethodInfo*))List_1_RemoveAll_m15291_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15292_gshared (List_1_t501 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15292(__this, ___index, method) (( void (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15292_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15293_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_Reverse_m15293(__this, method) (( void (*) (List_1_t501 *, const MethodInfo*))List_1_Reverse_m15293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15294_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_Sort_m15294(__this, method) (( void (*) (List_1_t501 *, const MethodInfo*))List_1_Sort_m15294_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15295_gshared (List_1_t501 * __this, Comparison_1_t2128 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15295(__this, ___comparison, method) (( void (*) (List_1_t501 *, Comparison_1_t2128 *, const MethodInfo*))List_1_Sort_m15295_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t630* List_1_ToArray_m15296_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_ToArray_m15296(__this, method) (( UILineInfoU5BU5D_t630* (*) (List_1_t501 *, const MethodInfo*))List_1_ToArray_m15296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15297_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15297(__this, method) (( void (*) (List_1_t501 *, const MethodInfo*))List_1_TrimExcess_m15297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15298_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15298(__this, method) (( int32_t (*) (List_1_t501 *, const MethodInfo*))List_1_get_Capacity_m15298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15299_gshared (List_1_t501 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15299(__this, ___value, method) (( void (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15299_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15300_gshared (List_1_t501 * __this, const MethodInfo* method);
#define List_1_get_Count_m15300(__this, method) (( int32_t (*) (List_1_t501 *, const MethodInfo*))List_1_get_Count_m15300_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t353  List_1_get_Item_m15301_gshared (List_1_t501 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15301(__this, ___index, method) (( UILineInfo_t353  (*) (List_1_t501 *, int32_t, const MethodInfo*))List_1_get_Item_m15301_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15302_gshared (List_1_t501 * __this, int32_t ___index, UILineInfo_t353  ___value, const MethodInfo* method);
#define List_1_set_Item_m15302(__this, ___index, ___value, method) (( void (*) (List_1_t501 *, int32_t, UILineInfo_t353 , const MethodInfo*))List_1_set_Item_m15302_gshared)(__this, ___index, ___value, method)
