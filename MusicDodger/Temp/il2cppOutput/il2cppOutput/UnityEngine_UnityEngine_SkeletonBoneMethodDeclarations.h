#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t493;
struct SkeletonBone_t493_marshaled;

void SkeletonBone_t493_marshal(const SkeletonBone_t493& unmarshaled, SkeletonBone_t493_marshaled& marshaled);
void SkeletonBone_t493_marshal_back(const SkeletonBone_t493_marshaled& marshaled, SkeletonBone_t493& unmarshaled);
void SkeletonBone_t493_marshal_cleanup(SkeletonBone_t493_marshaled& marshaled);
