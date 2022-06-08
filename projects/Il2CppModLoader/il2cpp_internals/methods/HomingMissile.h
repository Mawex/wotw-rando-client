using namespace app;

namespace app::methods::HomingMissile {
IL2CPP_REGISTER_METHOD(0x00B5C4F0, Vector3, get_TargetPosition, (HomingMissile * __this));
IL2CPP_REGISTER_METHOD(0x00653A60, Vector3, get_Position, (HomingMissile * __this));
IL2CPP_REGISTER_METHOD(0x00B5C5B0, void, Init, (HomingMissile * __this, IAttackable * target, DamageOwner * damageOwner));
IL2CPP_REGISTER_METHOD(0x00B5CA90, void, Awake, (HomingMissile * __this));
IL2CPP_REGISTER_METHOD(0x00B5CB70, void, Update, (HomingMissile * __this));
IL2CPP_REGISTER_METHOD(0x00B5D320, void, __ctor, (HomingMissile * __this));
}
