#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t437;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t1987;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Type[]
struct TypeU5BU5D_t267;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1588(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11466(__this, ___capacity, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11467(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11468(__this, method) (( Object_t* (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11469(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11470(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11471(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11472(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11473(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11474(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11475(__this, ___item, method) (( void (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11476(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11477(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11478(__this, ___index, method) (( Object_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11479(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11480(__this, ___item, method) (( void (*) (List_1_t437 *, Type_t *, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11481(__this, ___newCount, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11482(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11483(__this, ___item, method) (( bool (*) (List_1_t437 *, Type_t *, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11484(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, TypeU5BU5D_t267*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11485(__this, method) (( Enumerator_t1724  (*) (List_1_t437 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11486(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Type_t *, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11487(__this, ___start, ___delta, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11488(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11489(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11490(__this, ___item, method) (( bool (*) (List_1_t437 *, Type_t *, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11491(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1589(__this, method) (( TypeU5BU5D_t267* (*) (List_1_t437 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11492(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11493(__this, ___value, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11494(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11495(__this, ___index, method) (( Type_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11496(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
