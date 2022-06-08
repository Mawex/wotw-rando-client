#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Movie {
IL2CPP_REGISTER_METHOD(0x024D2150, Material *, get_material, (CameraFilterPack_Blur_Movie * __this));
IL2CPP_REGISTER_METHOD(0x024D2330, void, Start, (CameraFilterPack_Blur_Movie * __this));
IL2CPP_REGISTER_METHOD(0x024D24A0, void, OnRenderImage, (CameraFilterPack_Blur_Movie * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D29D0, void, OnValidate, (CameraFilterPack_Blur_Movie * __this));
IL2CPP_REGISTER_METHOD(0x024D2A60, void, Update, (CameraFilterPack_Blur_Movie * __this));
IL2CPP_REGISTER_METHOD(0x024D2B10, void, OnDisable, (CameraFilterPack_Blur_Movie * __this));
IL2CPP_REGISTER_METHOD(0x024D2BF0, void, __ctor, (CameraFilterPack_Blur_Movie * __this));
}
