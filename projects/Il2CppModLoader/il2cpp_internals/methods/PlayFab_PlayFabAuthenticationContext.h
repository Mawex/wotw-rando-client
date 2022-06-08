#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabAuthenticationContext {
IL2CPP_REGISTER_METHOD(0x017B43D0, void, __ctor, (PlayFabAuthenticationContext * __this));
IL2CPP_REGISTER_METHOD(0x017B4470, void, __ctor, (PlayFabAuthenticationContext * __this, String * clientSessionTicket, String * entityToken, String * playFabId));
IL2CPP_REGISTER_METHOD(0x017B44C0, bool, IsClientLoggedIn, (PlayFabAuthenticationContext * __this));
IL2CPP_REGISTER_METHOD(0x017B44E0, bool, IsEntityLoggedIn, (PlayFabAuthenticationContext * __this));
IL2CPP_REGISTER_METHOD(0x00B70200, void, ForgetAllCredentials, (PlayFabAuthenticationContext * __this));
}
