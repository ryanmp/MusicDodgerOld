#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t329;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t324;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t1999;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t1751;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1599(__this, method) (( void (*) (List_1_t329 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m11780(__this, ___capacity, method) (( void (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m11781(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11782(__this, method) (( Object_t* (*) (List_1_t329 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11783(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t329 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11784(__this, method) (( Object_t * (*) (List_1_t329 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11785(__this, ___item, method) (( int32_t (*) (List_1_t329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11786(__this, ___item, method) (( bool (*) (List_1_t329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11787(__this, ___item, method) (( int32_t (*) (List_1_t329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11788(__this, ___index, ___item, method) (( void (*) (List_1_t329 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11789(__this, ___item, method) (( void (*) (List_1_t329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11790(__this, method) (( bool (*) (List_1_t329 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11791(__this, method) (( Object_t * (*) (List_1_t329 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11792(__this, ___index, method) (( Object_t * (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11793(__this, ___index, ___value, method) (( void (*) (List_1_t329 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m11794(__this, ___item, method) (( void (*) (List_1_t329 *, BaseInvokableCall_t324 *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11795(__this, ___newCount, method) (( void (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m11796(__this, method) (( void (*) (List_1_t329 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m11797(__this, ___item, method) (( bool (*) (List_1_t329 *, BaseInvokableCall_t324 *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11798(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t329 *, BaseInvokableCallU5BU5D_t1751*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m11799(__this, method) (( Enumerator_t1752  (*) (List_1_t329 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m11800(__this, ___item, method) (( int32_t (*) (List_1_t329 *, BaseInvokableCall_t324 *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11801(__this, ___start, ___delta, method) (( void (*) (List_1_t329 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11802(__this, ___index, method) (( void (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m11803(__this, ___index, ___item, method) (( void (*) (List_1_t329 *, int32_t, BaseInvokableCall_t324 *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m11804(__this, ___item, method) (( bool (*) (List_1_t329 *, BaseInvokableCall_t324 *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11805(__this, ___index, method) (( void (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m11806(__this, method) (( BaseInvokableCallU5BU5D_t1751* (*) (List_1_t329 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m11807(__this, method) (( int32_t (*) (List_1_t329 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11808(__this, ___value, method) (( void (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m11809(__this, method) (( int32_t (*) (List_1_t329 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m11810(__this, ___index, method) (( BaseInvokableCall_t324 * (*) (List_1_t329 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11811(__this, ___index, ___value, method) (( void (*) (List_1_t329 *, int32_t, BaseInvokableCall_t324 *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
