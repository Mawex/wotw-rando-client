#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostReplayMetaData {
    IL2CPP_REGISTER_METHOD(0x007E4D50, bool, get_ReadDataFromMemory, (app::GhostReplayMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E4DF0, app::String *, get_MetaDataFullPath, (app::GhostReplayMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E4E80, app::String *, get_GhostReplayFullPath, (app::GhostReplayMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::GhostReplayMetaData * this_ptr))
}
