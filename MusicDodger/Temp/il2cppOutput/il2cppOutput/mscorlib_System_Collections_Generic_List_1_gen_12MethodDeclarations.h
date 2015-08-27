#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2475;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t364;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2478;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t1965;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t205;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1966;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1968;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m1779_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1__ctor_m1779(__this, method) (( void (*) (List_1_t208 *, const MethodInfo*))List_1__ctor_m1779_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3310_gshared (List_1_t208 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3310(__this, ___capacity, method) (( void (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1__ctor_m3310_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m13028_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13028(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13028_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13029_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13029(__this, method) (( Object_t* (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13029_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13030_gshared (List_1_t208 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13030(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t208 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13030_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13031_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13031(__this, method) (( Object_t * (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13031_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13032_gshared (List_1_t208 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13032(__this, ___item, method) (( int32_t (*) (List_1_t208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13032_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13033_gshared (List_1_t208 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13033(__this, ___item, method) (( bool (*) (List_1_t208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13033_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13034_gshared (List_1_t208 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13034(__this, ___item, method) (( int32_t (*) (List_1_t208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13034_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13035_gshared (List_1_t208 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13035(__this, ___index, ___item, method) (( void (*) (List_1_t208 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13035_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13036_gshared (List_1_t208 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13036(__this, ___item, method) (( void (*) (List_1_t208 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13036_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13037_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13037(__this, method) (( bool (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13037_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13038_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13038(__this, method) (( bool (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13038_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13039_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13039(__this, method) (( Object_t * (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13040_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13040(__this, method) (( bool (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13041_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13041(__this, method) (( bool (*) (List_1_t208 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13041_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13042_gshared (List_1_t208 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13042(__this, ___index, method) (( Object_t * (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13042_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13043_gshared (List_1_t208 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13043(__this, ___index, ___value, method) (( void (*) (List_1_t208 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13043_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m13044_gshared (List_1_t208 * __this, UIVertex_t206  ___item, const MethodInfo* method);
#define List_1_Add_m13044(__this, ___item, method) (( void (*) (List_1_t208 *, UIVertex_t206 , const MethodInfo*))List_1_Add_m13044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13045_gshared (List_1_t208 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13045(__this, ___newCount, method) (( void (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13045_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13046_gshared (List_1_t208 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13046(__this, ___collection, method) (( void (*) (List_1_t208 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13046_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13047_gshared (List_1_t208 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13047(__this, ___enumerable, method) (( void (*) (List_1_t208 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13047_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13048_gshared (List_1_t208 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13048(__this, ___collection, method) (( void (*) (List_1_t208 *, Object_t*, const MethodInfo*))List_1_AddRange_m13048_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1965 * List_1_AsReadOnly_m13049_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13049(__this, method) (( ReadOnlyCollection_1_t1965 * (*) (List_1_t208 *, const MethodInfo*))List_1_AsReadOnly_m13049_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m13050_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_Clear_m13050(__this, method) (( void (*) (List_1_t208 *, const MethodInfo*))List_1_Clear_m13050_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m13051_gshared (List_1_t208 * __this, UIVertex_t206  ___item, const MethodInfo* method);
#define List_1_Contains_m13051(__this, ___item, method) (( bool (*) (List_1_t208 *, UIVertex_t206 , const MethodInfo*))List_1_Contains_m13051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13052_gshared (List_1_t208 * __this, UIVertexU5BU5D_t205* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13052(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t208 *, UIVertexU5BU5D_t205*, int32_t, const MethodInfo*))List_1_CopyTo_m13052_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t206  List_1_Find_m13053_gshared (List_1_t208 * __this, Predicate_1_t1966 * ___match, const MethodInfo* method);
#define List_1_Find_m13053(__this, ___match, method) (( UIVertex_t206  (*) (List_1_t208 *, Predicate_1_t1966 *, const MethodInfo*))List_1_Find_m13053_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13054_gshared (Object_t * __this /* static, unused */, Predicate_1_t1966 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13054(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1966 *, const MethodInfo*))List_1_CheckMatch_m13054_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13055_gshared (List_1_t208 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1966 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13055(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t208 *, int32_t, int32_t, Predicate_1_t1966 *, const MethodInfo*))List_1_GetIndex_m13055_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1967  List_1_GetEnumerator_m13056_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13056(__this, method) (( Enumerator_t1967  (*) (List_1_t208 *, const MethodInfo*))List_1_GetEnumerator_m13056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13057_gshared (List_1_t208 * __this, UIVertex_t206  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13057(__this, ___item, method) (( int32_t (*) (List_1_t208 *, UIVertex_t206 , const MethodInfo*))List_1_IndexOf_m13057_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13058_gshared (List_1_t208 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13058(__this, ___start, ___delta, method) (( void (*) (List_1_t208 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13058_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13059_gshared (List_1_t208 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13059(__this, ___index, method) (( void (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13059_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13060_gshared (List_1_t208 * __this, int32_t ___index, UIVertex_t206  ___item, const MethodInfo* method);
#define List_1_Insert_m13060(__this, ___index, ___item, method) (( void (*) (List_1_t208 *, int32_t, UIVertex_t206 , const MethodInfo*))List_1_Insert_m13060_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13061_gshared (List_1_t208 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13061(__this, ___collection, method) (( void (*) (List_1_t208 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13061_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m13062_gshared (List_1_t208 * __this, UIVertex_t206  ___item, const MethodInfo* method);
#define List_1_Remove_m13062(__this, ___item, method) (( bool (*) (List_1_t208 *, UIVertex_t206 , const MethodInfo*))List_1_Remove_m13062_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13063_gshared (List_1_t208 * __this, Predicate_1_t1966 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13063(__this, ___match, method) (( int32_t (*) (List_1_t208 *, Predicate_1_t1966 *, const MethodInfo*))List_1_RemoveAll_m13063_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13064_gshared (List_1_t208 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13064(__this, ___index, method) (( void (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13064_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m13065_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_Reverse_m13065(__this, method) (( void (*) (List_1_t208 *, const MethodInfo*))List_1_Reverse_m13065_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m13066_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_Sort_m13066(__this, method) (( void (*) (List_1_t208 *, const MethodInfo*))List_1_Sort_m13066_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13067_gshared (List_1_t208 * __this, Comparison_1_t1968 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13067(__this, ___comparison, method) (( void (*) (List_1_t208 *, Comparison_1_t1968 *, const MethodInfo*))List_1_Sort_m13067_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t205* List_1_ToArray_m1834_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_ToArray_m1834(__this, method) (( UIVertexU5BU5D_t205* (*) (List_1_t208 *, const MethodInfo*))List_1_ToArray_m1834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m13068_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13068(__this, method) (( void (*) (List_1_t208 *, const MethodInfo*))List_1_TrimExcess_m13068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1689_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1689(__this, method) (( int32_t (*) (List_1_t208 *, const MethodInfo*))List_1_get_Capacity_m1689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1690_gshared (List_1_t208 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1690(__this, ___value, method) (( void (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1690_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m13069_gshared (List_1_t208 * __this, const MethodInfo* method);
#define List_1_get_Count_m13069(__this, method) (( int32_t (*) (List_1_t208 *, const MethodInfo*))List_1_get_Count_m13069_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t206  List_1_get_Item_m13070_gshared (List_1_t208 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13070(__this, ___index, method) (( UIVertex_t206  (*) (List_1_t208 *, int32_t, const MethodInfo*))List_1_get_Item_m13070_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13071_gshared (List_1_t208 * __this, int32_t ___index, UIVertex_t206  ___value, const MethodInfo* method);
#define List_1_set_Item_m13071(__this, ___index, ___value, method) (( void (*) (List_1_t208 *, int32_t, UIVertex_t206 , const MethodInfo*))List_1_set_Item_m13071_gshared)(__this, ___index, ___value, method)
