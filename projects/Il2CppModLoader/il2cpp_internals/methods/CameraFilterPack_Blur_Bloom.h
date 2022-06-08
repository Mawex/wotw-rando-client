#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Bloom {
IL2CPP_REGISTER_METHOD(0x02763B70, Material *, get_material, (CameraFilterPack_Blur_Bloom * __this));
IL2CPP_REGISTER_METHOD(0x02763D50, void, Start, (CameraFilterPack_Blur_Bloom * __this));
IL2CPP_REGISTER_METHOD(0x02763EC0, void, OnRenderImage, (CameraFilterPack_Blur_Bloom * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x02764290, void, OnValidate, (CameraFilterPack_Blur_Bloom * __this));
IL2CPP_REGISTER_METHOD(0x02764320, void, Update, (CameraFilterPack_Blur_Bloom * __this));
IL2CPP_REGISTER_METHOD(0x027643B0, void, OnDisable, (CameraFilterPack_Blur_Bloom * __this));
IL2CPP_REGISTER_METHOD(0x02764490, void, __ctor, (CameraFilterPack_Blur_Bloom * __this));
}
