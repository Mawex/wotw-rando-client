using namespace app;

namespace app::methods::PiranhaEntity {
IL2CPP_REGISTER_METHOD(0x0115E6D0, bool, get_ShouldFollowOri, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115E780, void, AdjustCameraTargetWeight, (PiranhaEntity * __this, float * weight, CameraTargetData * data, Vector3 primaryTargetPosition));
IL2CPP_REGISTER_METHOD(0x0115E7E0, bool, get_IsTargetInWater, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115E910, bool, get_IsStunned, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115E930, void, OnCacheSerializedComponents, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115EB30, void, OnFixedUpdate, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115ECE0, void, ResetEntity, (PiranhaEntity * __this));
IL2CPP_REGISTER_METHOD(0x0115ED00, void, ResolveDamage, (PiranhaEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x0115ED40, Vector3, ModifyKickbackForce, (PiranhaEntity * __this, Vector3 force, Damage * damage, bool applyDeathModification));
IL2CPP_REGISTER_METHOD(0x0115EE80, void, __ctor, (PiranhaEntity * __this));
}
