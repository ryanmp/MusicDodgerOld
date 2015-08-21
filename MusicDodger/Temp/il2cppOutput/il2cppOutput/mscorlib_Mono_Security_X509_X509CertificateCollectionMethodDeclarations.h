#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t903;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t907;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t908;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m4877 (X509CertificateCollection_t903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m4878 (X509CertificateCollection_t903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t907 * X509CertificateCollection_get_Item_m4879 (X509CertificateCollection_t903 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m4880 (X509CertificateCollection_t903 * __this, X509Certificate_t907 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t908 * X509CertificateCollection_GetEnumerator_m4881 (X509CertificateCollection_t903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m4882 (X509CertificateCollection_t903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
