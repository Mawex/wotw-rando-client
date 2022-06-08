#include <interception_macros.h>

namespace app::methods::LightSource {
IL2CPP_REGISTER_METHOD(0x0114F2A0, bool, get_AnyExist, ());
IL2CPP_REGISTER_METHOD(0x0114F350, void, OnEnable, (LightSource * __this));
IL2CPP_REGISTER_METHOD(0x0114F410, void, OnDisable, (LightSource * __this));
IL2CPP_REGISTER_METHOD(0x0114F4D0, bool, TestPosition, (Vector2 position, float padding));
IL2CPP_REGISTER_METHOD(0x0072D940, void, __ctor, (LightSource * __this));
IL2CPP_REGISTER_METHOD(0x0114F6C0, void, __cctor, ());
}
