#include <interception_macros.h>

namespace app::methods::ExpText {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (ExpText * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (ExpText * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_Amount, (ExpText * __this));
IL2CPP_REGISTER_METHOD(0x00987150, void, set_Amount, (ExpText * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x009872E0, void, FixedUpdate, (ExpText * __this));
IL2CPP_REGISTER_METHOD(0x00987400, void, OnPoolSpawned, (ExpText * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (ExpText * __this));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (ExpText * __this));
}
