#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t1825;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Int32[]
struct Int32U5BU5D_t831;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2409;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1823;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m11055_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11055(__this, method) (( void (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1__ctor_m11055_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11056_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11056(__this, method) (( bool (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11056_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11057_gshared (Collection_1_t1825 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11057(__this, ___array, ___index, method) (( void (*) (Collection_1_t1825 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11057_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11058_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11058(__this, method) (( Object_t * (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11058_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11059_gshared (Collection_1_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11059(__this, ___value, method) (( int32_t (*) (Collection_1_t1825 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11059_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11060_gshared (Collection_1_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11060(__this, ___value, method) (( bool (*) (Collection_1_t1825 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11060_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11061_gshared (Collection_1_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11061(__this, ___value, method) (( int32_t (*) (Collection_1_t1825 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11061_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11062_gshared (Collection_1_t1825 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11062(__this, ___index, ___value, method) (( void (*) (Collection_1_t1825 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11062_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11063_gshared (Collection_1_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11063(__this, ___value, method) (( void (*) (Collection_1_t1825 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11063_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11064_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11064(__this, method) (( bool (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11064_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11065_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11065(__this, method) (( Object_t * (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11065_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11066_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11066(__this, method) (( bool (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11066_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11067_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11067(__this, method) (( bool (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11067_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11068_gshared (Collection_1_t1825 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11068(__this, ___index, method) (( Object_t * (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11068_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11069_gshared (Collection_1_t1825 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11069(__this, ___index, ___value, method) (( void (*) (Collection_1_t1825 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11069_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m11070_gshared (Collection_1_t1825 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m11070(__this, ___item, method) (( void (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_Add_m11070_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m11071_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11071(__this, method) (( void (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_Clear_m11071_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m11072_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11072(__this, method) (( void (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_ClearItems_m11072_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m11073_gshared (Collection_1_t1825 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m11073(__this, ___item, method) (( bool (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_Contains_m11073_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11074_gshared (Collection_1_t1825 * __this, Int32U5BU5D_t831* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11074(__this, ___array, ___index, method) (( void (*) (Collection_1_t1825 *, Int32U5BU5D_t831*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11074_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11075_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11075(__this, method) (( Object_t* (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_GetEnumerator_m11075_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11076_gshared (Collection_1_t1825 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11076(__this, ___item, method) (( int32_t (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m11076_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11077_gshared (Collection_1_t1825 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m11077(__this, ___index, ___item, method) (( void (*) (Collection_1_t1825 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m11077_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11078_gshared (Collection_1_t1825 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11078(__this, ___index, ___item, method) (( void (*) (Collection_1_t1825 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m11078_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m11079_gshared (Collection_1_t1825 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m11079(__this, ___item, method) (( bool (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_Remove_m11079_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11080_gshared (Collection_1_t1825 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11080(__this, ___index, method) (( void (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11080_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11081_gshared (Collection_1_t1825 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11081(__this, ___index, method) (( void (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11081_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11082_gshared (Collection_1_t1825 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11082(__this, method) (( int32_t (*) (Collection_1_t1825 *, const MethodInfo*))Collection_1_get_Count_m11082_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m11083_gshared (Collection_1_t1825 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11083(__this, ___index, method) (( int32_t (*) (Collection_1_t1825 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11083_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11084_gshared (Collection_1_t1825 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11084(__this, ___index, ___value, method) (( void (*) (Collection_1_t1825 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m11084_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11085_gshared (Collection_1_t1825 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11085(__this, ___index, ___item, method) (( void (*) (Collection_1_t1825 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m11085_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11086_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11086(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11086_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m11087_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11087(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11087_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11088_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11088(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11088_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11089_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11089(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11089_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11090_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11090(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11090_gshared)(__this /* static, unused */, ___list, method)
