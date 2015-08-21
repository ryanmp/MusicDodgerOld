#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t738;
// System.IO.Stream
struct Stream_t24;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t737;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t755;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t746;
// System.Byte[]
struct ByteU5BU5D_t36;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m3143 (ClientRecordProtocol_t738 * __this, Stream_t24 * ___innerStream, ClientContext_t737 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t755 * ClientRecordProtocol_GetMessage_m3144 (ClientRecordProtocol_t738 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m3145 (ClientRecordProtocol_t738 * __this, TlsStream_t746 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t755 * ClientRecordProtocol_createClientHandshakeMessage_m3146 (ClientRecordProtocol_t738 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t755 * ClientRecordProtocol_createServerHandshakeMessage_m3147 (ClientRecordProtocol_t738 * __this, uint8_t ___type, ByteU5BU5D_t36* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
