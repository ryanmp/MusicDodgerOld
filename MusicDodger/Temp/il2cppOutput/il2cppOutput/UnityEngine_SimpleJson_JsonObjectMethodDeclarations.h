#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.JsonObject
struct JsonObject_t260;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t364;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t365;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t366;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t368;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C" void JsonObject__ctor_m1216 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m1217 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m1218 (JsonObject_t260 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C" Object_t* JsonObject_get_Keys_m1219 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m1220 (JsonObject_t260 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C" Object_t* JsonObject_get_Values_m1221 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m1222 (JsonObject_t260 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m1223 (JsonObject_t260 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" void JsonObject_Add_m1224 (JsonObject_t260 * __this, KeyValuePair_2_t367  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m1225 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Contains_m1226 (JsonObject_t260 * __this, KeyValuePair_2_t367  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" void JsonObject_CopyTo_m1227 (JsonObject_t260 * __this, KeyValuePair_2U5BU5D_t366* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m1228 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m1229 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Remove_m1230 (JsonObject_t260 * __this, KeyValuePair_2_t367  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C" Object_t* JsonObject_GetEnumerator_m1231 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m1232 (JsonObject_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
