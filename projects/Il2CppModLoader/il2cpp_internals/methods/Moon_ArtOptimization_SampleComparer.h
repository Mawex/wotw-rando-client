#include <interception_macros.h>

namespace app::methods::Moon::ArtOptimization::SampleComparer {
IL2CPP_REGISTER_METHOD(0x013500B0, ComputeShader *, GetImageCompareShader, (SampleComparer * __this, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x01350650, void, __ctor, (SampleComparer * __this, TexturePoolEntity * master, TexturePoolEntity * sample));
IL2CPP_REGISTER_METHOD(0x01350A80, void, __ctor, (SampleComparer * __this, TexturePoolEntity * master, Texture * sample));
IL2CPP_REGISTER_METHOD(0x01350FE0, float, CalculateEnergy, (SampleComparer * __this));
IL2CPP_REGISTER_METHOD(0x01351120, bool, IsColors32Equal, (SampleComparer * __this, Color32 color1, Color32 color2));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, (SampleComparer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
