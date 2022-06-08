#include <interception_macros.h>

namespace app::methods::CameraFilterPack_Edge_Sobel {
IL2CPP_REGISTER_METHOD(0x024666E0, Material *, get_material, (CameraFilterPack_Edge_Sobel * __this));
IL2CPP_REGISTER_METHOD(0x024668C0, void, Start, (CameraFilterPack_Edge_Sobel * __this));
IL2CPP_REGISTER_METHOD(0x02466A10, void, OnRenderImage, (CameraFilterPack_Edge_Sobel * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (CameraFilterPack_Edge_Sobel * __this));
IL2CPP_REGISTER_METHOD(0x02466D00, void, OnDisable, (CameraFilterPack_Edge_Sobel * __this));
IL2CPP_REGISTER_METHOD(0x0136E200, void, __ctor, (CameraFilterPack_Edge_Sobel * __this));
}
