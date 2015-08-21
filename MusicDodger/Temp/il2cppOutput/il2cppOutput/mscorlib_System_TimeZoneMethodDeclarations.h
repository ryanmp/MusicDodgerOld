#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t1411;
// System.Globalization.DaylightTime
struct DaylightTime_t965;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m8459 (TimeZone_t1411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m8460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1411 * TimeZone_get_CurrentTimeZone_m8461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m8462 (TimeZone_t1411 * __this, DateTime_t129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m8463 (Object_t * __this /* static, unused */, DateTime_t129  ___time, DaylightTime_t965 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t129  TimeZone_ToLocalTime_m8464 (TimeZone_t1411 * __this, DateTime_t129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t129  TimeZone_ToUniversalTime_m8465 (TimeZone_t1411 * __this, DateTime_t129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t525  TimeZone_GetLocalTimeDiff_m8466 (TimeZone_t1411 * __this, DateTime_t129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t525  TimeZone_GetLocalTimeDiff_m8467 (TimeZone_t1411 * __this, DateTime_t129  ___time, TimeSpan_t525  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
