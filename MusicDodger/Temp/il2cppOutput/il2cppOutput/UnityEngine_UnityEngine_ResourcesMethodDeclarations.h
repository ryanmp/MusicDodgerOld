#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t164;
// UnityEngine.Object
struct Object_t66;
struct Object_t66_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" Object_t66 * Resources_Load_m242 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t66 * Resources_Load_m751 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
