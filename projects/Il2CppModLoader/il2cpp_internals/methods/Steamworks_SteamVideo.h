using namespace app;

namespace app::methods::Steamworks::SteamVideo {
IL2CPP_REGISTER_METHOD(0x027A6430, void, GetVideoURL, (AppId_t unVideoAppID));
IL2CPP_REGISTER_METHOD(0x027A64E0, bool, IsBroadcasting, (int32_t * pnNumViewers));
IL2CPP_REGISTER_METHOD(0x027A65A0, void, GetOPFSettings, (AppId_t unVideoAppID));
IL2CPP_REGISTER_METHOD(0x027A6650, bool, GetOPFStringForApp, (AppId_t unVideoAppID, String * * pchBuffer, int32_t * pnBufferSize));
}
