#include <interception_macros.h>

namespace app::methods::MothEnemy {
IL2CPP_REGISTER_METHOD(0x00864990, MothSwarm *, get_Swarm, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864A60, MothSwarmer *, get_Swarmer, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00755700, bool, get_ShouldFlock, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864A70, void, set_ShouldFlock, (MothEnemy * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00864A80, bool, get_IsLanded, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864A90, void, set_IsLanded, (MothEnemy * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00864AA0, Vector3, get_PathTarget, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864AC0, void, set_PathTarget, (MothEnemy * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00864AE0, float, get_ReactionTime, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864AF0, void, set_ReactionTime, (MothEnemy * __this, float value));
IL2CPP_REGISTER_METHOD(0x00864B00, void, Awake, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864CF0, void, OnEnable, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00864E90, void, OnDisable, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865030, void, OnDestroy, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865070, void, Start, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865170, void, OnFixedUpdate, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x008654B0, float, get_YRotation, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x008655D0, float, get_ZRotation, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865620, void, AnimateWings, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865980, void, CreateSwarmer, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00865AE0, void, MoveToLandPoint, (MothEnemy * __this, Vector2 point, Vector2 normal, float maxRange));
IL2CPP_REGISTER_METHOD(0x00865FB0, void, OnDeathEvent, (MothEnemy * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04783610, MothEnemy_OnDeathEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008660A0, void, OnModifyDamage, (MothEnemy * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x008661F0, void, OnStickyMineStuck, (MothEnemy * __this));
IL2CPP_REGISTER_METHOD(0x00866300, void, __ctor, (MothEnemy * __this));
}
