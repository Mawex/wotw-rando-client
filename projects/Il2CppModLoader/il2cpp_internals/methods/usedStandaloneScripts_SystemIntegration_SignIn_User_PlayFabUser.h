#include <interception_macros.h>

namespace app::methods::usedStandaloneScripts::SystemIntegration::SignIn::User::PlayFabUser {
IL2CPP_REGISTER_METHOD(0x03127490, void, __ctor, (PlayFabUser * __this, LoginResult * loginResult));
IL2CPP_REGISTER_METHOD(0x002FA280, Texture2D *, get_Image, (PlayFabUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_GamerTag, (PlayFabUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (PlayFabUser * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Uid, (PlayFabUser * __this));
IL2CPP_REGISTER_METHOD(0x03127650, String *, get_SignInPrefix, (PlayFabUser * __this));
}
