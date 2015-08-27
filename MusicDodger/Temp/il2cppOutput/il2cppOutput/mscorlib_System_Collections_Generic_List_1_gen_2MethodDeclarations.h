#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t61;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2410;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2411;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1824;
// System.Int32[]
struct Int32U5BU5D_t831;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1829;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1833;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m260_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1__ctor_m260(__this, method) (( void (*) (List_1_t61 *, const MethodInfo*))List_1__ctor_m260_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10971_gshared (List_1_t61 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10971(__this, ___capacity, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1__ctor_m10971_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m10972_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10972(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10972_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10973_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10973(__this, method) (( Object_t* (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10973_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10974_gshared (List_1_t61 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10974(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t61 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10974_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10975_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10975(__this, method) (( Object_t * (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10975_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10976_gshared (List_1_t61 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10976(__this, ___item, method) (( int32_t (*) (List_1_t61 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10976_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10977_gshared (List_1_t61 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10977(__this, ___item, method) (( bool (*) (List_1_t61 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10977_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10978_gshared (List_1_t61 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10978(__this, ___item, method) (( int32_t (*) (List_1_t61 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10978_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10979_gshared (List_1_t61 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10979(__this, ___index, ___item, method) (( void (*) (List_1_t61 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10979_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10980_gshared (List_1_t61 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10980(__this, ___item, method) (( void (*) (List_1_t61 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10980_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10981_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10981(__this, method) (( bool (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10982_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10982(__this, method) (( bool (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10982_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10983_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10983(__this, method) (( Object_t * (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10984_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10984(__this, method) (( bool (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10984_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10985_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10985(__this, method) (( bool (*) (List_1_t61 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10985_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10986_gshared (List_1_t61 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10986(__this, ___index, method) (( Object_t * (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10986_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10987_gshared (List_1_t61 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10987(__this, ___index, ___value, method) (( void (*) (List_1_t61 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10987_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m10988_gshared (List_1_t61 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m10988(__this, ___item, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_Add_m10988_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10989_gshared (List_1_t61 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10989(__this, ___newCount, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10989_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10990_gshared (List_1_t61 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10990(__this, ___collection, method) (( void (*) (List_1_t61 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10990_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10991_gshared (List_1_t61 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10991(__this, ___enumerable, method) (( void (*) (List_1_t61 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10991_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10992_gshared (List_1_t61 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10992(__this, ___collection, method) (( void (*) (List_1_t61 *, Object_t*, const MethodInfo*))List_1_AddRange_m10992_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1824 * List_1_AsReadOnly_m10993_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10993(__this, method) (( ReadOnlyCollection_1_t1824 * (*) (List_1_t61 *, const MethodInfo*))List_1_AsReadOnly_m10993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m10994_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_Clear_m10994(__this, method) (( void (*) (List_1_t61 *, const MethodInfo*))List_1_Clear_m10994_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m10995_gshared (List_1_t61 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m10995(__this, ___item, method) (( bool (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_Contains_m10995_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10996_gshared (List_1_t61 * __this, Int32U5BU5D_t831* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10996(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t61 *, Int32U5BU5D_t831*, int32_t, const MethodInfo*))List_1_CopyTo_m10996_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m10997_gshared (List_1_t61 * __this, Predicate_1_t1829 * ___match, const MethodInfo* method);
#define List_1_Find_m10997(__this, ___match, method) (( int32_t (*) (List_1_t61 *, Predicate_1_t1829 *, const MethodInfo*))List_1_Find_m10997_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10998_gshared (Object_t * __this /* static, unused */, Predicate_1_t1829 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10998(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1829 *, const MethodInfo*))List_1_CheckMatch_m10998_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10999_gshared (List_1_t61 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1829 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10999(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t61 *, int32_t, int32_t, Predicate_1_t1829 *, const MethodInfo*))List_1_GetIndex_m10999_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1822  List_1_GetEnumerator_m11000_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11000(__this, method) (( Enumerator_t1822  (*) (List_1_t61 *, const MethodInfo*))List_1_GetEnumerator_m11000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11001_gshared (List_1_t61 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m11001(__this, ___item, method) (( int32_t (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_IndexOf_m11001_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11002_gshared (List_1_t61 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11002(__this, ___start, ___delta, method) (( void (*) (List_1_t61 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11002_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11003_gshared (List_1_t61 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11003(__this, ___index, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11003_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11004_gshared (List_1_t61 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m11004(__this, ___index, ___item, method) (( void (*) (List_1_t61 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m11004_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11005_gshared (List_1_t61 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11005(__this, ___collection, method) (( void (*) (List_1_t61 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11005_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m11006_gshared (List_1_t61 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m11006(__this, ___item, method) (( bool (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_Remove_m11006_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11007_gshared (List_1_t61 * __this, Predicate_1_t1829 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11007(__this, ___match, method) (( int32_t (*) (List_1_t61 *, Predicate_1_t1829 *, const MethodInfo*))List_1_RemoveAll_m11007_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11008_gshared (List_1_t61 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11008(__this, ___index, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11008_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m11009_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_Reverse_m11009(__this, method) (( void (*) (List_1_t61 *, const MethodInfo*))List_1_Reverse_m11009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m11010_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_Sort_m11010(__this, method) (( void (*) (List_1_t61 *, const MethodInfo*))List_1_Sort_m11010_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11011_gshared (List_1_t61 * __this, Comparison_1_t1833 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11011(__this, ___comparison, method) (( void (*) (List_1_t61 *, Comparison_1_t1833 *, const MethodInfo*))List_1_Sort_m11011_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t831* List_1_ToArray_m11012_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_ToArray_m11012(__this, method) (( Int32U5BU5D_t831* (*) (List_1_t61 *, const MethodInfo*))List_1_ToArray_m11012_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m11013_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11013(__this, method) (( void (*) (List_1_t61 *, const MethodInfo*))List_1_TrimExcess_m11013_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11014_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11014(__this, method) (( int32_t (*) (List_1_t61 *, const MethodInfo*))List_1_get_Capacity_m11014_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11015_gshared (List_1_t61 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11015(__this, ___value, method) (( void (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11015_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m11016_gshared (List_1_t61 * __this, const MethodInfo* method);
#define List_1_get_Count_m11016(__this, method) (( int32_t (*) (List_1_t61 *, const MethodInfo*))List_1_get_Count_m11016_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m11017_gshared (List_1_t61 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11017(__this, ___index, method) (( int32_t (*) (List_1_t61 *, int32_t, const MethodInfo*))List_1_get_Item_m11017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11018_gshared (List_1_t61 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m11018(__this, ___index, ___value, method) (( void (*) (List_1_t61 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m11018_gshared)(__this, ___index, ___value, method)
