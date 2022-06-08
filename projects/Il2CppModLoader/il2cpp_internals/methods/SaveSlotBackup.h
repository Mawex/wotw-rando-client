using namespace app;

namespace app::methods::SaveSlotBackup {
IL2CPP_REGISTER_METHOD(0x0091D890, void, __ctor, (SaveSlotBackup * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0091D930, int32_t, IndexOfOldestSaveSlotInfo, (SaveSlotBackup * __this, int32_t from, int32_t to));
IL2CPP_REGISTER_METHOD(0x0091D9D0, int32_t, TimeOfNewestSaveSlotInfo, (SaveSlotBackup * __this, int32_t from, int32_t to));
IL2CPP_REGISTER_METHOD(0x0091DA60, int32_t, IndexOfOldestReservedSaveSlotInfo, (SaveSlotBackup * __this));
IL2CPP_REGISTER_METHOD(0x0091DA70, int32_t, IndexOfOldestGatedSaveSlotInfo, (SaveSlotBackup * __this));
IL2CPP_REGISTER_METHOD(0x0091DAA0, int32_t, TimeOfNewestGatedSaveSlotInfo, (SaveSlotBackup * __this));
IL2CPP_REGISTER_METHOD(0x0091DB40, int32_t, IndexOfOldestSaveSlotInfo, (SaveSlotBackup * __this));
IL2CPP_REGISTER_METHOD(0x0091DC00, int32_t, GetLargestOrderValue, (SaveSlotBackup * __this));
}
