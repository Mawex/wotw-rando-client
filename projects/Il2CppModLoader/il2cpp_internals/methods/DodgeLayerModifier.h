#include <interception_macros.h>

namespace app::methods::DodgeLayerModifier {
IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (DodgeLayerModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00B9B650, void, SetProperties, (DodgeLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (DodgeLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (DodgeLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9B780, void, Update, (DodgeLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9B7C0, void, UpdateWorldRotation, (DodgeLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x00B9B9B0, void, __ctor, (DodgeLayerModifier * __this));
}
