#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::StringReference {
    IL2CPP_REGISTER_METHOD(0x00240CB0, uint16_t, get_Item, (app::StringReference__Boxed * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Char__Array *, get_Chars, (app::StringReference__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_StartIndex, (app::StringReference__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001155B0, int32_t, get_Length, (app::StringReference__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001DA0C0, void, __ctor, (app::StringReference__Boxed * this_ptr, app::Char__Array * chars, int32_t start_index, int32_t length));
    IL2CPP_REGISTER_METHOD(0x00240CF0, app::String *, ToString, (app::StringReference__Boxed * this_ptr));
}
