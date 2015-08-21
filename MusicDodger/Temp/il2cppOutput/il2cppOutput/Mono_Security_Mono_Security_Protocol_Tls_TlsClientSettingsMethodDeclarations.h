#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t744;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t482;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t511;

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C" void TlsClientSettings__ctor_m3419 (TlsClientSettings_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C" String_t* TlsClientSettings_get_TargetHost_m3420 (TlsClientSettings_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C" void TlsClientSettings_set_TargetHost_m3421 (TlsClientSettings_t744 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C" X509CertificateCollection_t482 * TlsClientSettings_get_Certificates_m3422 (TlsClientSettings_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void TlsClientSettings_set_Certificates_m3423 (TlsClientSettings_t744 * __this, X509CertificateCollection_t482 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C" X509Certificate_t511 * TlsClientSettings_get_ClientCertificate_m3424 (TlsClientSettings_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void TlsClientSettings_set_ClientCertificate_m3425 (TlsClientSettings_t744 * __this, X509Certificate_t511 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C" void TlsClientSettings_UpdateCertificateRSA_m3426 (TlsClientSettings_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
