#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t346;
// UnityEngine.UI.Graphic
struct Graphic_t168;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2482;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t1982;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t1984;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t171;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1713(__this, method) (( void (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1__ctor_m12503_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13418(__this, method) (( Object_t * (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12505_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m13419(__this, ___item, method) (( void (*) (IndexedSet_1_t346 *, Graphic_t168 *, const MethodInfo*))IndexedSet_1_Add_m12507_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m13420(__this, ___item, method) (( bool (*) (IndexedSet_1_t346 *, Graphic_t168 *, const MethodInfo*))IndexedSet_1_Remove_m12509_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m13421(__this, method) (( Object_t* (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12511_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m13422(__this, method) (( void (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1_Clear_m12513_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m13423(__this, ___item, method) (( bool (*) (IndexedSet_1_t346 *, Graphic_t168 *, const MethodInfo*))IndexedSet_1_Contains_m12515_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m13424(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t346 *, GraphicU5BU5D_t1982*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12517_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m13425(__this, method) (( int32_t (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1_get_Count_m12519_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m13426(__this, method) (( bool (*) (IndexedSet_1_t346 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12521_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m13427(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t346 *, Graphic_t168 *, const MethodInfo*))IndexedSet_1_IndexOf_m12523_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m13428(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t346 *, int32_t, Graphic_t168 *, const MethodInfo*))IndexedSet_1_Insert_m12525_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m13429(__this, ___index, method) (( void (*) (IndexedSet_1_t346 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12527_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m13430(__this, ___index, method) (( Graphic_t168 * (*) (IndexedSet_1_t346 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12529_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m13431(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t346 *, int32_t, Graphic_t168 *, const MethodInfo*))IndexedSet_1_set_Item_m12531_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m13432(__this, ___match, method) (( void (*) (IndexedSet_1_t346 *, Predicate_1_t1984 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12532_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m13433(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t346 *, Comparison_1_t171 *, const MethodInfo*))IndexedSet_1_Sort_m12533_gshared)(__this, ___sortLayoutFunction, method)
