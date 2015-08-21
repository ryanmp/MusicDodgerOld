#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t447;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t492;
// System.Boolean[]
struct BooleanU5BU5D_t493;
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
// System.Net.WebHeaderCollection
struct  WebHeaderCollection_t470  : public NameValueCollection_t460
{
	// System.Boolean System.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated_15;
};
struct WebHeaderCollection_t470_StaticFields{
	// System.Collections.Hashtable System.Net.WebHeaderCollection::restricted
	Hashtable_t447 * ___restricted_12;
	// System.Collections.Hashtable System.Net.WebHeaderCollection::multiValue
	Hashtable_t447 * ___multiValue_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Net.WebHeaderCollection::restricted_response
	Dictionary_2_t492 * ___restricted_response_14;
	// System.Boolean[] System.Net.WebHeaderCollection::allowed_chars
	BooleanU5BU5D_t493* ___allowed_chars_16;
};
