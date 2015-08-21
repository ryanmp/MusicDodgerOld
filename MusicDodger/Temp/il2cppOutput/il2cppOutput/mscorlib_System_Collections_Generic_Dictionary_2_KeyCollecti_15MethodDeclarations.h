#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t1655;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1651;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkID>
struct IEnumerator_1_t1945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t1646;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_16.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m10586_gshared (KeyCollection_t1655 * __this, Dictionary_2_t1651 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m10586(__this, ___dictionary, method) (( void (*) (KeyCollection_t1655 *, Dictionary_2_t1651 *, const MethodInfo*))KeyCollection__ctor_m10586_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10587_gshared (KeyCollection_t1655 * __this, uint64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10587(__this, ___item, method) (( void (*) (KeyCollection_t1655 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10588_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10588(__this, method) (( void (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10589_gshared (KeyCollection_t1655 * __this, uint64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10589(__this, ___item, method) (( bool (*) (KeyCollection_t1655 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10589_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10590_gshared (KeyCollection_t1655 * __this, uint64_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10590(__this, ___item, method) (( bool (*) (KeyCollection_t1655 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10590_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10591_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10591(__this, method) (( Object_t* (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m10592_gshared (KeyCollection_t1655 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m10592(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1655 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m10592_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10593_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10593(__this, method) (( Object_t * (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10594_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10594(__this, method) (( bool (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10594_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m10595_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m10595(__this, method) (( Object_t * (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m10595_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m10596_gshared (KeyCollection_t1655 * __this, NetworkIDU5BU5D_t1646* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m10596(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1655 *, NetworkIDU5BU5D_t1646*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m10596_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t1656  KeyCollection_GetEnumerator_m10597_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m10597(__this, method) (( Enumerator_t1656  (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_GetEnumerator_m10597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m10598_gshared (KeyCollection_t1655 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m10598(__this, method) (( int32_t (*) (KeyCollection_t1655 *, const MethodInfo*))KeyCollection_get_Count_m10598_gshared)(__this, method)
