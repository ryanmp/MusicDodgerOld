﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MRUList
struct MRUList_t838;
// System.Object
struct Object_t;

// System.Void System.Text.RegularExpressions.MRUList::.ctor()
extern "C" void MRUList__ctor_m3954 (MRUList_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
extern "C" void MRUList_Use_m3955 (MRUList_t838 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MRUList::Evict()
extern "C" Object_t * MRUList_Evict_m3956 (MRUList_t838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
