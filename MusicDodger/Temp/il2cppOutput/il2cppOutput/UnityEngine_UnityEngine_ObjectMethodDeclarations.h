#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t71;
struct Object_t71_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m890 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t71 * Object_Internal_InstantiateSingle_m891 (Object_t * __this /* static, unused */, Object_t71 * ___data, Vector3_t70  ___pos, Quaternion_t75  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t71 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m892 (Object_t * __this /* static, unused */, Object_t71 * ___data, Vector3_t70 * ___pos, Quaternion_t75 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m893 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m894 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m895 (Object_t71 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m896 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m897 (Object_t * __this /* static, unused */, Object_t71 * ___lhs, Object_t71 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m898 (Object_t * __this /* static, unused */, Object_t71 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m899 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m900 (Object_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t71 * Object_Instantiate_m267 (Object_t * __this /* static, unused */, Object_t71 * ___original, Vector3_t70  ___position, Quaternion_t75  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m901 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m902 (Object_t * __this /* static, unused */, Object_t71 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m903 (Object_t * __this /* static, unused */, Object_t71 * ___x, Object_t71 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m904 (Object_t * __this /* static, unused */, Object_t71 * ___x, Object_t71 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t71_marshal(const Object_t71& unmarshaled, Object_t71_marshaled& marshaled);
void Object_t71_marshal_back(const Object_t71_marshaled& marshaled, Object_t71& unmarshaled);
void Object_t71_marshal_cleanup(Object_t71_marshaled& marshaled);
