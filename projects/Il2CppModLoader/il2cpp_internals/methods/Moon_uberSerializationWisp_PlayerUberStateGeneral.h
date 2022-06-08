using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateGeneral {
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, get_WorldPosition, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x00F39440, void, set_WorldPosition, (PlayerUberStateGeneral * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, get_FastWorldPosition, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_FastWorldPosition, (PlayerUberStateGeneral * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x005C3FF0, GameWorldAreaID__Enum, get_AreaID, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x00F39500, void, set_AreaID, (PlayerUberStateGeneral * __this, GameWorldAreaID__Enum value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DebugOn, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x00F39510, void, set_DebugOn, (PlayerUberStateGeneral * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_DeathCounter, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x00F39520, void, set_DeathCounter, (PlayerUberStateGeneral * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F39530, void, __ctor, (PlayerUberStateGeneral * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F39840, void, SetGameTime, (PlayerUberStateGeneral * __this, float time));
IL2CPP_REGISTER_METHOD(0x00F39850, void, Save, (PlayerUberStateGeneral * __this, UberStateArchive * archive, PlayerUberStateGeneral * general));
IL2CPP_REGISTER_METHOD(0x00F39C10, void, Load, (PlayerUberStateGeneral * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F39EB0, void, OnGui, (PlayerUberStateGeneral * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F39FE0, int64_t, get_Size, (PlayerUberStateGeneral * __this));
IL2CPP_REGISTER_METHOD(0x00F3A090, void, RunSetDirtyCallback, (PlayerUberStateGeneral * __this));
}
