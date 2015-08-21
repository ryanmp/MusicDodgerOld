#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t58;
// UnityEngine.AudioClip
struct AudioClip_t57;

// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m253 (AudioSource_t58 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m252 (AudioSource_t58 * __this, AudioClip_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
extern "C" void AudioSource_PlayScheduled_m255 (AudioSource_t58 * __this, double ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
