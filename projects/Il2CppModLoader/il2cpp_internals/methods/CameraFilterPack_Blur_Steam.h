#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Steam {
IL2CPP_REGISTER_METHOD(0x024D5290, Material *, get_material, (CameraFilterPack_Blur_Steam * __this));
IL2CPP_REGISTER_METHOD(0x024D5470, void, Start, (CameraFilterPack_Blur_Steam * __this));
IL2CPP_REGISTER_METHOD(0x024D55E0, void, OnRenderImage, (CameraFilterPack_Blur_Steam * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D59B0, void, OnValidate, (CameraFilterPack_Blur_Steam * __this));
IL2CPP_REGISTER_METHOD(0x024D5A40, void, Update, (CameraFilterPack_Blur_Steam * __this));
IL2CPP_REGISTER_METHOD(0x024D5AD0, void, OnDisable, (CameraFilterPack_Blur_Steam * __this));
IL2CPP_REGISTER_METHOD(0x024D5BB0, void, __ctor, (CameraFilterPack_Blur_Steam * __this));
}
