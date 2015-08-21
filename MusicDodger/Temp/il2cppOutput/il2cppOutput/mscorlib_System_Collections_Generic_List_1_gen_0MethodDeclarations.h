#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t59;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t61;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t1886;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t51;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m238(__this, method) (( void (*) (List_1_t59 *, const MethodInfo*))List_1__ctor_m1528_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m9008(__this, ___capacity, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1__ctor_m8612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m9009(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8614_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9010(__this, method) (( Object_t* (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9011(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t59 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9012(__this, method) (( Object_t * (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9013(__this, ___item, method) (( int32_t (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8622_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9014(__this, ___item, method) (( bool (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8624_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9015(__this, ___item, method) (( int32_t (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8626_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9016(__this, ___index, ___item, method) (( void (*) (List_1_t59 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8628_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9017(__this, ___item, method) (( void (*) (List_1_t59 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8630_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9018(__this, method) (( bool (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8632_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9019(__this, method) (( Object_t * (*) (List_1_t59 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8634_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9020(__this, ___index, method) (( Object_t * (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9021(__this, ___index, ___value, method) (( void (*) (List_1_t59 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m9022(__this, ___item, method) (( void (*) (List_1_t59 *, GameObject_t61 *, const MethodInfo*))List_1_Add_m8640_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9023(__this, ___newCount, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8642_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m9024(__this, method) (( void (*) (List_1_t59 *, const MethodInfo*))List_1_Clear_m8644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m9025(__this, ___item, method) (( bool (*) (List_1_t59 *, GameObject_t61 *, const MethodInfo*))List_1_Contains_m8646_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9026(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t59 *, GameObjectU5BU5D_t51*, int32_t, const MethodInfo*))List_1_CopyTo_m8648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m9027(__this, method) (( Enumerator_t1533  (*) (List_1_t59 *, const MethodInfo*))List_1_GetEnumerator_m8649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m9028(__this, ___item, method) (( int32_t (*) (List_1_t59 *, GameObject_t61 *, const MethodInfo*))List_1_IndexOf_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9029(__this, ___start, ___delta, method) (( void (*) (List_1_t59 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8653_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9030(__this, ___index, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8655_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m9031(__this, ___index, ___item, method) (( void (*) (List_1_t59 *, int32_t, GameObject_t61 *, const MethodInfo*))List_1_Insert_m8657_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m9032(__this, ___item, method) (( bool (*) (List_1_t59 *, GameObject_t61 *, const MethodInfo*))List_1_Remove_m8659_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9033(__this, ___index, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8661_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m9034(__this, method) (( GameObjectU5BU5D_t51* (*) (List_1_t59 *, const MethodInfo*))List_1_ToArray_m8663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m9035(__this, method) (( int32_t (*) (List_1_t59 *, const MethodInfo*))List_1_get_Capacity_m8665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9036(__this, ___value, method) (( void (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8667_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m9037(__this, method) (( int32_t (*) (List_1_t59 *, const MethodInfo*))List_1_get_Count_m8669_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m9038(__this, ___index, method) (( GameObject_t61 * (*) (List_1_t59 *, int32_t, const MethodInfo*))List_1_get_Item_m8671_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m9039(__this, ___index, ___value, method) (( void (*) (List_1_t59 *, int32_t, GameObject_t61 *, const MethodInfo*))List_1_set_Item_m8673_gshared)(__this, ___index, ___value, method)
