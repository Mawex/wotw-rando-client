using namespace app;

namespace app::methods::MoonTelemetryShardEquipEvent {
IL2CPP_REGISTER_METHOD(0x01472090, void, __ctor, (MoonTelemetryShardEquipEvent * __this, PlayerUberStateShards_Shard * shard, bool equipped));
IL2CPP_REGISTER_METHOD(0x0049F2B0, String *, get_Name, (MoonTelemetryShardEquipEvent * __this));
IL2CPP_REGISTER_METHOD(0x014721A0, void, SerializeToObject, (MoonTelemetryShardEquipEvent * __this, JsonBuilder_Object obj));
}
