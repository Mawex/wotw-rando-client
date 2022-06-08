#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::StringReference {
IL2CPP_REGISTER_METHOD(0x00240CB0, uint16_t, get_Item, (StringReference__Boxed * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00107C00, Char__Array *, get_Chars, (StringReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_StartIndex, (StringReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155B0, int32_t, get_Length, (StringReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DA0C0, void, __ctor, (StringReference__Boxed * __this, Char__Array * chars, int32_t startIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x00240CF0, String *, ToString, (StringReference__Boxed * __this));
}
