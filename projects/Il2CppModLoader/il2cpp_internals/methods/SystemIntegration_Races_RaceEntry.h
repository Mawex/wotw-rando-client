using namespace app;

namespace app::methods::SystemIntegration::Races::RaceEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_UserId, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_UserId, (RaceEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DisplayName, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DisplayName, (RaceEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Score, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Score, (RaceEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Position, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Position, (RaceEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Byte__Array *, get_Data, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Data, (RaceEntry * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x002FB990, DateTime, get_EntryTime, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_EntryTime, (RaceEntry * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsMe, (RaceEntry * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsMe, (RaceEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RaceEntry * __this));
}
