#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t258;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1804;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1539_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1__ctor_m1539(__this, method) (( void (*) (List_1_t258 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8623_gshared (List_1_t258 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8623(__this, ___capacity, method) (( void (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8625_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8625(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627(__this, method) (( Object_t* (*) (List_1_t258 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8629_gshared (List_1_t258 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8629(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t258 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8631(__this, method) (( Object_t * (*) (List_1_t258 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8633_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8633(__this, ___item, method) (( int32_t (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8635_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8635(__this, ___item, method) (( bool (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8637_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8637(__this, ___item, method) (( int32_t (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8639_gshared (List_1_t258 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8639(__this, ___index, ___item, method) (( void (*) (List_1_t258 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8641_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8641(__this, ___item, method) (( void (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643(__this, method) (( bool (*) (List_1_t258 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8645(__this, method) (( Object_t * (*) (List_1_t258 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8647_gshared (List_1_t258 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8647(__this, ___index, method) (( Object_t * (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8649_gshared (List_1_t258 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8649(__this, ___index, ___value, method) (( void (*) (List_1_t258 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8651_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8651(__this, ___item, method) (( void (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8653_gshared (List_1_t258 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8653(__this, ___newCount, method) (( void (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8655_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_Clear_m8655(__this, method) (( void (*) (List_1_t258 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8657_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8657(__this, ___item, method) (( bool (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8659_gshared (List_1_t258 * __this, ObjectU5BU5D_t270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8659(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t258 *, ObjectU5BU5D_t270*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1503  List_1_GetEnumerator_m8660_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8660(__this, method) (( Enumerator_t1503  (*) (List_1_t258 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8662_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8662(__this, ___item, method) (( int32_t (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8664_gshared (List_1_t258 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8664(__this, ___start, ___delta, method) (( void (*) (List_1_t258 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8666_gshared (List_1_t258 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8666(__this, ___index, method) (( void (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8668_gshared (List_1_t258 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8668(__this, ___index, ___item, method) (( void (*) (List_1_t258 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8670_gshared (List_1_t258 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8670(__this, ___item, method) (( bool (*) (List_1_t258 *, Object_t *, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8672_gshared (List_1_t258 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8672(__this, ___index, method) (( void (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t270* List_1_ToArray_m8674_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_ToArray_m8674(__this, method) (( ObjectU5BU5D_t270* (*) (List_1_t258 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8676_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8676(__this, method) (( int32_t (*) (List_1_t258 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8678_gshared (List_1_t258 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8678(__this, ___value, method) (( void (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8680_gshared (List_1_t258 * __this, const MethodInfo* method);
#define List_1_get_Count_m8680(__this, method) (( int32_t (*) (List_1_t258 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8682_gshared (List_1_t258 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8682(__this, ___index, method) (( Object_t * (*) (List_1_t258 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8684_gshared (List_1_t258 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8684(__this, ___index, ___value, method) (( void (*) (List_1_t258 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
