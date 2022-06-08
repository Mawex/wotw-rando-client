using namespace app;

namespace app::methods::MoonTelemetryShardUpgradeEvent {
IL2CPP_REGISTER_METHOD(0x01472300, void, __ctor, (MoonTelemetryShardUpgradeEvent * __this, PlayerUberStateShards_Shard * shard, int32_t newLevel, int32_t expSpent));
IL2CPP_REGISTER_METHOD(0x006A63A0, String *, get_Name, (MoonTelemetryShardUpgradeEvent * __this));
IL2CPP_REGISTER_METHOD(0x01472420, void, SerializeToObject, (MoonTelemetryShardUpgradeEvent * __this, JsonBuilder_Object obj));
}
