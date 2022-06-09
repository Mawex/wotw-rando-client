#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::Rijndael {
    IL2CPP_REGISTER_METHOD(0x028EFAC0, void, __ctor, (app::Rijndael * this_ptr));
    IL2CPP_REGISTER_METHOD(0x028EFBA0, app::Rijndael *, Create_1, ());
    IL2CPP_REGISTER_METHOD(0x028EFCE0, app::Rijndael *, Create_2, (app::String * alg_name));
    IL2CPP_REGISTER_METHOD(0x028EFDC0, void, __cctor, ());
}
