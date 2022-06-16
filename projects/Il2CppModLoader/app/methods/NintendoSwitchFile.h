#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NintendoSwitchFile {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Exists, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (app::String * file_path, app::Byte__Array * data, bool host, bool append, int32_t size))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteText, (app::String * path, app::String * text_to_write, bool host, bool append))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine, (app::String * path, app::String * line_to_write, bool host, bool append))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSwitchFile * this_ptr))
}
