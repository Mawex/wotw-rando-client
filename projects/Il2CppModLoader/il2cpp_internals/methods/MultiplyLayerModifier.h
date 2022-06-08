using namespace app;

namespace app::methods::MultiplyLayerModifier {
IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (MultiplyLayerModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x0087C710, void, SetProperties, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C820, void, OnEnable, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087C970, void, OnDisable, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087CAC0, void, UpdateModifier, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087CB00, void, UpdateWorldRotation, (MultiplyLayerModifier * __this));
IL2CPP_REGISTER_METHOD(0x0087CCF0, void, __ctor, (MultiplyLayerModifier * __this));
}
