﻿#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t734;
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t735  : public Context_t730
{
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t734 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;
};
