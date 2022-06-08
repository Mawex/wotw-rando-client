#include <interception_macros.h>

namespace app::methods::frameworks::xboxLive::XboxOneFileBasedStorageHandler {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (XboxOneFileBasedStorageHandler * __this, String * sourceKey));
IL2CPP_REGISTER_METHOD(0x00F6BE50, Task *, Write, (XboxOneFileBasedStorageHandler * __this, String * key, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6BF90, Task_1_System_Byte_ *, Read, (XboxOneFileBasedStorageHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00F6C230, Task *, Clear, (XboxOneFileBasedStorageHandler * __this, String * key));
}
