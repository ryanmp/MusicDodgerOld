#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t644;
struct DSAParameters_t644_marshaled;

void DSAParameters_t644_marshal(const DSAParameters_t644& unmarshaled, DSAParameters_t644_marshaled& marshaled);
void DSAParameters_t644_marshal_back(const DSAParameters_t644_marshaled& marshaled, DSAParameters_t644& unmarshaled);
void DSAParameters_t644_marshal_cleanup(DSAParameters_t644_marshaled& marshaled);
