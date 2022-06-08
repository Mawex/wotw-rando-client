#include <interception_macros.h>

namespace app::methods::OnlineHandler {
IL2CPP_REGISTER_METHOD(0x00617340, void, OnEnable, (OnlineHandler * __this));
IL2CPP_REGISTER_METHOD(0x006174B0, void, OnDisable, (OnlineHandler * __this));
IL2CPP_REGISTER_METHOD(0x00617550, void, FixedUpdate, (OnlineHandler * __this));
IL2CPP_REGISTER_METHOD(0x00617560, void, SetState, (OnlineHandler * __this, OnlineHandler_OnlineHandlerState__Enum state));
IL2CPP_REGISTER_METHOD(0x00617640, void, Validate, (OnlineHandler * __this));
IL2CPP_REGISTER_METHOD(0x006178E0, void, __ctor, (OnlineHandler * __this));
}
