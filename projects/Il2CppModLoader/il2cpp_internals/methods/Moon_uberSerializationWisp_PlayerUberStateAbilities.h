using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateAbilities {
IL2CPP_REGISTER_METHOD(0x00F33660, void, __ctor, (PlayerUberStateAbilities * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F33D20, void, SetAbility, (PlayerUberStateAbilities * __this, AbilityType__Enum ability, bool value));
IL2CPP_REGISTER_METHOD(0x00F33F00, bool, HasAbility, (PlayerUberStateAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00F33FB0, HashSet_1_AbilityType_ *, GetAbilities, (PlayerUberStateAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00F34250, uint32_t, GetAbilitiesHashCode, (PlayerUberStateAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00F343C0, uint8_t, GetNextAbilityUnlockOrder, (PlayerUberStateAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00F344F0, uint8_t, GetAbilityUnlockOrder, (PlayerUberStateAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00F345E0, int32_t, GetAbilityLevel, (PlayerUberStateAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00F34690, void, SetAbilityLevel, (PlayerUberStateAbilities * __this, AbilityType__Enum ability, int32_t level));
IL2CPP_REGISTER_METHOD(0x00F34750, void, IncrementAbilityLevel, (PlayerUberStateAbilities * __this, AbilityType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00F34810, void, Save, (PlayerUberStateAbilities * __this, UberStateArchive * archive, PlayerUberStateAbilities * abilities));
IL2CPP_REGISTER_METHOD(0x00F34B40, void, Load, (PlayerUberStateAbilities * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F34D70, void, OnGui, (PlayerUberStateAbilities * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F34FC0, int64_t, get_Size, (PlayerUberStateAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00F35070, void, RunSetDirtyCallback, (PlayerUberStateAbilities * __this));
IL2CPP_REGISTER_METHOD(0x00F35230, void, __cctor, (MethodInfo * method));
}
