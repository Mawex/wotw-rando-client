using namespace app;

namespace app::methods::MaskModifier {
IL2CPP_REGISTER_METHOD(0x00A10DA0, void, Randomize, (MaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A10DB0, void, ApplyMultipliers, (MaskModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (MaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A11160, void, SetProperties, (MaskModifier * __this));
IL2CPP_REGISTER_METHOD(0x00A11250, void, __ctor, (MaskModifier * __this));
}
