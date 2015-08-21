#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t10;
// System.Object
struct Object_t;
// SimpleJSON.JSONNode
struct JSONNode_t2;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t4;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t1497;
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m200(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor(System.Int32)
#define List_1__ctor_m8622(__this, ___capacity, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.cctor()
#define List_1__cctor_m8624(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8626(__this, method) (( Object_t* (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8628(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8630(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8632(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8634(__this, ___item, method) (( bool (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8636(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8638(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8640(__this, ___item, method) (( void (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8642(__this, method) (( bool (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8644(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8646(__this, ___index, method) (( Object_t * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8648(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
#define List_1_Add_m8650(__this, ___item, method) (( void (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8652(__this, ___newCount, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Clear()
#define List_1_Clear_m8654(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Contains(T)
#define List_1_Contains_m8656(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8658(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, JSONNodeU5BU5D_t1497*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
#define List_1_GetEnumerator_m197(__this, method) (( Enumerator_t8  (*) (List_1_t10 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::IndexOf(T)
#define List_1_IndexOf_m8661(__this, ___item, method) (( int32_t (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8663(__this, ___start, ___delta, method) (( void (*) (List_1_t10 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8665(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Insert(System.Int32,T)
#define List_1_Insert_m8667(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
#define List_1_Remove_m8669(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8671(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<SimpleJSON.JSONNode>::ToArray()
#define List_1_ToArray_m8673(__this, method) (( JSONNodeU5BU5D_t1497* (*) (List_1_t10 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Capacity()
#define List_1_get_Capacity_m8675(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8677(__this, ___value, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
#define List_1_get_Count_m8679(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m8681(__this, ___index, method) (( JSONNode_t2 * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m8683(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
