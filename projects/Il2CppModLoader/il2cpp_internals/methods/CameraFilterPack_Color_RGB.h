#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Color_RGB {
IL2CPP_REGISTER_METHOD(0x024DB110, Material *, get_material, (CameraFilterPack_Color_RGB * __this));
IL2CPP_REGISTER_METHOD(0x024DB2F0, void, Start, (CameraFilterPack_Color_RGB * __this));
IL2CPP_REGISTER_METHOD(0x024DB460, void, OnRenderImage, (CameraFilterPack_Color_RGB * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024DB7D0, void, OnValidate, (CameraFilterPack_Color_RGB * __this));
IL2CPP_REGISTER_METHOD(0x024DB860, void, Update, (CameraFilterPack_Color_RGB * __this));
IL2CPP_REGISTER_METHOD(0x024DB8F0, void, OnDisable, (CameraFilterPack_Color_RGB * __this));
IL2CPP_REGISTER_METHOD(0x024DB9D0, void, __ctor, (CameraFilterPack_Color_RGB * __this));
}
