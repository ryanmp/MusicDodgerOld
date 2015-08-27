#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t125;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2429;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2430;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2431;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t1877;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1873;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1881;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t86;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m1547_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1__ctor_m1547(__this, method) (( void (*) (List_1_t125 *, const MethodInfo*))List_1__ctor_m1547_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11677_gshared (List_1_t125 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11677(__this, ___capacity, method) (( void (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1__ctor_m11677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m11678_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11678(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11678_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11679_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11679(__this, method) (( Object_t* (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11680_gshared (List_1_t125 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11680(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t125 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11680_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11681_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11681(__this, method) (( Object_t * (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11681_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11682_gshared (List_1_t125 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11682(__this, ___item, method) (( int32_t (*) (List_1_t125 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11682_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11683_gshared (List_1_t125 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11683(__this, ___item, method) (( bool (*) (List_1_t125 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11683_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11684_gshared (List_1_t125 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11684(__this, ___item, method) (( int32_t (*) (List_1_t125 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11684_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11685_gshared (List_1_t125 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11685(__this, ___index, ___item, method) (( void (*) (List_1_t125 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11685_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11686_gshared (List_1_t125 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11686(__this, ___item, method) (( void (*) (List_1_t125 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11686_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11687_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11687(__this, method) (( bool (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11688_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11688(__this, method) (( bool (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11688_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11689_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11689(__this, method) (( Object_t * (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11690_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11690(__this, method) (( bool (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11690_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11691_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11691(__this, method) (( bool (*) (List_1_t125 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11691_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11692_gshared (List_1_t125 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11692(__this, ___index, method) (( Object_t * (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11692_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11693_gshared (List_1_t125 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11693(__this, ___index, ___value, method) (( void (*) (List_1_t125 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11693_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m11694_gshared (List_1_t125 * __this, RaycastResult_t120  ___item, const MethodInfo* method);
#define List_1_Add_m11694(__this, ___item, method) (( void (*) (List_1_t125 *, RaycastResult_t120 , const MethodInfo*))List_1_Add_m11694_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11695_gshared (List_1_t125 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11695(__this, ___newCount, method) (( void (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11695_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11696_gshared (List_1_t125 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11696(__this, ___collection, method) (( void (*) (List_1_t125 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11696_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11697_gshared (List_1_t125 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11697(__this, ___enumerable, method) (( void (*) (List_1_t125 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11697_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11698_gshared (List_1_t125 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11698(__this, ___collection, method) (( void (*) (List_1_t125 *, Object_t*, const MethodInfo*))List_1_AddRange_m11698_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1877 * List_1_AsReadOnly_m11699_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11699(__this, method) (( ReadOnlyCollection_1_t1877 * (*) (List_1_t125 *, const MethodInfo*))List_1_AsReadOnly_m11699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m11700_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_Clear_m11700(__this, method) (( void (*) (List_1_t125 *, const MethodInfo*))List_1_Clear_m11700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m11701_gshared (List_1_t125 * __this, RaycastResult_t120  ___item, const MethodInfo* method);
#define List_1_Contains_m11701(__this, ___item, method) (( bool (*) (List_1_t125 *, RaycastResult_t120 , const MethodInfo*))List_1_Contains_m11701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11702_gshared (List_1_t125 * __this, RaycastResultU5BU5D_t1873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t125 *, RaycastResultU5BU5D_t1873*, int32_t, const MethodInfo*))List_1_CopyTo_m11702_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t120  List_1_Find_m11703_gshared (List_1_t125 * __this, Predicate_1_t1881 * ___match, const MethodInfo* method);
#define List_1_Find_m11703(__this, ___match, method) (( RaycastResult_t120  (*) (List_1_t125 *, Predicate_1_t1881 *, const MethodInfo*))List_1_Find_m11703_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11704_gshared (Object_t * __this /* static, unused */, Predicate_1_t1881 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11704(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1881 *, const MethodInfo*))List_1_CheckMatch_m11704_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11705_gshared (List_1_t125 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1881 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11705(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t125 *, int32_t, int32_t, Predicate_1_t1881 *, const MethodInfo*))List_1_GetIndex_m11705_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t1875  List_1_GetEnumerator_m11706_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11706(__this, method) (( Enumerator_t1875  (*) (List_1_t125 *, const MethodInfo*))List_1_GetEnumerator_m11706_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11707_gshared (List_1_t125 * __this, RaycastResult_t120  ___item, const MethodInfo* method);
#define List_1_IndexOf_m11707(__this, ___item, method) (( int32_t (*) (List_1_t125 *, RaycastResult_t120 , const MethodInfo*))List_1_IndexOf_m11707_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11708_gshared (List_1_t125 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11708(__this, ___start, ___delta, method) (( void (*) (List_1_t125 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11708_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11709_gshared (List_1_t125 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11709(__this, ___index, method) (( void (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11709_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11710_gshared (List_1_t125 * __this, int32_t ___index, RaycastResult_t120  ___item, const MethodInfo* method);
#define List_1_Insert_m11710(__this, ___index, ___item, method) (( void (*) (List_1_t125 *, int32_t, RaycastResult_t120 , const MethodInfo*))List_1_Insert_m11710_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11711_gshared (List_1_t125 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11711(__this, ___collection, method) (( void (*) (List_1_t125 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11711_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m11712_gshared (List_1_t125 * __this, RaycastResult_t120  ___item, const MethodInfo* method);
#define List_1_Remove_m11712(__this, ___item, method) (( bool (*) (List_1_t125 *, RaycastResult_t120 , const MethodInfo*))List_1_Remove_m11712_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11713_gshared (List_1_t125 * __this, Predicate_1_t1881 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11713(__this, ___match, method) (( int32_t (*) (List_1_t125 *, Predicate_1_t1881 *, const MethodInfo*))List_1_RemoveAll_m11713_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11714_gshared (List_1_t125 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11714(__this, ___index, method) (( void (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11714_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m11715_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_Reverse_m11715(__this, method) (( void (*) (List_1_t125 *, const MethodInfo*))List_1_Reverse_m11715_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m11716_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_Sort_m11716(__this, method) (( void (*) (List_1_t125 *, const MethodInfo*))List_1_Sort_m11716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1501_gshared (List_1_t125 * __this, Comparison_1_t86 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1501(__this, ___comparison, method) (( void (*) (List_1_t125 *, Comparison_1_t86 *, const MethodInfo*))List_1_Sort_m1501_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t1873* List_1_ToArray_m11717_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_ToArray_m11717(__this, method) (( RaycastResultU5BU5D_t1873* (*) (List_1_t125 *, const MethodInfo*))List_1_ToArray_m11717_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m11718_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11718(__this, method) (( void (*) (List_1_t125 *, const MethodInfo*))List_1_TrimExcess_m11718_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11719_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11719(__this, method) (( int32_t (*) (List_1_t125 *, const MethodInfo*))List_1_get_Capacity_m11719_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11720_gshared (List_1_t125 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11720(__this, ___value, method) (( void (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11720_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m11721_gshared (List_1_t125 * __this, const MethodInfo* method);
#define List_1_get_Count_m11721(__this, method) (( int32_t (*) (List_1_t125 *, const MethodInfo*))List_1_get_Count_m11721_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t120  List_1_get_Item_m11722_gshared (List_1_t125 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11722(__this, ___index, method) (( RaycastResult_t120  (*) (List_1_t125 *, int32_t, const MethodInfo*))List_1_get_Item_m11722_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11723_gshared (List_1_t125 * __this, int32_t ___index, RaycastResult_t120  ___value, const MethodInfo* method);
#define List_1_set_Item_m11723(__this, ___index, ___value, method) (( void (*) (List_1_t125 *, int32_t, RaycastResult_t120 , const MethodInfo*))List_1_set_Item_m11723_gshared)(__this, ___index, ___value, method)
