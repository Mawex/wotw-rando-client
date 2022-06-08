#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Radial {
IL2CPP_REGISTER_METHOD(0x024D3600, Material *, get_material, (CameraFilterPack_Blur_Radial * __this));
IL2CPP_REGISTER_METHOD(0x024D37E0, void, Start, (CameraFilterPack_Blur_Radial * __this));
IL2CPP_REGISTER_METHOD(0x024D3960, void, OnRenderImage, (CameraFilterPack_Blur_Radial * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D3D30, void, OnValidate, (CameraFilterPack_Blur_Radial * __this));
IL2CPP_REGISTER_METHOD(0x024D3DD0, void, Update, (CameraFilterPack_Blur_Radial * __this));
IL2CPP_REGISTER_METHOD(0x024D3E70, void, OnDisable, (CameraFilterPack_Blur_Radial * __this));
IL2CPP_REGISTER_METHOD(0x024D3F50, void, __ctor, (CameraFilterPack_Blur_Radial * __this));
}
