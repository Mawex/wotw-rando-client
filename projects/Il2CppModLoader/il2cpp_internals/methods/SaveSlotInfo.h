#include <interception_macros.h>

namespace app::methods::SaveSlotInfo {
    IL2CPP_REGISTER_METHOD(0x00922B60, void, __ctor_1, (app::SaveSlotInfo * this_ptr, app::SaveSlotInfo * clone));
    IL2CPP_REGISTER_METHOD(0x00922CC0, void, __ctor_2, (app::SaveSlotInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00922E80, bool, LoadFromValueStore, (app::SaveSlotInfo * this_ptr, app::PlayerUberStateDescriptor * player_descriptor, app::UberStateValueStore * uber_state_value_store));
    IL2CPP_REGISTER_METHOD(0x00923360, int32_t, get_TotalSeconds, (app::SaveSlotInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00923370, void, FillData, (app::SaveSlotInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00923850, void, __cctor, ());
}
