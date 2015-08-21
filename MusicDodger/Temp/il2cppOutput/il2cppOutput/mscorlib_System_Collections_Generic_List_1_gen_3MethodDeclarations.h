#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t256;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1802;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t268;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1528_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1__ctor_m1528(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8612_gshared (List_1_t256 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8612(__this, ___capacity, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8614_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8614(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616(__this, method) (( Object_t* (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8618_gshared (List_1_t256 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8618(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t256 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8620(__this, method) (( Object_t * (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8622_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8622(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8624_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8624(__this, ___item, method) (( bool (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8626_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8626(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8628_gshared (List_1_t256 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8628(__this, ___index, ___item, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8630_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8630(__this, ___item, method) (( void (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632(__this, method) (( bool (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8634(__this, method) (( Object_t * (*) (List_1_t256 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8636_gshared (List_1_t256 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8636(__this, ___index, method) (( Object_t * (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8638_gshared (List_1_t256 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8638(__this, ___index, ___value, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8640_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8640(__this, ___item, method) (( void (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8642_gshared (List_1_t256 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8642(__this, ___newCount, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8644_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_Clear_m8644(__this, method) (( void (*) (List_1_t256 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8646_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8646(__this, ___item, method) (( bool (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8648_gshared (List_1_t256 * __this, ObjectU5BU5D_t268* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8648(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t256 *, ObjectU5BU5D_t268*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1501  List_1_GetEnumerator_m8649_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8649(__this, method) (( Enumerator_t1501  (*) (List_1_t256 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8651_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8651(__this, ___item, method) (( int32_t (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8653_gshared (List_1_t256 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8653(__this, ___start, ___delta, method) (( void (*) (List_1_t256 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8655_gshared (List_1_t256 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8655(__this, ___index, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8657_gshared (List_1_t256 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8657(__this, ___index, ___item, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8659_gshared (List_1_t256 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8659(__this, ___item, method) (( bool (*) (List_1_t256 *, Object_t *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8661_gshared (List_1_t256 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8661(__this, ___index, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t268* List_1_ToArray_m8663_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_ToArray_m8663(__this, method) (( ObjectU5BU5D_t268* (*) (List_1_t256 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8665_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8665(__this, method) (( int32_t (*) (List_1_t256 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8667_gshared (List_1_t256 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8667(__this, ___value, method) (( void (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8669_gshared (List_1_t256 * __this, const MethodInfo* method);
#define List_1_get_Count_m8669(__this, method) (( int32_t (*) (List_1_t256 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8671_gshared (List_1_t256 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8671(__this, ___index, method) (( Object_t * (*) (List_1_t256 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8673_gshared (List_1_t256 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8673(__this, ___index, ___value, method) (( void (*) (List_1_t256 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
