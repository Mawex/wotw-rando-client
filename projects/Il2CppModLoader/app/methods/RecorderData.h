#pragma once
#include <interception_macros.h>

namespace app::methods::RecorderData {
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_FlushedFramesCount, (app::RecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008EE620, app::RecorderFrame *, GetFrame, (app::RecorderData * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x008EE6F0, app::RecorderFrame *, get_LastFrame, (app::RecorderData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008EE7B0, void, LoadFromFile, (app::RecorderData * this_ptr, app::String * file_path))
    IL2CPP_REGISTER_METHOD(0x008EEAC0, void, LoadFrom, (app::RecorderData * this_ptr, app::BinaryReader * reader))
    IL2CPP_REGISTER_METHOD(0x008EF290, void, WriteSplitReplay, (app::RecorderData * this_ptr, app::String * folder_path))
    IL2CPP_REGISTER_METHOD(0x008EF720, void, LoadFromBytes, (app::RecorderData * this_ptr, app::Byte__Array * bytes))
    IL2CPP_REGISTER_METHOD(0x008EFA40, void, ctor, (app::RecorderData * this_ptr))
}
