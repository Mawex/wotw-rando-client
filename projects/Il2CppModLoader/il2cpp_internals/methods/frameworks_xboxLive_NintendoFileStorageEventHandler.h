#include <interception_macros.h>

namespace app::methods::frameworks::xboxLive::NintendoFileStorageEventHandler {
IL2CPP_REGISTER_METHOD(0x00F6A710, Object *, ByteArrayToData, (NintendoFileStorageEventHandler * __this, Byte__Array * bytes));
IL2CPP_REGISTER_METHOD(0x00F6ABA0, Byte__Array *, DataToByteArray, (NintendoFileStorageEventHandler * __this, Object * data));
IL2CPP_REGISTER_METHOD(0x00F6AEA0, void, __ctor, (NintendoFileStorageEventHandler * __this, String * sourceKey));
IL2CPP_REGISTER_METHOD(0x00F6B030, Task *, Write, (NintendoFileStorageEventHandler * __this, String * key, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00F6B1B0, Task_1_System_Byte_ *, Read, (NintendoFileStorageEventHandler * __this, String * key));
IL2CPP_REGISTER_METHOD(0x00F6B260, Task *, Clear, (NintendoFileStorageEventHandler * __this, String * key));
}
