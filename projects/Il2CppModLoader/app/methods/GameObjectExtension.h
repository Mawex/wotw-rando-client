#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GameObjectExtension {
    IL2CPP_REGISTER_METHOD(0x02553460, void, SetLayer, (app::GameObject * go, int32_t new_layer))
}
