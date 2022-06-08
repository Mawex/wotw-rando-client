#include <interception_macros.h>

namespace app::methods::SpellUISeeds {
IL2CPP_REGISTER_METHOD(0x0094F260, void, FixedUpdate, (SpellUISeeds * __this));
IL2CPP_REGISTER_METHOD(0x0094D540, bool, CanSpend, (SpellUISeeds * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094F410, bool, Spend, (SpellUISeeds * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x0094D720, void, __ctor, (SpellUISeeds * __this));
}
