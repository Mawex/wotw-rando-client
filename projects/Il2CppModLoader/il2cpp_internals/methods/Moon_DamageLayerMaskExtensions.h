#include <interception_macros.h>

namespace app::methods::Moon::DamageLayerMaskExtensions {
IL2CPP_REGISTER_METHOD(0x00CD0C10, bool, Contains, (DamageLayerMask__Enum mask, DamageLayer__Enum tag));
IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, Contains, (DamageLayerMask__Enum mask, DamageLayerMask__Enum other));
IL2CPP_REGISTER_METHOD(0x00CD0C40, DamageLayerMask__Enum, DamageLayerToDamageMask, (DamageLayer__Enum layer));
}
