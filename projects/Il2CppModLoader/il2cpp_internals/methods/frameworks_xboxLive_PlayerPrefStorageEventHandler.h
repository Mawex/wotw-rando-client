#include <interception_macros.h>

namespace app::methods::frameworks::xboxLive::PlayerPrefStorageEventHandler {
IL2CPP_REGISTER_METHOD(0x00F6B820, Task *, Write, (PlayerPrefStorageEventHandler * __this, String * key, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6BA20, Task_1_System_Byte_ *, Read, (PlayerPrefStorageEventHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00F6BB50, Task *, Clear, (PlayerPrefStorageEventHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayerPrefStorageEventHandler * __this));
}
