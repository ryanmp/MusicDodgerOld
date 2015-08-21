#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t730;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t772  : public Exception_t27
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t730 * ___alert_11;
};
