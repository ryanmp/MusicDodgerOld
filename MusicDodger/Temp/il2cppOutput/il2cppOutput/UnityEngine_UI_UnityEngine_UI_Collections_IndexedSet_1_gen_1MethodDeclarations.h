#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1933;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2037;
// System.Object[]
struct ObjectU5BU5D_t321;
// System.Predicate`1<System.Object>
struct Predicate_1_t1787;
// System.Comparison`1<System.Object>
struct Comparison_1_t1793;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12503_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12503(__this, method) (( void (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1__ctor_m12503_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12505_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12505(__this, method) (( Object_t * (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12505_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12507_gshared (IndexedSet_1_t1933 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12507(__this, ___item, method) (( void (*) (IndexedSet_1_t1933 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12507_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12509_gshared (IndexedSet_1_t1933 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12509(__this, ___item, method) (( bool (*) (IndexedSet_1_t1933 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12509_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12511_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12511(__this, method) (( Object_t* (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12511_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12513_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12513(__this, method) (( void (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1_Clear_m12513_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12515_gshared (IndexedSet_1_t1933 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12515(__this, ___item, method) (( bool (*) (IndexedSet_1_t1933 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12515_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12517_gshared (IndexedSet_1_t1933 * __this, ObjectU5BU5D_t321* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12517(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1933 *, ObjectU5BU5D_t321*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12517_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12519_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12519(__this, method) (( int32_t (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1_get_Count_m12519_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12521_gshared (IndexedSet_1_t1933 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12521(__this, method) (( bool (*) (IndexedSet_1_t1933 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12521_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12523_gshared (IndexedSet_1_t1933 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12523(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1933 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12523_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12525_gshared (IndexedSet_1_t1933 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12525(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1933 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12525_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12527_gshared (IndexedSet_1_t1933 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12527(__this, ___index, method) (( void (*) (IndexedSet_1_t1933 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12527_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12529_gshared (IndexedSet_1_t1933 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12529(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1933 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12529_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12531_gshared (IndexedSet_1_t1933 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12531(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1933 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12531_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12532_gshared (IndexedSet_1_t1933 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12532(__this, ___match, method) (( void (*) (IndexedSet_1_t1933 *, Predicate_1_t1787 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12532_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12533_gshared (IndexedSet_1_t1933 * __this, Comparison_1_t1793 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12533(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1933 *, Comparison_1_t1793 *, const MethodInfo*))IndexedSet_1_Sort_m12533_gshared)(__this, ___sortLayoutFunction, method)
