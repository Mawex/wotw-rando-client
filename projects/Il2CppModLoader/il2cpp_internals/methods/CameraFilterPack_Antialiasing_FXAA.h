#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Antialiasing_FXAA {
IL2CPP_REGISTER_METHOD(0x0273F360, Material *, get_material, (CameraFilterPack_Antialiasing_FXAA * __this));
IL2CPP_REGISTER_METHOD(0x0273F540, void, Start, (CameraFilterPack_Antialiasing_FXAA * __this));
IL2CPP_REGISTER_METHOD(0x0273F690, void, OnRenderImage, (CameraFilterPack_Antialiasing_FXAA * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (CameraFilterPack_Antialiasing_FXAA * __this));
IL2CPP_REGISTER_METHOD(0x0273F9F0, void, OnDisable, (CameraFilterPack_Antialiasing_FXAA * __this));
IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (CameraFilterPack_Antialiasing_FXAA * __this));
}
