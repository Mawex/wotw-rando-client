#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_GaussianBlur {
IL2CPP_REGISTER_METHOD(0x024D1840, Material *, get_material, (CameraFilterPack_Blur_GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x024D1A20, void, Start, (CameraFilterPack_Blur_GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x024D1B90, void, OnRenderImage, (CameraFilterPack_Blur_GaussianBlur * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D1F30, void, OnValidate, (CameraFilterPack_Blur_GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x024D1FC0, void, Update, (CameraFilterPack_Blur_GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x024D2050, void, OnDisable, (CameraFilterPack_Blur_GaussianBlur * __this));
IL2CPP_REGISTER_METHOD(0x024D2130, void, __ctor, (CameraFilterPack_Blur_GaussianBlur * __this));
}
