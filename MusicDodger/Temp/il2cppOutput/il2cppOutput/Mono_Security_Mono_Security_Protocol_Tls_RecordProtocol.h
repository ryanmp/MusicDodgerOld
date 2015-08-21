#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t753;
// System.IO.Stream
struct Stream_t24;
// Mono.Security.Protocol.Tls.Context
struct Context_t732;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t739  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t24 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t732 * ___context_2;
};
struct RecordProtocol_t739_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t753 * ___record_processing_0;
};
