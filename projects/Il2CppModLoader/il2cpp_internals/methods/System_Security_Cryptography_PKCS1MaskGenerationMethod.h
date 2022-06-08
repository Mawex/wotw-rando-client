#include <interception_macros.h>

namespace app::methods::System::Security::Cryptography::PKCS1MaskGenerationMethod {
IL2CPP_REGISTER_METHOD(0x020DF880, void, __ctor, (PKCS1MaskGenerationMethod * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_HashName, (PKCS1MaskGenerationMethod * __this));
IL2CPP_REGISTER_METHOD(0x020DF910, void, set_HashName, (PKCS1MaskGenerationMethod * __this, String * value));
IL2CPP_REGISTER_METHOD(0x020DF9B0, Byte__Array *, GenerateMask, (PKCS1MaskGenerationMethod * __this, Byte__Array * rgbSeed, int32_t cbReturn));
}
