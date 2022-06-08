using namespace app;

namespace app::methods::Colorful::BilateralGaussianBlur {
IL2CPP_REGISTER_METHOD(0x0303E420, void, Start, (BilateralGaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x0303E550, void, OnRenderImage, (BilateralGaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303E8B0, void, OnePassBlur, (BilateralGaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303ECE0, void, MultiPassBlur, (BilateralGaussianBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0303F420, String *, GetShaderName, (BilateralGaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x0303F4A0, void, __ctor, (BilateralGaussianBlur * __this));
}
