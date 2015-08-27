#pragma once
#include <stdint.h>
// UnityEngine.ParticleSystem
struct ParticleSystem_t49;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t50;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EnemyScript
struct  EnemyScript_t51  : public MonoBehaviour_t52
{
	// UnityEngine.ParticleSystem EnemyScript::ps
	ParticleSystem_t49 * ___ps_2;
	// UnityEngine.SpriteRenderer EnemyScript::sr
	SpriteRenderer_t50 * ___sr_3;
	// System.Boolean EnemyScript::does_wall_bounce
	bool ___does_wall_bounce_4;
};
