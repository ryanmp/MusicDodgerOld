#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t435;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t1985;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Type[]
struct TypeU5BU5D_t265;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1577(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11455(__this, ___capacity, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11456(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11457(__this, method) (( Object_t* (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11458(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t435 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11459(__this, method) (( Object_t * (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11460(__this, ___item, method) (( int32_t (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11461(__this, ___item, method) (( bool (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11462(__this, ___item, method) (( int32_t (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11463(__this, ___index, ___item, method) (( void (*) (List_1_t435 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11464(__this, ___item, method) (( void (*) (List_1_t435 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11465(__this, method) (( bool (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11466(__this, method) (( Object_t * (*) (List_1_t435 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11467(__this, ___index, method) (( Object_t * (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11468(__this, ___index, ___value, method) (( void (*) (List_1_t435 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11469(__this, ___item, method) (( void (*) (List_1_t435 *, Type_t *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11470(__this, ___newCount, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11471(__this, method) (( void (*) (List_1_t435 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11472(__this, ___item, method) (( bool (*) (List_1_t435 *, Type_t *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11473(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t435 *, TypeU5BU5D_t265*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11474(__this, method) (( Enumerator_t1722  (*) (List_1_t435 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11475(__this, ___item, method) (( int32_t (*) (List_1_t435 *, Type_t *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11476(__this, ___start, ___delta, method) (( void (*) (List_1_t435 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11477(__this, ___index, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11478(__this, ___index, ___item, method) (( void (*) (List_1_t435 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11479(__this, ___item, method) (( bool (*) (List_1_t435 *, Type_t *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11480(__this, ___index, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1578(__this, method) (( TypeU5BU5D_t265* (*) (List_1_t435 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11481(__this, method) (( int32_t (*) (List_1_t435 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11482(__this, ___value, method) (( void (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11483(__this, method) (( int32_t (*) (List_1_t435 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11484(__this, ___index, method) (( Type_t * (*) (List_1_t435 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11485(__this, ___index, ___value, method) (( void (*) (List_1_t435 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
