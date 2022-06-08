using namespace app;

namespace app::methods::CameraFilterPack_Blur_BlurHole {
IL2CPP_REGISTER_METHOD(0x027644B0, Material *, get_material, (CameraFilterPack_Blur_BlurHole * __this));
IL2CPP_REGISTER_METHOD(0x02764690, void, Start, (CameraFilterPack_Blur_BlurHole * __this));
IL2CPP_REGISTER_METHOD(0x02764800, void, OnRenderImage, (CameraFilterPack_Blur_BlurHole * __this, RenderTexture * sourceTexture, RenderTexture * destTexture));
IL2CPP_REGISTER_METHOD(0x02764D00, void, OnValidate, (CameraFilterPack_Blur_BlurHole * __this));
IL2CPP_REGISTER_METHOD(0x02764D90, void, Update, (CameraFilterPack_Blur_BlurHole * __this));
IL2CPP_REGISTER_METHOD(0x02764E20, void, OnDisable, (CameraFilterPack_Blur_BlurHole * __this));
IL2CPP_REGISTER_METHOD(0x02764F00, void, __ctor, (CameraFilterPack_Blur_BlurHole * __this));
}
