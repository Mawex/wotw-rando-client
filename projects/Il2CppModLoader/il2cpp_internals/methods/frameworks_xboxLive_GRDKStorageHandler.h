#include <interception_macros.h>

namespace app::methods::frameworks_xboxLive::GRDKStorageHandler {
IL2CPP_REGISTER_METHOD(0x00F6A350, Task *, Write, (app::GRDKStorageHandler * this_ptr, app::String * key, app::Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6A490, Task_1_System_Byte_ *, Read, (app::GRDKStorageHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x00F6A5E0, Task *, Clear, (app::GRDKStorageHandler * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::GRDKStorageHandler * this_ptr));
}
