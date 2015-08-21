#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t568;
// System.Collections.IDictionary
struct IDictionary_t555;
// System.String[]
struct StringU5BU5D_t45;
// System.UInt16[]
struct UInt16U5BU5D_t485;
// System.Text.RegularExpressions.IMachine
struct IMachine_t550;

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C" void InterpreterFactory__ctor_m2146 (InterpreterFactory_t568 * __this, UInt16U5BU5D_t485* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C" Object_t * InterpreterFactory_NewInstance_m2147 (InterpreterFactory_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C" int32_t InterpreterFactory_get_GroupCount_m2148 (InterpreterFactory_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C" int32_t InterpreterFactory_get_Gap_m2149 (InterpreterFactory_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C" void InterpreterFactory_set_Gap_m2150 (InterpreterFactory_t568 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C" Object_t * InterpreterFactory_get_Mapping_m2151 (InterpreterFactory_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void InterpreterFactory_set_Mapping_m2152 (InterpreterFactory_t568 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t45* InterpreterFactory_get_NamesMapping_m2153 (InterpreterFactory_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C" void InterpreterFactory_set_NamesMapping_m2154 (InterpreterFactory_t568 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
