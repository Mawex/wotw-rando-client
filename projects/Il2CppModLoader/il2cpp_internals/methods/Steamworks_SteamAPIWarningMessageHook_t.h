#include <interception_macros.h>

namespace app::methods::Steamworks::SteamAPIWarningMessageHook_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SteamAPIWarningMessageHook_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (SteamAPIWarningMessageHook_t * __this, int32_t nSeverity, StringBuilder * pchDebugText));
IL2CPP_REGISTER_METHOD(0x027E20D0, IAsyncResult *, BeginInvoke, (SteamAPIWarningMessageHook_t * __this, int32_t nSeverity, StringBuilder * pchDebugText, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SteamAPIWarningMessageHook_t * __this, IAsyncResult * result));
}
