#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ByteMatcher {
    IL2CPP_REGISTER_METHOD(0x0229F8E0, void, AddMapping, (app::ByteMatcher * this_ptr, app::TermInfoStrings__Enum key, app::Byte__Array * val))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Sort, (app::ByteMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229FA40, bool, StartsWith, (app::ByteMatcher * this_ptr, int32_t c))
    IL2CPP_REGISTER_METHOD(0x0229FB00, app::TermInfoStrings__Enum, Match, (app::ByteMatcher * this_ptr, app::Char__Array * buffer, int32_t offset, int32_t length, int32_t * used))
    IL2CPP_REGISTER_METHOD(0x0229FE40, void, ctor, (app::ByteMatcher * this_ptr))
}
