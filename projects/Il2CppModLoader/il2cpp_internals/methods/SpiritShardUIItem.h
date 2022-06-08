using namespace app;

namespace app::methods::SpiritShardUIItem {
IL2CPP_REGISTER_METHOD(0x002FBC80, PlayerUberStateShards_Shard *, get_SpiritShard, (SpiritShardUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6C400, void, Awake, (SpiritShardUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6C430, void, SetItemContext, (SpiritShardUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6C520, void, OnItemContextDirty, (SpiritShardUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6C530, void, SetSpiritShard, (SpiritShardUIItem * __this, PlayerUberStateShards_Shard * spiritShard, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6C570, void, UpdateShardIcon, (SpiritShardUIItem * __this));
IL2CPP_REGISTER_METHOD(0x00D6C860, void, UpdateShardProperties, (SpiritShardUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6D1F0, void, __ctor, (SpiritShardUIItem * __this));
}
