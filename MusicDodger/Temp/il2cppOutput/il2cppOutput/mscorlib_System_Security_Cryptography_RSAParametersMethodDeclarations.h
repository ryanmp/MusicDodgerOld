#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t642;
struct RSAParameters_t642_marshaled;

void RSAParameters_t642_marshal(const RSAParameters_t642& unmarshaled, RSAParameters_t642_marshaled& marshaled);
void RSAParameters_t642_marshal_back(const RSAParameters_t642_marshaled& marshaled, RSAParameters_t642& unmarshaled);
void RSAParameters_t642_marshal_cleanup(RSAParameters_t642_marshaled& marshaled);
