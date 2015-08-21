#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t331;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t326;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t2001;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t1753;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m1610(__this, method) (( void (*) (List_1_t331 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m11791(__this, ___capacity, method) (( void (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m11792(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11793(__this, method) (( Object_t* (*) (List_1_t331 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11794(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t331 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11795(__this, method) (( Object_t * (*) (List_1_t331 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11796(__this, ___item, method) (( int32_t (*) (List_1_t331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11797(__this, ___item, method) (( bool (*) (List_1_t331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11798(__this, ___item, method) (( int32_t (*) (List_1_t331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11799(__this, ___index, ___item, method) (( void (*) (List_1_t331 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11800(__this, ___item, method) (( void (*) (List_1_t331 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11801(__this, method) (( bool (*) (List_1_t331 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11802(__this, method) (( Object_t * (*) (List_1_t331 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11803(__this, ___index, method) (( Object_t * (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11804(__this, ___index, ___value, method) (( void (*) (List_1_t331 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m11805(__this, ___item, method) (( void (*) (List_1_t331 *, BaseInvokableCall_t326 *, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11806(__this, ___newCount, method) (( void (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m11807(__this, method) (( void (*) (List_1_t331 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m11808(__this, ___item, method) (( bool (*) (List_1_t331 *, BaseInvokableCall_t326 *, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11809(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t331 *, BaseInvokableCallU5BU5D_t1753*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m11810(__this, method) (( Enumerator_t1754  (*) (List_1_t331 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m11811(__this, ___item, method) (( int32_t (*) (List_1_t331 *, BaseInvokableCall_t326 *, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11812(__this, ___start, ___delta, method) (( void (*) (List_1_t331 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11813(__this, ___index, method) (( void (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m11814(__this, ___index, ___item, method) (( void (*) (List_1_t331 *, int32_t, BaseInvokableCall_t326 *, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m11815(__this, ___item, method) (( bool (*) (List_1_t331 *, BaseInvokableCall_t326 *, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11816(__this, ___index, method) (( void (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m11817(__this, method) (( BaseInvokableCallU5BU5D_t1753* (*) (List_1_t331 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m11818(__this, method) (( int32_t (*) (List_1_t331 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11819(__this, ___value, method) (( void (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m11820(__this, method) (( int32_t (*) (List_1_t331 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m11821(__this, ___index, method) (( BaseInvokableCall_t326 * (*) (List_1_t331 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11822(__this, ___index, ___value, method) (( void (*) (List_1_t331 *, int32_t, BaseInvokableCall_t326 *, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
