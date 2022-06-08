#include <interception_macros.h>

namespace app::methods::SpiritShardShopUISubItem {
IL2CPP_REGISTER_METHOD(0x002FB9D0, PlayerUberStateShards_Shard *, get_SpiritShard, (SpiritShardShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6A600, void, Awake, (SpiritShardShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6A620, void, Update, (SpiritShardShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6A630, void, SetItemContext, (SpiritShardShopUISubItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6A730, void, OnItemContextDirty, (SpiritShardShopUISubItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6A740, void, SetSpiritShard, (SpiritShardShopUISubItem * __this, PlayerUberStateShards_Shard * spiritShard, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6A770, void, UpdateShardIcon, (SpiritShardShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6A940, void, UpdateShardProperties, (SpiritShardShopUISubItem * __this, Object * gridContext, bool initialize));
IL2CPP_REGISTER_METHOD(0x00D6AA30, void, UpdateShard, (SpiritShardShopUISubItem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpiritShardShopUISubItem * __this));
}
