#include <interception_macros.h>

namespace app::methods::SpiritShardShopUIItem {
IL2CPP_REGISTER_METHOD(0x002FBC20, PlayerUberStateShards_Shard *, get_SpiritShard, (SpiritShardShopUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D693B0, void, Awake, (SpiritShardShopUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D693C0, void, SetItemContext, (SpiritShardShopUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D694E0, void, OnItemContextDirty, (SpiritShardShopUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D694E0, void, Update, (SpiritShardShopUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D694F0, void, UpdateShard, (SpiritShardShopUIItem * __this, PlayerUberStateShards_Shard * spiritShard));
IL2CPP_REGISTER_METHOD(0x00D69AA0, void, __ctor, (SpiritShardShopUIItem * __this));
}
