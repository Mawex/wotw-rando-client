#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography::SHA512 {
    IL2CPP_REGISTER_METHOD(0x01E0E3C0, void, __ctor, (app::SHA512 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E0E3D0, app::SHA512 *, Create_1, ());
    IL2CPP_REGISTER_METHOD(0x01E0E510, app::SHA512 *, Create_2, (app::String * hash_name));
}
