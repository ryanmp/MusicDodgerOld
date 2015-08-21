#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingConfiguration
struct RemotingConfiguration_t1184;
// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t1173;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t1175;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t1198;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1200;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1185;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1187;
// System.Collections.ArrayList
struct ArrayList_t457;

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C" void RemotingConfiguration__cctor_m6685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m6686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C" void RemotingConfiguration_set_ApplicationName_m6687 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C" String_t* RemotingConfiguration_get_ProcessId_m6688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m6689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C" ActivatedClientTypeEntry_t1173 * RemotingConfiguration_IsRemotelyActivatedClientType_m6690 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m6691 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1173 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m6692 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1175 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m6693 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1198 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m6694 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1200 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m6695 (Object_t * __this /* static, unused */, ChannelData_t1185 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m6696 (Object_t * __this /* static, unused */, ProviderData_t1187 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m6697 (Object_t * __this /* static, unused */, ProviderData_t1187 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C" void RemotingConfiguration_RegisterChannels_m6698 (Object_t * __this /* static, unused */, ArrayList_t457 * ___channels, bool ___onlyDelayed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C" void RemotingConfiguration_RegisterTypes_m6699 (Object_t * __this /* static, unused */, ArrayList_t457 * ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m6700 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
