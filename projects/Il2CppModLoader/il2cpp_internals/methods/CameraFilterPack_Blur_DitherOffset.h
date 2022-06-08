#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_DitherOffset {
IL2CPP_REGISTER_METHOD(0x027659D0, Material *, get_material, (CameraFilterPack_Blur_DitherOffset * __this));
IL2CPP_REGISTER_METHOD(0x02765BB0, void, Start, (CameraFilterPack_Blur_DitherOffset * __this));
IL2CPP_REGISTER_METHOD(0x02765D40, void, OnRenderImage, (CameraFilterPack_Blur_DitherOffset * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x02766150, void, OnValidate, (CameraFilterPack_Blur_DitherOffset * __this));
IL2CPP_REGISTER_METHOD(0x02766200, void, Update, (CameraFilterPack_Blur_DitherOffset * __this));
IL2CPP_REGISTER_METHOD(0x027662B0, void, OnDisable, (CameraFilterPack_Blur_DitherOffset * __this));
IL2CPP_REGISTER_METHOD(0x024D35E0, void, __ctor, (CameraFilterPack_Blur_DitherOffset * __this));
}
