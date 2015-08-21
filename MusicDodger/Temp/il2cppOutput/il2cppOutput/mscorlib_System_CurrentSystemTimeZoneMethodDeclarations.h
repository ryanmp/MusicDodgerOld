#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1412;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1449;
// System.String[]
struct StringU5BU5D_t45;
// System.Globalization.DaylightTime
struct DaylightTime_t965;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m8468 (CurrentSystemTimeZone_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m8469 (CurrentSystemTimeZone_t1412 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8470 (CurrentSystemTimeZone_t1412 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m8471 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1449** ___data, StringU5BU5D_t45** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t965 * CurrentSystemTimeZone_GetDaylightChanges_m8472 (CurrentSystemTimeZone_t1412 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t525  CurrentSystemTimeZone_GetUtcOffset_m8473 (CurrentSystemTimeZone_t1412 * __this, DateTime_t129  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m8474 (CurrentSystemTimeZone_t1412 * __this, DaylightTime_t965 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t965 * CurrentSystemTimeZone_GetDaylightTimeFromData_m8475 (CurrentSystemTimeZone_t1412 * __this, Int64U5BU5D_t1449* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
