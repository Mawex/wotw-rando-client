#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FrameInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FrameInfo * this_ptr))
}
