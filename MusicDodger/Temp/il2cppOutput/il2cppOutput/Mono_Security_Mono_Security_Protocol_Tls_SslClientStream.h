#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t765;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t750;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t751;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t766;
// Mono.Security.Protocol.Tls.SslStreamBase
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"
// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t736  : public SslStreamBase_t767
{
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t765 * ___ServerCertValidation_16;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t750 * ___ClientCertSelection_17;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t751 * ___PrivateKeySelection_18;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t766 * ___ServerCertValidation2_19;
};
