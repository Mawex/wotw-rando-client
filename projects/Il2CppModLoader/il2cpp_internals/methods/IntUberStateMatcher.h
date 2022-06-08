using namespace app;

namespace app::methods::IntUberStateMatcher {
IL2CPP_REGISTER_METHOD(0x01B5F170, void, __ctor, (IntUberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x01B5F1E0, int32_t, get_EntryCount, (IntUberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x01B5F290, void, set_EntryCount, (IntUberStateMatcher * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B5F370, int32_t, Resolve, (IntUberStateMatcher * __this, IUberState * descriptor));
IL2CPP_REGISTER_METHOD(0x01B5F4D0, void, AddEntry, (GenericDataContainer * data));
IL2CPP_REGISTER_METHOD(0x01B5F6F0, IntUberStateMatcher_IntRangeUberStatePair *, GetStatePairAt, (IntUberStateMatcher * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B5F9A0, int32_t, StateValueAt, (IntUberStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x01B5FA60, int32_t, GetValueAt, (IntUberStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToStateIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1B0, int32_t, EntryIndexToValueIndex, (int32_t entryIndex));
}
