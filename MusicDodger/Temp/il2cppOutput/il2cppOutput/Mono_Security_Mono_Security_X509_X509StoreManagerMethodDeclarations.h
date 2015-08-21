#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509StoreManager
struct X509StoreManager_t716;
// Mono.Security.X509.X509Stores
struct X509Stores_t630;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t650;

// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern "C" X509Stores_t630 * X509StoreManager_get_CurrentUser_m2637 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern "C" X509Stores_t630 * X509StoreManager_get_LocalMachine_m2638 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern "C" X509CertificateCollection_t650 * X509StoreManager_get_TrustedRootCertificates_m3025 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
