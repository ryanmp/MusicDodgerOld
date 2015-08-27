#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct CrossAppDomainData_t1403;
// System.String
struct String_t;

// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern "C" void CrossAppDomainData__ctor_m8253 (CrossAppDomainData_t1403 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C" int32_t CrossAppDomainData_get_DomainID_m8254 (CrossAppDomainData_t1403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C" String_t* CrossAppDomainData_get_ProcessID_m8255 (CrossAppDomainData_t1403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
