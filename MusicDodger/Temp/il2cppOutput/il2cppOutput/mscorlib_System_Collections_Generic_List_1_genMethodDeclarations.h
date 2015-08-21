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
struct JSONNodeU5BU5D_t1495;
// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m200(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor(System.Int32)
#define List_1__ctor_m8611(__this, ___capacity, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.cctor()
#define List_1__cctor_m8613(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8615(__this, method) (( Object_t* (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8617(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8619(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8621(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8623(__this, ___item, method) (( bool (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8625(__this, ___item, method) (( int32_t (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8627(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8629(__this, ___item, method) (( void (*) (List_1_t10 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8631(__this, method) (( bool (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8633(__this, method) (( Object_t * (*) (List_1_t10 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8635(__this, ___index, method) (( Object_t * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8637(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
#define List_1_Add_m8639(__this, ___item, method) (( void (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8641(__this, ___newCount, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Clear()
#define List_1_Clear_m8643(__this, method) (( void (*) (List_1_t10 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Contains(T)
#define List_1_Contains_m8645(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8647(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t10 *, JSONNodeU5BU5D_t1495*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
#define List_1_GetEnumerator_m197(__this, method) (( Enumerator_t8  (*) (List_1_t10 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::IndexOf(T)
#define List_1_IndexOf_m8650(__this, ___item, method) (( int32_t (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8652(__this, ___start, ___delta, method) (( void (*) (List_1_t10 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8654(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Insert(System.Int32,T)
#define List_1_Insert_m8656(__this, ___index, ___item, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
#define List_1_Remove_m8658(__this, ___item, method) (( bool (*) (List_1_t10 *, JSONNode_t2 *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8660(__this, ___index, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<SimpleJSON.JSONNode>::ToArray()
#define List_1_ToArray_m8662(__this, method) (( JSONNodeU5BU5D_t1495* (*) (List_1_t10 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Capacity()
#define List_1_get_Capacity_m8664(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8666(__this, ___value, method) (( void (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
#define List_1_get_Count_m8668(__this, method) (( int32_t (*) (List_1_t10 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m8670(__this, ___index, method) (( JSONNode_t2 * (*) (List_1_t10 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m8672(__this, ___index, ___value, method) (( void (*) (List_1_t10 *, int32_t, JSONNode_t2 *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
