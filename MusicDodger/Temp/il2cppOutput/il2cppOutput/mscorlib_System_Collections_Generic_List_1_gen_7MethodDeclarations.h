#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t173;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t1923;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t808;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1504(__this, method) (( void (*) (List_1_t173 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m9944(__this, ___capacity, method) (( void (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m9945(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9946(__this, method) (( Object_t* (*) (List_1_t173 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9947(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t173 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9948(__this, method) (( Object_t * (*) (List_1_t173 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9949(__this, ___item, method) (( int32_t (*) (List_1_t173 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9950(__this, ___item, method) (( bool (*) (List_1_t173 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9951(__this, ___item, method) (( int32_t (*) (List_1_t173 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9952(__this, ___index, ___item, method) (( void (*) (List_1_t173 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9953(__this, ___item, method) (( void (*) (List_1_t173 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9954(__this, method) (( bool (*) (List_1_t173 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9955(__this, method) (( Object_t * (*) (List_1_t173 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9956(__this, ___index, method) (( Object_t * (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9957(__this, ___index, ___value, method) (( void (*) (List_1_t173 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m9958(__this, ___item, method) (( void (*) (List_1_t173 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9959(__this, ___newCount, method) (( void (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m9960(__this, method) (( void (*) (List_1_t173 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m9961(__this, ___item, method) (( bool (*) (List_1_t173 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9962(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t173 *, ByteU5BU5DU5BU5D_t808*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m9963(__this, method) (( Enumerator_t1603  (*) (List_1_t173 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m9964(__this, ___item, method) (( int32_t (*) (List_1_t173 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9965(__this, ___start, ___delta, method) (( void (*) (List_1_t173 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9966(__this, ___index, method) (( void (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m9967(__this, ___index, ___item, method) (( void (*) (List_1_t173 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m9968(__this, ___item, method) (( bool (*) (List_1_t173 *, ByteU5BU5D_t36*, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9969(__this, ___index, method) (( void (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m9970(__this, method) (( ByteU5BU5DU5BU5D_t808* (*) (List_1_t173 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m9971(__this, method) (( int32_t (*) (List_1_t173 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9972(__this, ___value, method) (( void (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m9973(__this, method) (( int32_t (*) (List_1_t173 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m9974(__this, ___index, method) (( ByteU5BU5D_t36* (*) (List_1_t173 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m9975(__this, ___index, ___value, method) (( void (*) (List_1_t173 *, int32_t, ByteU5BU5D_t36*, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
