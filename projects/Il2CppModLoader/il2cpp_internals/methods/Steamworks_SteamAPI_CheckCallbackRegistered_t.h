using namespace app;

namespace app::methods::Steamworks::SteamAPI_CheckCallbackRegistered_t {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SteamAPI_CheckCallbackRegistered_t * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (SteamAPI_CheckCallbackRegistered_t * __this, int32_t iCallbackNum));
IL2CPP_REGISTER_METHOD(0x027E21A0, IAsyncResult *, BeginInvoke, (SteamAPI_CheckCallbackRegistered_t * __this, int32_t iCallbackNum, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SteamAPI_CheckCallbackRegistered_t * __this, IAsyncResult * result));
}
