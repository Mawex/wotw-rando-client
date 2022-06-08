using namespace app;

namespace app::methods::KickbackUtils {
IL2CPP_REGISTER_METHOD(0x00E714E0, Vector3, ModifyDeathKickbackForce, (Vector3 damageForce, EntityWeightData_EntityWeight__Enum entityWeight, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00E71920, Vector2, GetBashKickbackForce, (Damage * damage, EntityWeightData_EntityWeight__Enum entityWeight));
IL2CPP_REGISTER_METHOD(0x00E71A40, Vector3, DefaultHitKickbackForceModifier, (Damage * damage, Vector3 damageForce, EntityWeightData_EntityWeight__Enum entityWeight, bool isOnGround, bool isFalling, Vector3 ownPostion, Vector3 damageOwnerPosition, DamageWeight__Enum damageWeight));
IL2CPP_REGISTER_METHOD(0x00E72210, Vector3, AirHitKickbackForceModifier, (Vector3 damageForce, EntityWeightData_EntityWeight__Enum entityWeight));
IL2CPP_REGISTER_METHOD(0x00E72540, Vector3, LightGroundHitKickbackForceModifier, (Vector3 damageForce, EntityWeightData_EntityWeight__Enum entityWeight, bool isOnGround));
IL2CPP_REGISTER_METHOD(0x00E72900, Vector3, BashKickbackForceModifier, (Vector3 damageForce, EntityWeightData_EntityWeight__Enum entityWeight, bool isOnGround));
}
