#include <interception_macros.h>

namespace app::methods::TintModifier {
IL2CPP_REGISTER_METHOD(0x00AF7180, void, ApplyMultipliers, (TintModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00AF71C0, void, SetProperties, (TintModifier * __this));
IL2CPP_REGISTER_METHOD(0x00AF7280, void, __ctor, (TintModifier * __this));
}
