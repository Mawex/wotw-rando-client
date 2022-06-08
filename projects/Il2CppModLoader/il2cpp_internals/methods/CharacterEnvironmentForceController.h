#include <interception_macros.h>

namespace app::methods::CharacterEnvironmentForceController {
IL2CPP_REGISTER_METHOD(0x0104E000, void, Start, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104E510, void, OnEnable, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104E5B0, void, OnDisable, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104E650, void, OnDamageReceived, (CharacterEnvironmentForceController * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHODINFO(0x04793070, CharacterEnvironmentForceController_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0104E960, void, OnDestroy, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104ED30, void, OnCollisionGround, (CharacterEnvironmentForceController * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x047093C0, CharacterEnvironmentForceController_OnCollisionGround__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0104EDC0, void, OnLand, (CharacterEnvironmentForceController * __this, Vector3 normal, Collider * target));
IL2CPP_REGISTER_METHODINFO(0x04743618, CharacterEnvironmentForceController_OnLand__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104F070, void, OnUpdate, (CharacterEnvironmentForceController * __this, float dt));
IL2CPP_REGISTER_METHOD(0x0104F760, Vector3, get_Velocity, (CharacterEnvironmentForceController * __this));
IL2CPP_REGISTER_METHOD(0x0104F850, void, AddGroundImpulse, (CharacterEnvironmentForceController * __this, float impulse));
IL2CPP_REGISTER_METHOD(0x0104FA90, void, __ctor, (CharacterEnvironmentForceController * __this));
}
