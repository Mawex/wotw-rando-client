#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::KeyMappings {
    IL2CPP_REGISTER_METHOD(0x01DE8160, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01DE9550, int32_t, GetWindowsKeyCode, (app::Event * ev))
    IL2CPP_REGISTER_METHOD(0x01DE9820, app::KeyCode__Enum, GetUnityKeyCode, (int32_t windows_key_code))
}
