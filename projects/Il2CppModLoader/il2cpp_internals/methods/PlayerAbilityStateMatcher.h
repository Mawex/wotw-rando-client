using namespace app;

namespace app::methods::PlayerAbilityStateMatcher {
IL2CPP_REGISTER_METHOD(0x0140A570, void, __ctor, (PlayerAbilityStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0140A5E0, int32_t, get_EntryCount, (PlayerAbilityStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0140A690, void, set_EntryCount, (PlayerAbilityStateMatcher * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0140A770, int32_t, Resolve, (PlayerAbilityStateMatcher * __this, IUberState * descriptor));
IL2CPP_REGISTER_METHOD(0x0140A960, void, AddEntry, (GenericDataContainer * data));
IL2CPP_REGISTER_METHOD(0x0140AC10, PlayerAbilityStatePair *, GetStatePairAt, (PlayerAbilityStateMatcher * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0140AF60, int32_t, StateValueAt, (PlayerAbilityStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B020, AbilityType__Enum, AbilityValueAt, (PlayerAbilityStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B0E0, bool, HasAbilityValueAt, (PlayerAbilityStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToStateIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1B0, int32_t, EntryIndexToAbilityIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, EntryIndexToHasAbilityIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1C0, Dictionary_2_System_Int32_System_Type_ *, GetIdToTypeMap, (PlayerAbilityStateMatcher * __this));
}
