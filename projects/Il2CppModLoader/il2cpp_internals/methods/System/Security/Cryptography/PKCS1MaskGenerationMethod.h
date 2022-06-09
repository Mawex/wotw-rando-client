#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::PKCS1MaskGenerationMethod {
    IL2CPP_REGISTER_METHOD(0x020DF880, void, __ctor, (app::PKCS1MaskGenerationMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_HashName, (app::PKCS1MaskGenerationMethod * this_ptr));
    IL2CPP_REGISTER_METHOD(0x020DF910, void, set_HashName, (app::PKCS1MaskGenerationMethod * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x020DF9B0, app::Byte__Array *, GenerateMask, (app::PKCS1MaskGenerationMethod * this_ptr, app::Byte__Array * rgb_seed, int32_t cb_return));
}
