#include <interception_macros.h>

namespace app::methods::SeinHeavySpiritSlash {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_SpriteMirrorLock, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFB00, void, set_SpriteMirrorLock, (SeinHeavySpiritSlash * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005CB2B0, bool, get_HasEnoughEnergy, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_OverrideSpriteRotation, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_IsStatePerforming, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, get_IsAttacking, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFBE0, void, OnSetReferenceToSein, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFCC0, void, Start, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFE60, void, OnDestroy, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x01000000, void, ModifyGravityPlatformMovementSettings, (SeinHeavySpiritSlash * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0471DB50, SeinHeavySpiritSlash_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010000C0, void, ChangeState, (SeinHeavySpiritSlash * __this, SeinHeavySpiritSlash_State__Enum state));
IL2CPP_REGISTER_METHOD(0x010004A0, void, UpdateCharacterState, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x01000550, void, UpdateIdle, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x01000B70, void, UpdateCharge, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x01000EA0, void, UpdateSlash, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x00FFFBC0, bool, ShouldAnimationKeepPlaying, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHODINFO(0x04799A80, SeinHeavySpiritSlash_ShouldAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005CB2F0, void, SpendEnergy, (SeinHeavySpiritSlash * __this));
IL2CPP_REGISTER_METHOD(0x010019D0, void, __ctor, (SeinHeavySpiritSlash * __this));
}
