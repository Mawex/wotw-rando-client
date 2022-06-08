#include <interception_macros.h>

namespace app::methods::CameraFilterPack_EXTRA_SHOWFPS {
IL2CPP_REGISTER_METHOD(0x02462D60, Material *, get_material, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x02462F40, void, Start, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x024631F0, void, OnRenderImage, (CameraFilterPack_EXTRA_SHOWFPS * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024635C0, void, OnValidate, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x02463670, IEnumerator *, FPSX, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x024637C0, void, Update, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x02463950, void, OnDisable, (CameraFilterPack_EXTRA_SHOWFPS * __this));
IL2CPP_REGISTER_METHOD(0x02463A30, void, __ctor, (CameraFilterPack_EXTRA_SHOWFPS * __this));
}
