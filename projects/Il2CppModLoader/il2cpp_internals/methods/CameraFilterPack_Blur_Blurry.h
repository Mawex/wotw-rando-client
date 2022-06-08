#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Blurry {
IL2CPP_REGISTER_METHOD(0x02764F40, Material *, get_material, (CameraFilterPack_Blur_Blurry * __this));
IL2CPP_REGISTER_METHOD(0x02765120, void, Start, (CameraFilterPack_Blur_Blurry * __this));
IL2CPP_REGISTER_METHOD(0x02765290, void, OnRenderImage, (CameraFilterPack_Blur_Blurry * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x027657A0, void, OnValidate, (CameraFilterPack_Blur_Blurry * __this));
IL2CPP_REGISTER_METHOD(0x02765830, void, Update, (CameraFilterPack_Blur_Blurry * __this));
IL2CPP_REGISTER_METHOD(0x027658D0, void, OnDisable, (CameraFilterPack_Blur_Blurry * __this));
IL2CPP_REGISTER_METHOD(0x027659B0, void, __ctor, (CameraFilterPack_Blur_Blurry * __this));
}
