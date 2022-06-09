#include <interception_macros.h>

namespace app::methods::System_Text::EncodingHelper {
IL2CPP_REGISTER_METHOD(0x02455380, Encoding *, get_UTF8Unmarked, ());
IL2CPP_REGISTER_METHOD(0x024556E0, String *, InternalCodePage, (app::int32_t * code_page));
IL2CPP_REGISTER_METHOD(0x024556F0, Encoding *, GetDefaultEncoding, ());
IL2CPP_REGISTER_METHOD(0x02455850, Object *, InvokeI18N, (app::String * name, app::Object__Array * args));
IL2CPP_REGISTER_METHOD(0x02455DB0, void, __cctor, ());
}
