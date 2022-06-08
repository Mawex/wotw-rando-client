#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Focus {
IL2CPP_REGISTER_METHOD(0x024D0E20, Material *, get_material, (CameraFilterPack_Blur_Focus * __this));
IL2CPP_REGISTER_METHOD(0x024D1000, void, Start, (CameraFilterPack_Blur_Focus * __this));
IL2CPP_REGISTER_METHOD(0x024D1180, void, OnRenderImage, (CameraFilterPack_Blur_Focus * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D1600, void, OnValidate, (CameraFilterPack_Blur_Focus * __this));
IL2CPP_REGISTER_METHOD(0x024D16A0, void, Update, (CameraFilterPack_Blur_Focus * __this));
IL2CPP_REGISTER_METHOD(0x024D1740, void, OnDisable, (CameraFilterPack_Blur_Focus * __this));
IL2CPP_REGISTER_METHOD(0x024D1820, void, __ctor, (CameraFilterPack_Blur_Focus * __this));
}
