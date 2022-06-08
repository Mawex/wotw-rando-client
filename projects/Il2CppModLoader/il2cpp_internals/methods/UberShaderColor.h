using namespace app;

namespace app::methods::UberShaderColor {
IL2CPP_REGISTER_METHOD(0x0190CEA0, void, BindProperties, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Color, get_Color, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x0190CF10, void, set_Color, (UberShaderColor * __this, Color value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_R, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_R, (UberShaderColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_G, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F00, void, set_G, (UberShaderColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_b, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F20, void, set_b, (UberShaderColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_A, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F40, void, set_A, (UberShaderColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x0190CF50, void, __ctor, (UberShaderColor * __this));
IL2CPP_REGISTER_METHOD(0x0190CF70, void, __ctor, (UberShaderColor * __this, Color defaultColor));
}
