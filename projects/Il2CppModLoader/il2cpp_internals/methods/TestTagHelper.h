using namespace app;

namespace app::methods::TestTagHelper {
IL2CPP_REGISTER_METHOD(0x010DFDC0, String *, TagString, (String * input, TestTagHelper_TestTypeTag__Enum tag, bool breakLine));
IL2CPP_REGISTER_METHOD(0x010E0430, String *, TagOpen, (TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x010E04F0, String *, TagClose, (TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x010E05B0, String *, ExtractText, (String * input, TestTagHelper_TestTypeTag__Enum * tag));
IL2CPP_REGISTER_METHOD(0x010E0800, String *, ExtractText, (String * input, TestTagHelper_TestTypeTag__Enum tag));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TestTagHelper * __this));
}
