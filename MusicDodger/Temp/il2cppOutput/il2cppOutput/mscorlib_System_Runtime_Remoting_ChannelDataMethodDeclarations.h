#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1185;
// System.Collections.ArrayList
struct ArrayList_t457;
// System.Collections.Hashtable
struct Hashtable_t447;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m6725 (ChannelData_t1185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t457 * ChannelData_get_ServerProviders_m6726 (ChannelData_t1185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t457 * ChannelData_get_ClientProviders_m6727 (ChannelData_t1185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t447 * ChannelData_get_CustomProperties_m6728 (ChannelData_t1185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m6729 (ChannelData_t1185 * __this, ChannelData_t1185 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
