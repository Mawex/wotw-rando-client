#include <interception_macros.h>

namespace app::methods::Steamworks::SteamRemotePlay {
IL2CPP_REGISTER_METHOD(0x0278FE20, uint32_t, GetSessionCount, ());
IL2CPP_REGISTER_METHOD(0x0278FED0, uint32_t, GetSessionID, (int32_t i_session_index));
IL2CPP_REGISTER_METHOD(0x0278FF80, CSteamID, GetSessionSteamID, (uint32_t un_session_i_d));
IL2CPP_REGISTER_METHOD(0x027900C0, String *, GetSessionClientName, (uint32_t un_session_i_d));
IL2CPP_REGISTER_METHOD(0x02790180, ESteamDeviceFormFactor__Enum, GetSessionClientFormFactor, (uint32_t un_session_i_d));
IL2CPP_REGISTER_METHOD(0x02790230, bool, BGetSessionClientResolution, (uint32_t un_session_i_d, app::int32_t * pn_resolution_x, app::int32_t * pn_resolution_y));
}
