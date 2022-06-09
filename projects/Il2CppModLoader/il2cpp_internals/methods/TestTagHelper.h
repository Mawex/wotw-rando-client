#include <interception_macros.h>

namespace app::methods::TestTagHelper {
IL2CPP_REGISTER_METHOD(0x010DFDC0, String *, TagString, (app::String * input, app::TestTagHelper_TestTypeTag__Enum tag, bool break_line));
IL2CPP_REGISTER_METHOD(0x010E0430, String *, TagOpen, (app::TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x010E04F0, String *, TagClose, (app::TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x010E05B0, String *, ExtractText_1, (app::String * input, app::TestTagHelper_TestTypeTag__Enum * tag));
IL2CPP_REGISTER_METHOD(0x010E0800, String *, ExtractText_2, (app::String * input, app::TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TestTagHelper * this_ptr));
}
