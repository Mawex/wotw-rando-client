#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::OperatorInfo {
    IL2CPP_REGISTER_METHOD(0x0133CEF0, void, ctor, (app::OperatorInfo * this_ptr, app::Nodes__Enum type, int32_t op, int32_t pri))
}
