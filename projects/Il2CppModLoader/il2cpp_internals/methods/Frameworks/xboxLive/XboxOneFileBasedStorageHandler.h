#include <interception_macros.h>

namespace app::methods::frameworks::xboxLive::XboxOneFileBasedStorageHandler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XboxOneFileBasedStorageHandler * this_ptr, app::String * source_key));
    IL2CPP_REGISTER_METHOD(0x00F6BE50, app::Task *, Write, (app::XboxOneFileBasedStorageHandler * this_ptr, app::String * key, app::Byte__Array * data));
    IL2CPP_REGISTER_METHOD(0x00F6BF90, app::Task_1_System_Byte_ *, Read, (app::XboxOneFileBasedStorageHandler * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHOD(0x00F6C230, app::Task *, Clear, (app::XboxOneFileBasedStorageHandler * this_ptr, app::String * key));
}
