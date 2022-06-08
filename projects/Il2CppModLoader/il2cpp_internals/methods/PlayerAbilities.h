using namespace app;

namespace app::methods::PlayerAbilities {
IL2CPP_REGISTER_METHOD(0x0117BB70, PlayerUberStateAbilities *, get_Abilities, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x0117BBA0, int32_t, get_OriStrength, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x0117BC70, int32_t, get_SplitFlameTargets, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x0117BD00, void, SetReferenceToSein, (PlayerAbilities * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x0117BD30, void, Awake, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x011808D0, void, OnGlobalShardsEquip, (PlayerAbilities * __this, PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHODINFO(0x04748C48, PlayerAbilities_OnGlobalShardsEquip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01180920, void, OnGlobalShardsUnequip, (PlayerAbilities * __this, PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHODINFO(0x0472E6A0, PlayerAbilities_OnGlobalShardsUnequip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01180970, void, OnDestroy, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01180CD0, void, Apply, (PlayerAbilities * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01180D10, IUberState__Array *, get_AffectingUberStates, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01180DA0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01180F60, void, SetAbility, (PlayerAbilities * __this, AbilityType__Enum ability, bool value));
IL2CPP_REGISTER_METHOD(0x011810C0, HashSet_1_AbilityType_ *, GetAbilities, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01181100, uint32_t, GetAbilitiesHashCode, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01181140, bool, HasAbility, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011812D0, uint8_t, GetAbilityUnlockOrder, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x01181400, int32_t, GetAbilityLevel, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011814F0, void, SetAbilityLevel, (PlayerAbilities * __this, AbilityType__Enum ability, int32_t level));
IL2CPP_REGISTER_METHOD(0x01181610, void, IncrementAbilityLevel, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x01181720, int32_t, GetMaxLevel, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011818A0, bool, IsAbilityMaxedOutLevel, (PlayerAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x011819A0, void, ResetAbilitiesCache, (PlayerAbilities * __this));
IL2CPP_REGISTER_METHOD(0x01181AB0, void, __ctor, (PlayerAbilities * __this));
}
