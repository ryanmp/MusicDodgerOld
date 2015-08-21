#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t63;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t58;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t1888;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t53;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m246(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1__ctor_m1539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m9024(__this, ___capacity, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1__ctor_m8623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m9025(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8625_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9026(__this, method) (( Object_t* (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8627_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9027(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9028(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9029(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8633_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9030(__this, ___item, method) (( bool (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8635_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9031(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8637_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9032(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8639_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9033(__this, ___item, method) (( void (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9034(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8643_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9035(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8645_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9036(__this, ___index, method) (( Object_t * (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8647_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9037(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8649_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m9038(__this, ___item, method) (( void (*) (List_1_t63 *, GameObject_t58 *, const MethodInfo*))List_1_Add_m8651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9039(__this, ___newCount, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m9040(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Clear_m8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m9041(__this, ___item, method) (( bool (*) (List_1_t63 *, GameObject_t58 *, const MethodInfo*))List_1_Contains_m8657_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9042(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, GameObjectU5BU5D_t53*, int32_t, const MethodInfo*))List_1_CopyTo_m8659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m9043(__this, method) (( Enumerator_t1536  (*) (List_1_t63 *, const MethodInfo*))List_1_GetEnumerator_m8660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m9044(__this, ___item, method) (( int32_t (*) (List_1_t63 *, GameObject_t58 *, const MethodInfo*))List_1_IndexOf_m8662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9045(__this, ___start, ___delta, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8664_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9046(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8666_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m9047(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, GameObject_t58 *, const MethodInfo*))List_1_Insert_m8668_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m9048(__this, ___item, method) (( bool (*) (List_1_t63 *, GameObject_t58 *, const MethodInfo*))List_1_Remove_m8670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9049(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8672_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m9050(__this, method) (( GameObjectU5BU5D_t53* (*) (List_1_t63 *, const MethodInfo*))List_1_ToArray_m8674_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m9051(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Capacity_m8676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9052(__this, ___value, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8678_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m9053(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Count_m8680_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m9054(__this, ___index, method) (( GameObject_t58 * (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_get_Item_m8682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m9055(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, GameObject_t58 *, const MethodInfo*))List_1_set_Item_m8684_gshared)(__this, ___index, ___value, method)
