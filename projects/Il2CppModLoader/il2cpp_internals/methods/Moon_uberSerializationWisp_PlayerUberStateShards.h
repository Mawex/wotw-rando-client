using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateShards {
IL2CPP_REGISTER_METHOD(0x00F406E0, void, __ctor, (PlayerUberStateShards * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F40DC0, PlayerUberStateShards_Shard *, SetAbility, (PlayerUberStateShards * __this, SpiritShardType__Enum ability, bool value));
IL2CPP_REGISTER_METHOD(0x00F40EF0, bool, HasAbility, (PlayerUberStateShards * __this, SpiritShardType__Enum ability));
IL2CPP_REGISTER_METHOD(0x00F40FA0, PlayerUberStateShards_Shard *, GetShard, (PlayerUberStateShards * __this, SpiritShardType__Enum shard));
IL2CPP_REGISTER_METHOD(0x00F41040, int32_t, GetShardLevel, (PlayerUberStateShards * __this, SpiritShardType__Enum shard));
IL2CPP_REGISTER_METHOD(0x00F410F0, int32_t, GetShardMaxLevel, (PlayerUberStateShards * __this, SpiritShardType__Enum shard));
IL2CPP_REGISTER_METHOD(0x00F411B0, void, AddShardSlot, (PlayerUberStateShards * __this));
IL2CPP_REGISTER_METHOD(0x00F411C0, void, SetShardSlotCount, (PlayerUberStateShards * __this, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04798A50, PlayerUberStateShards_SetShardSlotCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F411D0, PlayerUberStateShards_Shard *, GetShardAtSlot, (PlayerUberStateShards * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_ShardSlotCount, (PlayerUberStateShards * __this));
IL2CPP_REGISTER_METHOD(0x00F412F0, void, Save, (PlayerUberStateShards * __this, UberStateArchive * archive, PlayerUberStateShards * abilities));
IL2CPP_REGISTER_METHOD(0x00F41500, void, Load, (PlayerUberStateShards * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F417C0, void, OnGui, (PlayerUberStateShards * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F41A00, int64_t, get_Size, (PlayerUberStateShards * __this));
IL2CPP_REGISTER_METHOD(0x00F41AB0, void, RunSetDirtyCallback, (PlayerUberStateShards * __this));
IL2CPP_REGISTER_METHOD(0x00F41C70, void, __cctor, (MethodInfo * method));
}
