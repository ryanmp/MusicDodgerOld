﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t167;
// UnityEngine.Object
struct Object_t71;
struct Object_t71_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t71 * Resources_Load_m251 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t71 * Resources_Load_m760 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
