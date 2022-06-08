using namespace app;

namespace app::methods::Frameworks::Shader_Globals {
IL2CPP_REGISTER_METHOD(0x01644DB0, void, SetFogGradient, (Color__Array * gradient));
IL2CPP_REGISTER_METHOD(0x01644E50, void, SetMultiplyFogGradient, (Color__Array * gradient));
IL2CPP_REGISTER_METHOD(0x01644EF0, void, set_FogGradientTexture, (Texture * value));
IL2CPP_REGISTER_METHOD(0x01645000, Texture *, get_FogGradientTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016450A0, void, set_FogGradientArray, (Color__Array * value));
IL2CPP_REGISTER_METHOD(0x01645230, void, set_MultiplyFogGradientTexture, (Texture * value));
IL2CPP_REGISTER_METHOD(0x01645340, Texture *, get_MultiplyFogGradientTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016453E0, void, set_MultiplyFogGradientArray, (Color__Array * value));
IL2CPP_REGISTER_METHOD(0x01645570, void, set_FogGradientRange, (float value));
IL2CPP_REGISTER_METHOD(0x01645670, Texture2D *, GetFogGradientTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01645880, Texture2D *, GetMultiplyFogGradientTexture, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01645A90, void, __cctor, (MethodInfo * method));
}
