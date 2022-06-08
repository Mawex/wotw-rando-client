#include <interception_macros.h>

namespace app::methods::LightInfluence {
IL2CPP_REGISTER_METHOD(0x0114D0B0, void, __ctor, (LightInfluence * __this, LightPriority_Layer__Enum layer));
IL2CPP_REGISTER_METHOD(0x0114D0C0, void, CopyTo, (LightInfluence * __this, LightInfluence * * destination));
IL2CPP_REGISTER_METHOD(0x0114D0E0, void, Lerp, (LightInfluence * from, LightInfluence * to, LightInfluence * * destination, float t));
}
