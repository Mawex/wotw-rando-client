#include <interception_macros.h>

namespace app::methods::SaveSlotsItemsUI {
IL2CPP_REGISTER_METHOD(0x00926E20, void, Awake, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00926F40, void, OnEnable, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00926F50, void, Refresh, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00927000, void, RefreshItem, (SaveSlotsItemsUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00927750, void, UpdateScroll, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00927920, void, SetScrollFromIndex, (SaveSlotsItemsUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00927940, void, SetScrollFromIndexNow, (SaveSlotsItemsUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x008682A0, float, get_TargetScroll, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00927AC0, void, set_TargetScroll, (SaveSlotsItemsUI * __this, float value));
IL2CPP_REGISTER_METHOD(0x00927BB0, void, ResetPositions, (SaveSlotsItemsUI * __this));
IL2CPP_REGISTER_METHOD(0x00927DD0, void, __ctor, (SaveSlotsItemsUI * __this));
}
