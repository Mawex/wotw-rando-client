#include <interception_macros.h>

namespace app::methods::Damage {
IL2CPP_REGISTER_METHOD(0x00DC0030, int32_t, GetNewDamageID, ());
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Charged, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Charged, (Damage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DC00B0, void, __ctor, (Damage * __this, float amount, Vector2 force, Vector3 position, DamageType__Enum type, AbilityType__Enum abilityType, GameObject * sender, int32_t damageID, DamageOwner * owner, SpiritShardType__Enum shardType, bool ignoreKickback, DamageWeight__Enum weight, float speedTransfer, bool bypassPlayersInvincibility));
IL2CPP_REGISTER_METHOD(0x00DC0420, void, Reset, (Damage * __this, float amount, Vector2 force, Vector3 position, DamageType__Enum type, AbilityType__Enum abilityType, GameObject * sender, int32_t damageID, DamageOwner * owner, SpiritShardType__Enum shardType, bool ignoreKickback, DamageWeight__Enum weight, float speedTransfer, bool bypassPlayersInvincibility));
IL2CPP_REGISTER_METHOD(0x00DC0600, bool, GetDamageWeightByType, (Damage * __this, DamageWeight__Enum * weight));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_Amount, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_BonusAmount, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC0690, float, get_FinalAmount, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC06A0, Vector2, get_Force, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC06C0, void, set_Force, (Damage * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00DC06E0, Vector2, get_OriginalForceDirection, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC0700, void, set_OriginalForceDirection, (Damage * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00DC0720, Vector3, get_Position, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, DamageType__Enum, get_DamageType, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC0740, bool, get_IsBash, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC0760, bool, IsBashType, (DamageType__Enum damageType));
IL2CPP_REGISTER_METHOD(0x0057AAC0, DamageWeight__Enum, get_DamageWeight, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_DamageWeight, (Damage * __this, DamageWeight__Enum value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_SpeedTransfer, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x0098F4A0, AbilityType__Enum, get_AbilityType, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, GameObject *, get_Sender, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_Ignored, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_DisableFallingDuration, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_StunDuration, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00575470, SpiritShardType__Enum, get_ShardType, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_BypassPlayerInvincibility, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC0770, void, OverrideForce, (Damage * __this, Vector2 force));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, SetAmount, (Damage * __this, float amount));
IL2CPP_REGISTER_METHOD(0x00DC07D0, void, AddBonusAmount, (Damage * __this, float bonus));
IL2CPP_REGISTER_METHOD(0x00A64050, void, SetBonusAmount, (Damage * __this, float bonus));
IL2CPP_REGISTER_METHOD(0x00DC07E0, void, ClearDamageAmount, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC07F0, void, RoundUpToNextInt, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x00DC08D0, void, DealToComponents, (Damage * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x00DC0AD0, void, DealToComponents, (Damage * __this, IAttackable * target));
IL2CPP_REGISTER_METHOD(0x00DC0BE0, void, DealToComponents, (Damage * __this, IDamageReciever * damageReceiver));
IL2CPP_REGISTER_METHOD(0x00DC0C80, void, DealToComponents, (Damage * __this, IDamageReciever__Array * damageReceivers));
IL2CPP_REGISTER_METHOD(0x00997600, void, Ignore, (Damage * __this));
IL2CPP_REGISTER_METHOD(0x0043C100, void, SetDisableFallingDuration, (Damage * __this, float disableFallingDuration));
IL2CPP_REGISTER_METHOD(0x008682B0, void, SetStunDuration, (Damage * __this, float stunDuration));
IL2CPP_REGISTER_METHOD(0x00DC0DF0, Vector3, GetDamageEffectPosition, (IDamageReciever * receiver, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00DC1030, String *, CreateFullDescription, (Damage * __this));
}
