#include <interception_macros.h>

namespace app::methods::FrogEntity {
IL2CPP_REGISTER_METHOD(0x01646F60, bool, CanAnySeeCharacter, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x016470F0, bool, get_ShouldFollowOri, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x016471A0, bool, get_IsPartOfGroup, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647250, FrogGroup *, get_Group, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647260, void, set_Group, (FrogEntity * __this, FrogGroup * value));
IL2CPP_REGISTER_METHOD(0x01647270, void, OnAwake, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647280, void, ResolveDamage, (FrogEntity * __this, DamageResult * damageResult));
IL2CPP_REGISTER_METHOD(0x016472D0, void, OnFixedUpdate, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647600, void, ResetEntity, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x016476E0, void, OnCacheSerializedComponents, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x016477C0, void, TemporarlyDisableDieOnTouch, (FrogEntity * __this, float time));
IL2CPP_REGISTER_METHOD(0x01647AE0, void, QuickInstantKill, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647260, void, SetGroup, (FrogEntity * __this, FrogGroup * group));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ModifyKickbackForce, (FrogEntity * __this, Vector3 force, Damage * damage, bool applyDeathModification));
IL2CPP_REGISTER_METHOD(0x01647BD0, void, __ctor, (FrogEntity * __this));
IL2CPP_REGISTER_METHOD(0x01647C70, void, _TemporarlyDisableDieOnTouch_b__22_0, (FrogEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B478, FrogEntity__TemporarlyDisableDieOnTouch_b__22_0__MethodInfo);
}
