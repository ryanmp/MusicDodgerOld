#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t574;
struct IntStack_t574_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m2208 (IntStack_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m2209 (IntStack_t574 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m2210 (IntStack_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m2211 (IntStack_t574 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t574_marshal(const IntStack_t574& unmarshaled, IntStack_t574_marshaled& marshaled);
void IntStack_t574_marshal_back(const IntStack_t574_marshaled& marshaled, IntStack_t574& unmarshaled);
void IntStack_t574_marshal_cleanup(IntStack_t574_marshaled& marshaled);
