#include <interception_macros.h>

namespace app::methods::SystemIntegration::Races::RaceRequestResultEntry {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_DisplayName, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DisplayName, (RaceRequestResultEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Score, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Score, (RaceRequestResultEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Position, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A020, void, set_Position, (RaceRequestResultEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsMe, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsMe, (RaceRequestResultEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, Byte__Array *, get_Data, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Data, (RaceRequestResultEntry * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSteamEntry, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSteamEntry, (RaceRequestResultEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_IsLiveEntry, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x0052A080, void, set_IsLiveEntry, (RaceRequestResultEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_UserID, (RaceRequestResultEntry * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UserID, (RaceRequestResultEntry * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RaceRequestResultEntry * __this));
}
