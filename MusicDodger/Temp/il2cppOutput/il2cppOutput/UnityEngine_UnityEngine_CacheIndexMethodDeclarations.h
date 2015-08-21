#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t177;
struct CacheIndex_t177_marshaled;

void CacheIndex_t177_marshal(const CacheIndex_t177& unmarshaled, CacheIndex_t177_marshaled& marshaled);
void CacheIndex_t177_marshal_back(const CacheIndex_t177_marshaled& marshaled, CacheIndex_t177& unmarshaled);
void CacheIndex_t177_marshal_cleanup(CacheIndex_t177_marshaled& marshaled);
