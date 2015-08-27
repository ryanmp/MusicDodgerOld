#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSettings
struct AudioSettings_t480;

// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C" double AudioSettings_get_dspTime_m274 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m2701 (AudioSettings_t480 * __this, bool ___deviceWasChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
