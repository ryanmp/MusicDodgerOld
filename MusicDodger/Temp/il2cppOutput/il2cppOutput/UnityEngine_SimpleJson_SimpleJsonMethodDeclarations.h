﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.SimpleJson
struct SimpleJson_t263;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t261;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t262;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t359;
// System.Char[]
struct CharU5BU5D_t369;
// SimpleJson.JsonArray
struct JsonArray_t257;
// System.Text.StringBuilder
struct StringBuilder_t370;
// System.Collections.IEnumerable
struct IEnumerable_t371;

// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m1233 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m1234 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m1235 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t* SimpleJson_ParseObject_m1236 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C" JsonArray_t257 * SimpleJson_ParseArray_m1237 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m1238 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m1239 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern "C" String_t* SimpleJson_ConvertFromUtf32_m1240 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m1241 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m1242 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m1243 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m1244 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m1245 (Object_t * __this /* static, unused */, CharU5BU5D_t369* ___json, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeValue_m1246 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t370 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m1247 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t370 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m1248 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t370 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m1249 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t370 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m1250 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t370 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m1251 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m1252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t262 * SimpleJson_get_PocoJsonSerializerStrategy_m1253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
