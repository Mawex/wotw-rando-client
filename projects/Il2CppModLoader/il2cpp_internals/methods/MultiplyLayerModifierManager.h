using namespace app;

namespace app::methods::MultiplyLayerModifierManager {
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (MultiplyLayerModifierManager * __this));
IL2CPP_REGISTER_METHOD(0x0087CFD0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0087D0B0, void, Awake, (MultiplyLayerModifierManager * __this));
IL2CPP_REGISTER_METHOD(0x0087D1C0, void, OnDestroy, (MultiplyLayerModifierManager * __this));
IL2CPP_REGISTER_METHOD(0x0087D2A0, void, OnUpdate, (MultiplyLayerModifierManager * __this, float delta));
IL2CPP_REGISTER_METHOD(0x0087D3F0, void, Register, (MultiplyLayerModifier * multiplyLayerModifier));
IL2CPP_REGISTER_METHOD(0x0087D4B0, void, Unregister, (MultiplyLayerModifier * multiplyLayerModifier));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MultiplyLayerModifierManager * __this));
IL2CPP_REGISTER_METHOD(0x0087D570, void, __cctor, (MethodInfo * method));
}
