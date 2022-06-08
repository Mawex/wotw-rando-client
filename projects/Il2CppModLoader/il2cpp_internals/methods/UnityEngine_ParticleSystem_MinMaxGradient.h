using namespace app;

namespace app::methods::UnityEngine::ParticleSystem_MinMaxGradient {
IL2CPP_REGISTER_METHOD(0x00248760, void, __ctor, (ParticleSystem_MinMaxGradient__Boxed * __this, Color color));
IL2CPP_REGISTER_METHOD(0x001EBC90, ParticleSystemGradientMode__Enum, get_mode, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FBBA0, Gradient *, get_gradientMax, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_gradientMax, (ParticleSystem_MinMaxGradient__Boxed * __this, Gradient * value));
IL2CPP_REGISTER_METHOD(0x001FBB90, Gradient *, get_gradientMin, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_gradientMin, (ParticleSystem_MinMaxGradient__Boxed * __this, Gradient * value));
IL2CPP_REGISTER_METHOD(0x00248780, Color, get_colorMax, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00248790, void, set_colorMax, (ParticleSystem_MinMaxGradient__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001D9AE0, Color, get_colorMin, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D9AF0, void, set_colorMin, (ParticleSystem_MinMaxGradient__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x00248780, Color, get_color, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00248790, void, set_color, (ParticleSystem_MinMaxGradient__Boxed * __this, Color value));
IL2CPP_REGISTER_METHOD(0x001FBBA0, Gradient *, get_gradient, (ParticleSystem_MinMaxGradient__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010D3B0, void, set_gradient, (ParticleSystem_MinMaxGradient__Boxed * __this, Gradient * value));
IL2CPP_REGISTER_METHOD(0x03135430, ParticleSystem_MinMaxGradient, operator_, (Color color));
}
