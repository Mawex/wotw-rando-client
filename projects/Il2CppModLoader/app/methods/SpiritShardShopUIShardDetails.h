#pragma once
#include <interception_macros.h>

namespace app::methods::SpiritShardShopUIShardDetails {
    IL2CPP_REGISTER_METHOD(0x00D69AC0, void, Awake, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D69EE0, void, OnDestroy, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, SetItemDirty, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C8A0, SpiritShardShopUIShardDetails_SetItemDirty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A0F0, void, SetItem, (app::SpiritShardShopUIShardDetails * this_ptr, app::PlayerUberStateShards_Shard * item))
    IL2CPP_REGISTER_METHOD(0x00D6A200, void, UpdateDetails, (app::SpiritShardShopUIShardDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A5F0, void, ctor, (app::SpiritShardShopUIShardDetails * this_ptr))
}
