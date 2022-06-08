using namespace app;

namespace app::methods::SpiritShardUIShardSocket {
IL2CPP_REGISTER_METHOD(0x002FBC60, PlayerUberStateShards_Shard *, get_SpiritShard, (SpiritShardUIShardSocket * __this));
IL2CPP_REGISTER_METHOD(0x00D6F980, void, Awake, (SpiritShardUIShardSocket * __this));
IL2CPP_REGISTER_METHOD(0x00D6F990, void, SetItemContext, (SpiritShardUIShardSocket * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (SpiritShardUIShardSocket * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00D6FBA0, void, SetShardType, (SpiritShardUIShardSocket * __this, SpiritShardType__Enum spiritShardType));
IL2CPP_REGISTER_METHOD(0x00D70130, void, UpdateProperties, (SpiritShardUIShardSocket * __this, Texture2D * icon, int32_t level, int32_t maxLevel));
IL2CPP_REGISTER_METHOD(0x00D70630, void, __ctor, (SpiritShardUIShardSocket * __this));
}
