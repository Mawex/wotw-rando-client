using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberState {
IL2CPP_REGISTER_METHOD(0x00F322B0, void, __ctor, (PlayerUberState * __this, PlayerUberStateDescriptor * desc, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F329A0, void, Save, (PlayerUberState * __this, UberStateArchive * archive, Object * state));
IL2CPP_REGISTER_METHOD(0x00F32BB0, void, Load, (PlayerUberState * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F32CF0, void, OnGui, (PlayerUberState * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00F33090, int64_t, get_Size, (PlayerUberState * __this));
IL2CPP_REGISTER_METHOD(0x00F331B0, String *, AsString, (PlayerUberState * __this));
}
