#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t813;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1406  : public StringComparer_t389
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t813 * ____compareInfo_5;
};
