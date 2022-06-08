#include <interception_macros.h>

namespace app::methods::SeinSpiritShardsSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B020, Type *, get_AnimationMontageEventType, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B0C0, bool, get_CanAfford, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B100, bool, get_CanAffordCharged, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B140, void, OnSetReferenceToSein, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, KeepFlurryAnimationPlaying, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B170, void, Start, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B230, void, OnDestroy, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6B310, void, OnAnimationMontageEventStart, (SeinSpiritShardsSpell * __this, int32_t eventId, AnimationMontageEventContext context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationMontageEventStay, (SeinSpiritShardsSpell * __this, int32_t eventId, AnimationMontageEventContext context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationMontageEventEnd, (SeinSpiritShardsSpell * __this, int32_t eventId, AnimationMontageEventContext context));
IL2CPP_REGISTER_METHOD(0x00A6B340, void, EnterState, (SeinSpiritShardsSpell * __this, SeinSpiritShardsSpell_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00A6BE00, void, UpdateStateNormal, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6C1E0, void, UpdateStateCharging, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6C280, void, UpdateStateCharged, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6C2F0, bool, get_IsStatePerforming, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6C300, void, UpdateCharacterState, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6C570, void, PlayMontage, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x007DEF20, void, OnCurrentMontageStopped, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F970, SeinSpiritShardsSpell_OnCurrentMontageStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A6C7D0, void, SpawnShards, (SeinSpiritShardsSpell * __this, bool chargedShot));
IL2CPP_REGISTER_METHOD(0x00A6CAD0, void, SpawnShard, (SeinSpiritShardsSpell * __this, Vector3 direction, bool chargedShot));
IL2CPP_REGISTER_METHOD(0x00A6CFE0, bool, ShouldDealDamage, (SeinSpiritShardsSpell * __this, GameObject * target));
IL2CPP_REGISTER_METHODINFO(0x04767FD8, SeinSpiritShardsSpell_ShouldDealDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A6D0A0, int32_t, GetShardsCount, (SeinSpiritShardsSpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6D190, void, __ctor, (SeinSpiritShardsSpell * __this));
}
