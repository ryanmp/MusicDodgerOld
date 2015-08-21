#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t483;
// System.Uri
struct Uri_t255;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m1770 (ServicePoint_t483 * __this, Uri_t255 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t255 * ServicePoint_get_Address_m1771 (ServicePoint_t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m1772 (ServicePoint_t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t129  ServicePoint_get_IdleSince_m1773 (ServicePoint_t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m1774 (ServicePoint_t483 * __this, DateTime_t129  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m1775 (ServicePoint_t483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m1776 (ServicePoint_t483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m1777 (ServicePoint_t483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m1778 (ServicePoint_t483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m1779 (ServicePoint_t483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m1780 (ServicePoint_t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
