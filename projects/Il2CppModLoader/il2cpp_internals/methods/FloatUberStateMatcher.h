#include <interception_macros.h>

namespace app::methods::FloatUberStateMatcher {
IL2CPP_REGISTER_METHOD(0x01B5BC20, void, __ctor, (FloatUberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x01B5BC90, int32_t, get_EntryCount, (FloatUberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x01B5BD40, void, set_EntryCount, (FloatUberStateMatcher * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B5BE20, int32_t, Resolve, (FloatUberStateMatcher * __this, IUberState * descriptor));
IL2CPP_REGISTER_METHOD(0x01B5BF90, void, AddEntry, (GenericDataContainer * data));
IL2CPP_REGISTER_METHOD(0x01B5C240, FloatRangeUberStatePair *, GetStatePairAt, (FloatUberStateMatcher * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B5C590, int32_t, StateValueAt, (FloatUberStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x01B5C650, float, MinValueAt, (FloatUberStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x01B5C710, float, MaxValueAt, (FloatUberStateMatcher * __this, int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x01B5C7D0, int32_t, EntryIndexToStateIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x01B5C7E0, int32_t, EntryIndexToMinIndex, (int32_t entryIndex));
IL2CPP_REGISTER_METHOD(0x0140B1A0, int32_t, EntryIndexToMaxIndex, (int32_t entryIndex));
}
