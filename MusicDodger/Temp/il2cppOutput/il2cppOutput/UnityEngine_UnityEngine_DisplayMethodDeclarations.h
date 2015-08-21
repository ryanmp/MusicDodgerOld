#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Display
struct Display_t185;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t183;
// System.IntPtr[]
struct IntPtrU5BU5D_t351;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m855 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m856 (Display_t185 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C" void Display__cctor_m857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern "C" void Display_add_onDisplaysUpdated_m858 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t183 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern "C" void Display_remove_onDisplaysUpdated_m859 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t183 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern "C" int32_t Display_get_renderingWidth_m860 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern "C" int32_t Display_get_renderingHeight_m861 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C" int32_t Display_get_systemWidth_m862 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C" int32_t Display_get_systemHeight_m863 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern "C" RenderBuffer_t297  Display_get_colorBuffer_m864 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern "C" RenderBuffer_t297  Display_get_depthBuffer_m865 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate()
extern "C" void Display_Activate_m866 (Display_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern "C" void Display_Activate_m867 (Display_t185 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParams_m868 (Display_t185 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolution_m869 (Display_t185 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern "C" bool Display_MultiDisplayLicense_m870 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern "C" Vector3_t70  Display_RelativeMouseAt_m871 (Object_t * __this /* static, unused */, Vector3_t70  ___inputMouseCoordinates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
extern "C" Display_t185 * Display_get_main_m872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C" void Display_RecreateDisplayList_m873 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t351* ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C" void Display_FireDisplaysUpdated_m874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m875 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m876 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m877 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t297 * ___color, RenderBuffer_t297 * ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m878 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m879 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m880 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m881 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m882 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
