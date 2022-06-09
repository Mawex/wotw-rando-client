#include <interception_macros.h>

namespace app::methods::ScenesToSkip {
    IL2CPP_REGISTER_METHOD(0x010683F0, void, __ctor_1, (app::ScenesToSkip * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01068590, void, __ctor_2, (app::ScenesToSkip * this_ptr, app::String* input_file_path));
    IL2CPP_REGISTER_METHOD(0x01068720, bool, ShouldSkipScene, (app::ScenesToSkip * this_ptr, app::String* scene));
    IL2CPP_REGISTER_METHOD(0x010688A0, void, ParseInuptFile, (app::ScenesToSkip * this_ptr, app::String* input_file_path));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
} // namespace app::methods::ScenesToSkip
