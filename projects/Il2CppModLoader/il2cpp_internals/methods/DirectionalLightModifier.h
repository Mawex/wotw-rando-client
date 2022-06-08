#include <interception_macros.h>

namespace app::methods::DirectionalLightModifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (DirectionalLightModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00B93F80, void, SetProperties, (DirectionalLightModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B941D0, void, __ctor, (DirectionalLightModifier * __this));
}
