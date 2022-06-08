#include <interception_macros.h>

namespace app::methods::LegacyPressurePlate {
IL2CPP_REGISTER_METHOD(0x00A31F10, void, Update, (LegacyPressurePlate * __this));
IL2CPP_REGISTER_METHOD(0x00A32090, bool, IsTargetAllowed, (LegacyPressurePlate * __this, LegacyPressurePlate_Target__Enum target));
IL2CPP_REGISTER_METHOD(0x00A320A0, ICanActivatePressurePlate *, FilterTarget, (LegacyPressurePlate * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00A32200, void, AddPressing, (LegacyPressurePlate * __this, ICanActivatePressurePlate * target, bool forceAdd));
IL2CPP_REGISTER_METHOD(0x00A324E0, void, RemovePressing, (LegacyPressurePlate * __this, ICanActivatePressurePlate * target));
IL2CPP_REGISTER_METHOD(0x00A32610, void, OnCollisionEnter, (LegacyPressurePlate * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00A32620, void, OnCollisionStay, (LegacyPressurePlate * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00A32630, void, OnCollision, (LegacyPressurePlate * __this, Collision * collision, bool forceAdd));
IL2CPP_REGISTER_METHOD(0x00A328C0, void, OnCollisionExit, (LegacyPressurePlate * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00A32960, void, __ctor, (LegacyPressurePlate * __this));
}
