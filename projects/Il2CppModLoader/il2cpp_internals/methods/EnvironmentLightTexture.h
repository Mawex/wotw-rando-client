using namespace app;

namespace app::methods::EnvironmentLightTexture {
IL2CPP_REGISTER_METHOD(0x00CA7DB0, Vector2, Rotate, (Vector2 v, float degrees));
IL2CPP_REGISTER_METHOD(0x00CA7EB0, void, BindToMaterial, (EnvironmentLightTexture * __this, Material * bindMaterial, int32_t light, float randomOffset, int32_t num));
IL2CPP_REGISTER_METHOD(0x00CA8430, Vector4, GetTurbVec, (EnvironmentLightTexture * __this, float randomOffset));
IL2CPP_REGISTER_METHOD(0x00CA8450, Vector4, GetTurbScaleVec, (EnvironmentLightTexture * __this));
IL2CPP_REGISTER_METHOD(0x00CA8470, void, __ctor, (EnvironmentLightTexture * __this));
}
