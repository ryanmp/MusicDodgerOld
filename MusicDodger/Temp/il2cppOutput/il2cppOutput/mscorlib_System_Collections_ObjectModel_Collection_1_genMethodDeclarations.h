#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1821;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t268;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1802;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1819;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12338_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12338(__this, method) (( void (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1__ctor_m12338_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12339_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12339(__this, method) (( bool (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12339_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12340_gshared (Collection_1_t1821 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12340(__this, ___array, ___index, method) (( void (*) (Collection_1_t1821 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12340_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12341_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12341(__this, method) (( Object_t * (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12341_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12342_gshared (Collection_1_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12342(__this, ___value, method) (( int32_t (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12342_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12343_gshared (Collection_1_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12343(__this, ___value, method) (( bool (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12343_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12344_gshared (Collection_1_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12344(__this, ___value, method) (( int32_t (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12344_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12345_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12345(__this, ___index, ___value, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12345_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12346_gshared (Collection_1_t1821 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12346(__this, ___value, method) (( void (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12346_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12347_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12347(__this, method) (( Object_t * (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12347_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12348_gshared (Collection_1_t1821 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12348(__this, ___index, method) (( Object_t * (*) (Collection_1_t1821 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12348_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12349_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12349(__this, ___index, ___value, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12349_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12350_gshared (Collection_1_t1821 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12350(__this, ___item, method) (( void (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_Add_m12350_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12351_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12351(__this, method) (( void (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_Clear_m12351_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12352_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12352(__this, method) (( void (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_ClearItems_m12352_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12353_gshared (Collection_1_t1821 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12353(__this, ___item, method) (( bool (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12353_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12354_gshared (Collection_1_t1821 * __this, ObjectU5BU5D_t268* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12354(__this, ___array, ___index, method) (( void (*) (Collection_1_t1821 *, ObjectU5BU5D_t268*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12354_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12355_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12355(__this, method) (( Object_t* (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_GetEnumerator_m12355_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12356_gshared (Collection_1_t1821 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12356(__this, ___item, method) (( int32_t (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12356_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12357_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12357(__this, ___index, ___item, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12357_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12358_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12358(__this, ___index, ___item, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12358_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12359_gshared (Collection_1_t1821 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12359(__this, ___item, method) (( bool (*) (Collection_1_t1821 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12360_gshared (Collection_1_t1821 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12360(__this, ___index, method) (( void (*) (Collection_1_t1821 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12360_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12361_gshared (Collection_1_t1821 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12361(__this, ___index, method) (( void (*) (Collection_1_t1821 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12361_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12362_gshared (Collection_1_t1821 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12362(__this, method) (( int32_t (*) (Collection_1_t1821 *, const MethodInfo*))Collection_1_get_Count_m12362_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12363_gshared (Collection_1_t1821 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12363(__this, ___index, method) (( Object_t * (*) (Collection_1_t1821 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12363_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12364_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12364(__this, ___index, ___value, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12364_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12365_gshared (Collection_1_t1821 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12365(__this, ___index, ___item, method) (( void (*) (Collection_1_t1821 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12365_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12366_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12366(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12366_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12367_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12367(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12367_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12368_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12368(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12368_gshared)(__this /* static, unused */, ___list, method)
