﻿#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t760;
// System.Net.IPv6Address
struct IPv6Address_t762;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.IPv6Address
struct  IPv6Address_t762  : public Object_t
{
	// System.UInt16[] System.Net.IPv6Address::address
	UInt16U5BU5D_t760* ___address_0;
	// System.Int32 System.Net.IPv6Address::prefixLength
	int32_t ___prefixLength_1;
	// System.Int64 System.Net.IPv6Address::scopeId
	int64_t ___scopeId_2;
};
struct IPv6Address_t762_StaticFields{
	// System.Net.IPv6Address System.Net.IPv6Address::Loopback
	IPv6Address_t762 * ___Loopback_3;
	// System.Net.IPv6Address System.Net.IPv6Address::Unspecified
	IPv6Address_t762 * ___Unspecified_4;
};
