#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t921;
struct DSAParameters_t921_marshaled;

void DSAParameters_t921_marshal(const DSAParameters_t921& unmarshaled, DSAParameters_t921_marshaled& marshaled);
void DSAParameters_t921_marshal_back(const DSAParameters_t921_marshaled& marshaled, DSAParameters_t921& unmarshaled);
void DSAParameters_t921_marshal_cleanup(DSAParameters_t921_marshaled& marshaled);
