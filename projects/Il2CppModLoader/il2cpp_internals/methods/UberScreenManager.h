#include <interception_macros.h>

namespace app::methods::UberScreenManager {
IL2CPP_REGISTER_METHOD(0x018F8970, Vector4, GetScreen, (UberScreenMode__Enum mode, float tweak));
IL2CPP_REGISTER_METHOD(0x018F8B00, Vector4, GetScreenMask, (UberScreenMode__Enum mode));
}
