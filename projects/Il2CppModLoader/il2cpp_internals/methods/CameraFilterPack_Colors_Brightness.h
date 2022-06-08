#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Colors_Brightness {
IL2CPP_REGISTER_METHOD(0x024E0100, Material *, get_material, (CameraFilterPack_Colors_Brightness * __this));
IL2CPP_REGISTER_METHOD(0x024E02E0, void, Start, (CameraFilterPack_Colors_Brightness * __this));
IL2CPP_REGISTER_METHOD(0x024E0450, void, OnRenderImage, (CameraFilterPack_Colors_Brightness * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024E05E0, void, OnValidate, (CameraFilterPack_Colors_Brightness * __this));
IL2CPP_REGISTER_METHOD(0x024E0670, void, Update, (CameraFilterPack_Colors_Brightness * __this));
IL2CPP_REGISTER_METHOD(0x024E0700, void, OnDisable, (CameraFilterPack_Colors_Brightness * __this));
IL2CPP_REGISTER_METHOD(0x024E07E0, void, __ctor, (CameraFilterPack_Colors_Brightness * __this));
}
