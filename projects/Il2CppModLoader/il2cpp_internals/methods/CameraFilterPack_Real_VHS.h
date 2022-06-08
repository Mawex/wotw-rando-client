#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Real_VHS {
IL2CPP_REGISTER_METHOD(0x0248A920, Material *, get_material, (CameraFilterPack_Real_VHS * __this));
IL2CPP_REGISTER_METHOD(0x0248AB00, void, Start, (CameraFilterPack_Real_VHS * __this));
IL2CPP_REGISTER_METHOD(0x0248ACB0, Texture2D *, GetRTPixels, (Texture2D * t, RenderTexture * rt, int32_t sx, int32_t sy));
IL2CPP_REGISTER_METHOD(0x0248AE40, void, OnRenderImage, (CameraFilterPack_Real_VHS * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (CameraFilterPack_Real_VHS * __this));
IL2CPP_REGISTER_METHOD(0x0248B1C0, void, OnDisable, (CameraFilterPack_Real_VHS * __this));
IL2CPP_REGISTER_METHOD(0x0248B2A0, void, __ctor, (CameraFilterPack_Real_VHS * __this));
}
