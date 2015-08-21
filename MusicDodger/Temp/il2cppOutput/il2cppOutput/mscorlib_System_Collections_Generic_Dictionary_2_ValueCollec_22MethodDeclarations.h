#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t1740;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1732;
// System.Collections.Generic.IEnumerator`1<UnityEngine.TextEditor/TextEditOp>
struct IEnumerator_1_t1996;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t1728;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11661_gshared (ValueCollection_t1740 * __this, Dictionary_2_t1732 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11661(__this, ___dictionary, method) (( void (*) (ValueCollection_t1740 *, Dictionary_2_t1732 *, const MethodInfo*))ValueCollection__ctor_m11661_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11662_gshared (ValueCollection_t1740 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11662(__this, ___item, method) (( void (*) (ValueCollection_t1740 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11662_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11663_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11663(__this, method) (( void (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11663_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11664_gshared (ValueCollection_t1740 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11664(__this, ___item, method) (( bool (*) (ValueCollection_t1740 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11664_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11665_gshared (ValueCollection_t1740 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11665(__this, ___item, method) (( bool (*) (ValueCollection_t1740 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11665_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11666_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11666(__this, method) (( Object_t* (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11667_gshared (ValueCollection_t1740 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11667(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1740 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11667_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11668_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11668(__this, method) (( Object_t * (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11669_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11669(__this, method) (( bool (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11670_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11670(__this, method) (( Object_t * (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11671_gshared (ValueCollection_t1740 * __this, TextEditOpU5BU5D_t1728* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11671(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1740 *, TextEditOpU5BU5D_t1728*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11671_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t1741  ValueCollection_GetEnumerator_m11672_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11672(__this, method) (( Enumerator_t1741  (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_GetEnumerator_m11672_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11673_gshared (ValueCollection_t1740 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11673(__this, method) (( int32_t (*) (ValueCollection_t1740 *, const MethodInfo*))ValueCollection_get_Count_m11673_gshared)(__this, method)
