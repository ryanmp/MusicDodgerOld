#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t644;
struct RSAParameters_t644_marshaled;

void RSAParameters_t644_marshal(const RSAParameters_t644& unmarshaled, RSAParameters_t644_marshaled& marshaled);
void RSAParameters_t644_marshal_back(const RSAParameters_t644_marshaled& marshaled, RSAParameters_t644& unmarshaled);
void RSAParameters_t644_marshal_cleanup(RSAParameters_t644_marshaled& marshaled);
