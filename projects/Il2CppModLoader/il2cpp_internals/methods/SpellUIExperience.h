#include <interception_macros.h>

namespace app::methods::SpellUIExperience {
IL2CPP_REGISTER_METHOD(0x0094D2D0, void, Awake, (SpellUIExperience * __this));
IL2CPP_REGISTER_METHOD(0x0094D3D0, void, FixedUpdate, (SpellUIExperience * __this));
IL2CPP_REGISTER_METHOD(0x0094D540, bool, CanSpend, (SpellUIExperience * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094D550, bool, Spend, (SpellUIExperience * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (SpellUIExperience * __this));
}
