#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t919;
struct RSAParameters_t919_marshaled;

void RSAParameters_t919_marshal(const RSAParameters_t919& unmarshaled, RSAParameters_t919_marshaled& marshaled);
void RSAParameters_t919_marshal_back(const RSAParameters_t919_marshaled& marshaled, RSAParameters_t919& unmarshaled);
void RSAParameters_t919_marshal_cleanup(RSAParameters_t919_marshaled& marshaled);
