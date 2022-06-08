#include <interception_macros.h>

namespace app::methods::SystemIntegration::SteamUser {
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (SteamUser * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Image, (SteamUser * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (SteamUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (SteamUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (SteamUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Uid, (SteamUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052B0A0, String *, get_SignInPrefix, (SteamUser * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SteamUser * __this));
}
