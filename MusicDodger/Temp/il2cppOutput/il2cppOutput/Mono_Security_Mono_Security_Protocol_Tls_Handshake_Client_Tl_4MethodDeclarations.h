﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t1056;
// Mono.Security.Protocol.Tls.Context
struct Context_t1007;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t784;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t925;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificate__ctor_m5324 (TlsServerCertificate_t1056 * __this, Context_t1007 * ___context, ByteU5BU5D_t36* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C" void TlsServerCertificate_Update_m5325 (TlsServerCertificate_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m5326 (TlsServerCertificate_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m5327 (TlsServerCertificate_t1056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m5328 (TlsServerCertificate_t1056 * __this, X509Certificate_t784 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerCertificate_validateCertificates_m5329 (TlsServerCertificate_t1056 * __this, X509CertificateCollection_t925 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m5330 (TlsServerCertificate_t1056 * __this, X509Certificate_t784 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m5331 (TlsServerCertificate_t1056 * __this, String_t* ___subjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m5332 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;