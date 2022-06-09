#include <interception_macros.h>

namespace app::methods::frameworks_xboxLive::FileBasedStorageHandler {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::FileBasedStorageHandler * this_ptr, app::String * source_key));
IL2CPP_REGISTER_METHOD(0x00F69FC0, Task *, Write, (app::FileBasedStorageHandler * this_ptr, app::String * key, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6A0E0, Task_1_System_Byte_ *, Read, (app::FileBasedStorageHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x00F6A220, Task *, Clear, (app::FileBasedStorageHandler * this_ptr, app::String * key));
}
