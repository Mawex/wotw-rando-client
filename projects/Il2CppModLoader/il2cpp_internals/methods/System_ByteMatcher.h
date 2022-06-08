#include <interception_macros.h>

namespace app::methods::System::ByteMatcher {
IL2CPP_REGISTER_METHOD(0x0229F8E0, void, AddMapping, (ByteMatcher * __this, TermInfoStrings__Enum key, Byte__Array * val));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Sort, (ByteMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0229FA40, bool, StartsWith, (ByteMatcher * __this, int32_t c));
IL2CPP_REGISTER_METHOD(0x0229FB00, TermInfoStrings__Enum, Match, (ByteMatcher * __this, Char__Array * buffer, int32_t offset, int32_t length, int32_t * used));
IL2CPP_REGISTER_METHOD(0x0229FE40, void, __ctor, (ByteMatcher * __this));
}
