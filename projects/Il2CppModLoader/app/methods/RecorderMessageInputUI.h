#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RecorderMessageInputUI {
    IL2CPP_REGISTER_METHOD(0x008F2740, void, Start, (app::RecorderMessageInputUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F2750, void, OnDestroy, (app::RecorderMessageInputUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F2760, void, OnGUI, (app::RecorderMessageInputUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F2B90, void, Enter, (app::RecorderMessageInputUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F2D30, void, Exit, (app::RecorderMessageInputUI * this_ptr, app::RecorderMessageInputUI_ExitType__Enum exit_type))
    IL2CPP_REGISTER_METHOD(0x008F2EE0, void, HandleExitEvents, (app::RecorderMessageInputUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F3040, void, ctor, (app::RecorderMessageInputUI * this_ptr))
}
