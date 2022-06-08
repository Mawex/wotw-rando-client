using namespace app;

namespace app::methods::CameraFilterPack_Blur_Noise {
IL2CPP_REGISTER_METHOD(0x024D2C20, Material *, get_material, (CameraFilterPack_Blur_Noise * __this));
IL2CPP_REGISTER_METHOD(0x024D2E00, void, Start, (CameraFilterPack_Blur_Noise * __this));
IL2CPP_REGISTER_METHOD(0x024D2F90, void, OnRenderImage, (CameraFilterPack_Blur_Noise * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x024D33A0, void, OnValidate, (CameraFilterPack_Blur_Noise * __this));
IL2CPP_REGISTER_METHOD(0x024D3450, void, Update, (CameraFilterPack_Blur_Noise * __this));
IL2CPP_REGISTER_METHOD(0x024D3500, void, OnDisable, (CameraFilterPack_Blur_Noise * __this));
IL2CPP_REGISTER_METHOD(0x024D35E0, void, __ctor, (CameraFilterPack_Blur_Noise * __this));
}
