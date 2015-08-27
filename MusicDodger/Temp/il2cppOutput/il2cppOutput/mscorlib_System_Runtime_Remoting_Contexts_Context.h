#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t732;
// System.Collections.Hashtable
struct Hashtable_t722;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
struct  Context_t1407  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t732 * ___context_properties_1;
};
struct Context_t1407_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t722 * ___namedSlots_2;
};
