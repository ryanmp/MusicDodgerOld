#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Player
struct Player_t49;
// UnityEngine.Collision
struct Collision_t64;

// System.Void Player::.ctor()
extern "C" void Player__ctor_m224 (Player_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m225 (Player_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m226 (Player_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnCollisionEnter(UnityEngine.Collision)
extern "C" void Player_OnCollisionEnter_m227 (Player_t49 * __this, Collision_t64 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
