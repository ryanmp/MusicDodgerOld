﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct IDictionary_2_t262;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct IDictionary_2_t263;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t264;
// System.Type[]
struct TypeU5BU5D_t265;
// System.String[]
struct StringU5BU5D_t45;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.PocoJsonSerializerStrategy
struct  PocoJsonSerializerStrategy_t260  : public Object_t
{
	// System.Collections.Generic.IDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate> SimpleJson.PocoJsonSerializerStrategy::ConstructorCache
	Object_t* ___ConstructorCache_0;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>> SimpleJson.PocoJsonSerializerStrategy::GetCache
	Object_t* ___GetCache_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>> SimpleJson.PocoJsonSerializerStrategy::SetCache
	Object_t* ___SetCache_2;
};
struct PocoJsonSerializerStrategy_t260_StaticFields{
	// System.Type[] SimpleJson.PocoJsonSerializerStrategy::EmptyTypes
	TypeU5BU5D_t265* ___EmptyTypes_3;
	// System.Type[] SimpleJson.PocoJsonSerializerStrategy::ArrayConstructorParameterTypes
	TypeU5BU5D_t265* ___ArrayConstructorParameterTypes_4;
	// System.String[] SimpleJson.PocoJsonSerializerStrategy::Iso8601Format
	StringU5BU5D_t45* ___Iso8601Format_5;
};
