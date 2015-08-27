#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t457;
struct CacheIndex_t457_marshaled;

void CacheIndex_t457_marshal(const CacheIndex_t457& unmarshaled, CacheIndex_t457_marshaled& marshaled);
void CacheIndex_t457_marshal_back(const CacheIndex_t457_marshaled& marshaled, CacheIndex_t457& unmarshaled);
void CacheIndex_t457_marshal_cleanup(CacheIndex_t457_marshaled& marshaled);
