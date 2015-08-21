#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1012;
// System.Reflection.Assembly
struct Assembly_t640;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1023;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t272;
// System.Reflection.Binder
struct Binder_t438;
// System.Type[]
struct TypeU5BU5D_t267;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t439;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t430;
// System.Object[]
struct ObjectU5BU5D_t270;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t435;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1069;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t434;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t405;
// System.String[]
struct StringU5BU5D_t45;
// System.Exception
struct Exception_t27;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t640 * EnumBuilder_get_Assembly_m5825 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m5826 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m5827 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m5828 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m5829 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1023 * EnumBuilder_get_Module_m5830 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m5831 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m5832 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m5833 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t827  EnumBuilder_get_TypeHandle_m5834 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m5835 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m5836 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t272 * EnumBuilder_GetConstructorImpl_m5837 (EnumBuilder_t1012 * __this, int32_t ___bindingAttr, Binder_t438 * ___binder, int32_t ___callConvention, TypeU5BU5D_t267* ___types, ParameterModifierU5BU5D_t439* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t430* EnumBuilder_GetConstructors_m5838 (EnumBuilder_t1012 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t270* EnumBuilder_GetCustomAttributes_m5839 (EnumBuilder_t1012 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t270* EnumBuilder_GetCustomAttributes_m5840 (EnumBuilder_t1012 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m5841 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m5842 (EnumBuilder_t1012 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m5843 (EnumBuilder_t1012 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t435* EnumBuilder_GetFields_m5844 (EnumBuilder_t1012 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t267* EnumBuilder_GetInterfaces_m5845 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m5846 (EnumBuilder_t1012 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t438 * ___binder, int32_t ___callConvention, TypeU5BU5D_t267* ___types, ParameterModifierU5BU5D_t439* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1069* EnumBuilder_GetMethods_m5847 (EnumBuilder_t1012 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t434* EnumBuilder_GetProperties_m5848 (EnumBuilder_t1012 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m5849 (EnumBuilder_t1012 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t438 * ___binder, Type_t * ___returnType, TypeU5BU5D_t267* ___types, ParameterModifierU5BU5D_t439* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m5850 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m5851 (EnumBuilder_t1012 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t438 * ___binder, Object_t * ___target, ObjectU5BU5D_t270* ___args, ParameterModifierU5BU5D_t439* ___modifiers, CultureInfo_t405 * ___culture, StringU5BU5D_t45* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m5852 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m5853 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m5854 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m5855 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m5856 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m5857 (EnumBuilder_t1012 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t27 * EnumBuilder_CreateNotSupportedException_m5858 (EnumBuilder_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
