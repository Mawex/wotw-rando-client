#include <interception_macros.h>

namespace app::methods::SeinChargeFlameAbility {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A44730, float, get_ChargeDuration, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A44750, bool, get_HasEnoughEnergy, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A44800, Input_InputButtonProcessor *, get_ChargeFlameButton, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A448A0, bool, get_IsStatePerforming, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A448A0, bool, get_IsCharging, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A448E0, void, OnSetReferenceToSein, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A449C0, void, SpendEnergy, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A44A70, void, RestoreEnergy, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A44B20, void, OnAwake, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A456A0, void, OnDestroy, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A45850, void, OnRestoreCheckpoint, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x04728280, SeinChargeFlameAbility_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A45A10, void, OnEnterStartState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x04752F90, SeinChargeFlameAbility_OnEnterStartState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A45AF0, void, UpdateStartState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x0476DEB8, SeinChargeFlameAbility_UpdateStartState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A45DA0, void, UpdatePrechargingState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x04777C30, SeinChargeFlameAbility_UpdatePrechargingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A46450, void, UpdateChargingState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x04706788, SeinChargeFlameAbility_UpdateChargingState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A46A90, void, ReleaseChargeBurst, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A46F60, void, UpdateChargedState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x0478EDE8, SeinChargeFlameAbility_UpdateChargedState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A47290, void, UpdateCharacterState, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A47300, void, OnExit, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A47530, SoundSource *, CurrentChargingSound, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A47620, void, __ctor, (SeinChargeFlameAbility * __this));
IL2CPP_REGISTER_METHOD(0x00A47840, void, __cctor, ());
}
