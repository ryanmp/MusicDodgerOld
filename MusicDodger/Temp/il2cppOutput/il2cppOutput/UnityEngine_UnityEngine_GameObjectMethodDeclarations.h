#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t61;
// UnityEngine.Transform
struct Transform_t68;
// UnityEngine.Component
struct Component_t72;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
extern "C" Component_t72 * GameObject_GetComponentByName_m899 (GameObject_t61 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
extern "C" Component_t72 * GameObject_GetComponent_m262 (GameObject_t61 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t68 * GameObject_get_transform_m258 (GameObject_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m900 (GameObject_t61 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t72 * GameObject_Internal_AddComponentWithType_m901 (GameObject_t61 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t72 * GameObject_AddComponent_m902 (GameObject_t61 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
