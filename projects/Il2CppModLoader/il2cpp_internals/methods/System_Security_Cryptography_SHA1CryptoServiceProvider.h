#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::SHA1CryptoServiceProvider {
IL2CPP_REGISTER_METHOD(0x028F4690, void, __ctor, (SHA1CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028F4880, void, Finalize, (SHA1CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x020DBBD0, void, Dispose, (SHA1CryptoServiceProvider * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x028F4900, void, HashCore, (SHA1CryptoServiceProvider * __this, Byte__Array * rgb, int32_t ibStart, int32_t cbSize));
IL2CPP_REGISTER_METHOD(0x028F4A30, Byte__Array *, HashFinal, (SHA1CryptoServiceProvider * __this));
IL2CPP_REGISTER_METHOD(0x028F4BA0, void, Initialize, (SHA1CryptoServiceProvider * __this));
}
