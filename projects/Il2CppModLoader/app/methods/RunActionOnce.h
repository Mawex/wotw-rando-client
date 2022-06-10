#pragma once
#include <interception_macros.h>

namespace app::methods::RunActionOnce {
    IL2CPP_REGISTER_METHOD(0x01372F40, void, Perform, (app::RunActionOnce * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01372F80, void, Serialize, (app::RunActionOnce * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x01372FB0, app::String *, GetNiceName, (app::RunActionOnce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RunActionOnce * this_ptr))
}
