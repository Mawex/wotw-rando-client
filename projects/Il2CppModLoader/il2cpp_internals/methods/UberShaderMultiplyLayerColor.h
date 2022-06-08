using namespace app;

namespace app::methods::UberShaderMultiplyLayerColor {
IL2CPP_REGISTER_METHOD(0x01914590, float, CalculateColorComponentValue, (UberShaderMultiplyLayerColor * __this, float v));
IL2CPP_REGISTER_METHOD(0x019145D0, Color, CalculateFinalMultiplyColor, (UberShaderMultiplyLayerColor * __this, Color color));
IL2CPP_REGISTER_METHOD(0x019146A0, void, BindProperties, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, Color, get_Color, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x01914780, void, set_Color, (UberShaderMultiplyLayerColor * __this, Color value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_R, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_R, (UberShaderMultiplyLayerColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_G, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F00, void, set_G, (UberShaderMultiplyLayerColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_B, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F20, void, set_B, (UberShaderMultiplyLayerColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_A, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x01289F40, void, set_A, (UberShaderMultiplyLayerColor * __this, float value));
IL2CPP_REGISTER_METHOD(0x01914860, void, __ctor, (UberShaderMultiplyLayerColor * __this));
IL2CPP_REGISTER_METHOD(0x01914870, void, __ctor, (UberShaderMultiplyLayerColor * __this, Color defaultColor));
}
