#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::SHA1Internal {
IL2CPP_REGISTER_METHOD(0x028F4BC0, void, __ctor, (SHA1Internal * __this));
IL2CPP_REGISTER_METHOD(0x028F4C80, void, HashCore, (SHA1Internal * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F4DA0, Byte__Array *, HashFinal, (SHA1Internal * __this));
IL2CPP_REGISTER_METHOD(0x028F4F00, void, Initialize, (SHA1Internal * __this));
IL2CPP_REGISTER_METHOD(0x028F5000, void, ProcessBlock, (SHA1Internal * __this, Byte__Array * inputBuffer, uint32_t inputOffset));
IL2CPP_REGISTER_METHOD(0x028F58E0, void, InitialiseBuff, (UInt32__Array * buff, Byte__Array * input, uint32_t inputOffset));
IL2CPP_REGISTER_METHOD(0x028F65E0, void, FillBuff, (UInt32__Array * buff));
IL2CPP_REGISTER_METHOD(0x028F6BF0, void, ProcessFinalBlock, (SHA1Internal * __this, Byte__Array * inputBuffer, int32_t inputOffset, int32_t inputCount));
IL2CPP_REGISTER_METHOD(0x028F6E10, void, AddLength, (SHA1Internal * __this, uint64_t length, Byte__Array * buffer, int32_t position));
}
