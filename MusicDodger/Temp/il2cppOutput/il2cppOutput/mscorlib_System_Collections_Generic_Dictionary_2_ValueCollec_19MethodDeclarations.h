#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t1705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1700;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1527;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1698;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_20.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11327_gshared (ValueCollection_t1705 * __this, Dictionary_2_t1700 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11327(__this, ___dictionary, method) (( void (*) (ValueCollection_t1705 *, Dictionary_2_t1700 *, const MethodInfo*))ValueCollection__ctor_m11327_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11328_gshared (ValueCollection_t1705 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11328(__this, ___item, method) (( void (*) (ValueCollection_t1705 *, KeyValuePair_2_t40 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11328_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11329_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11329(__this, method) (( void (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11329_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11330_gshared (ValueCollection_t1705 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11330(__this, ___item, method) (( bool (*) (ValueCollection_t1705 *, KeyValuePair_2_t40 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11330_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11331_gshared (ValueCollection_t1705 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11331(__this, ___item, method) (( bool (*) (ValueCollection_t1705 *, KeyValuePair_2_t40 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11331_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11332_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11332(__this, method) (( Object_t* (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11332_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11333_gshared (ValueCollection_t1705 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11333(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1705 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11333_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11334_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11334(__this, method) (( Object_t * (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11335_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11335(__this, method) (( bool (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11336_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11336(__this, method) (( Object_t * (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11337_gshared (ValueCollection_t1705 * __this, KeyValuePair_2U5BU5D_t1698* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11337(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1705 *, KeyValuePair_2U5BU5D_t1698*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11337_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1706  ValueCollection_GetEnumerator_m11338_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11338(__this, method) (( Enumerator_t1706  (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_GetEnumerator_m11338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11339_gshared (ValueCollection_t1705 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11339(__this, method) (( int32_t (*) (ValueCollection_t1705 *, const MethodInfo*))ValueCollection_get_Count_m11339_gshared)(__this, method)
