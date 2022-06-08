using namespace app;

namespace app::methods::frameworks::xboxLive::FileBasedStorageHandler {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FileBasedStorageHandler * __this, String * sourceKey));
IL2CPP_REGISTER_METHOD(0x00F69FC0, Task *, Write, (FileBasedStorageHandler * __this, String * key, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6A0E0, Task_1_System_Byte_ *, Read, (FileBasedStorageHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00F6A220, Task *, Clear, (FileBasedStorageHandler * __this, String * key));
}
