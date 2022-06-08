#include <interception_macros.h>

namespace app::methods::GodRayModifier {
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_Renderered, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_Renderered, (GodRayModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00800860, Renderer *, GetRenderer, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00800870, void, UberShaderEditorUpdate, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x008009A0, void, OnValidate, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x008009C0, void, OnEnable, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00800AA0, void, OnDisable, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00800B80, void, __ctor, (GodRayModifier * __this));
IL2CPP_REGISTER_METHOD(0x00800BE0, void, __cctor, ());
}
