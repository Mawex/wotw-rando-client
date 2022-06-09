#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::KeyMappings {
IL2CPP_REGISTER_METHOD(0x01DE8160, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01DE9550, int32_t, GetWindowsKeyCode, (app::Event * ev));
IL2CPP_REGISTER_METHOD(0x01DE9820, KeyCode__Enum, GetUnityKeyCode, (int32_t windows_key_code));
}
