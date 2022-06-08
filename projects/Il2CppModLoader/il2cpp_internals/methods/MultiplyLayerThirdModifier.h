#include <interception_macros.h>

namespace app::methods::MultiplyLayerThirdModifier {
IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (MultiplyLayerThirdModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x0087D6C0, void, SetProperties, (MultiplyLayerThirdModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (MultiplyLayerThirdModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (MultiplyLayerThirdModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087D7F0, void, Update, (MultiplyLayerThirdModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087D830, void, UpdateWorldRotation, (MultiplyLayerThirdModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087DA20, void, __ctor, (MultiplyLayerThirdModifier * __this));
}
