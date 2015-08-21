#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t646;
struct DSAParameters_t646_marshaled;

void DSAParameters_t646_marshal(const DSAParameters_t646& unmarshaled, DSAParameters_t646_marshaled& marshaled);
void DSAParameters_t646_marshal_back(const DSAParameters_t646_marshaled& marshaled, DSAParameters_t646& unmarshaled);
void DSAParameters_t646_marshal_cleanup(DSAParameters_t646_marshaled& marshaled);
