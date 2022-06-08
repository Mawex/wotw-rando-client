using namespace app;

namespace app::methods::Moon::FilteredRandomRange {
IL2CPP_REGISTER_METHOD(0x02559030, void, __ctor, (FilteredRandomRange * __this, IRng * rng, int32_t historyLength));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetMin, (FilteredRandomRange * __this, uint32_t min));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, SetMax, (FilteredRandomRange * __this, uint32_t max));
IL2CPP_REGISTER_METHOD(0x0052A000, void, SetRepeatingRunLength, (FilteredRandomRange * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x025590E0, uint32_t, GetNext, (FilteredRandomRange * __this, bool shiftHistory));
IL2CPP_REGISTER_METHOD(0x02559810, void, ShiftHistory, (FilteredRandomRange * __this));
IL2CPP_REGISTER_METHOD(0x025598B0, uint32_t, GetCurrent, (FilteredRandomRange * __this));
IL2CPP_REGISTER_METHOD(0x025598F0, uint32_t, GetHistory, (FilteredRandomRange * __this, int32_t index));
}
