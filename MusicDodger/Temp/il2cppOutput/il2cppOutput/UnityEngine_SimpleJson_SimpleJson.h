#pragma once
#include <stdint.h>
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t261;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t262;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.SimpleJson
struct  SimpleJson_t263  : public Object_t
{
};
struct SimpleJson_t263_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t262 * ____pocoJsonSerializerStrategy_1;
};
