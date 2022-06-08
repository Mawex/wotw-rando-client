#include <interception_macros.h>

namespace app::methods::KuBowAttack {
IL2CPP_REGISTER_METHOD(0x0122C980, SeinCharacter *, get_Sein, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122CA10, SeinBowAttack *, get_SeinBow, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122CAD0, bool, get_IsStatePerforming, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122CBC0, void, OnSetReferenceToKu, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122CBF0, void, UpdateState, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122CE70, void, StartAttack, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122D140, void, EndAttack, (KuBowAttack * __this));
IL2CPP_REGISTER_METHOD(0x0122D410, void, ModifyGravityPlatformMovementSettings, (KuBowAttack * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04762F68, KuBowAttack_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122D470, void, ModifyHorizontalPlatformMovementSettings, (KuBowAttack * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x047365C0, KuBowAttack_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (KuBowAttack * __this));
}
