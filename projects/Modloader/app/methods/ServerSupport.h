#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerSupport {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ServerSupport * this_ptr, app::Type* type))
}
