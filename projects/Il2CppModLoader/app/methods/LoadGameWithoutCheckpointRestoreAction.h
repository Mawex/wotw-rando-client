#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadGameWithoutCheckpointRestoreAction {
    IL2CPP_REGISTER_METHOD(0x00FB4940, void, Perform, (app::LoadGameWithoutCheckpointRestoreAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadGameWithoutCheckpointRestoreAction * this_ptr))
}
