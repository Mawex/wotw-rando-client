using namespace app;

namespace app::methods::UberPostProcessingCrossFade {
IL2CPP_REGISTER_METHOD(0x018F6430, Material *, get_Material, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F6630, void, Update, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F67C0, void, Awake, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F6850, void, StartCrossFade, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F68C0, void, StopCrossFade, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F6920, void, GenerateBuffer, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F6B90, void, OnRenderImage, (UberPostProcessingCrossFade * __this, RenderTexture * from, RenderTexture * to));
IL2CPP_REGISTER_METHOD(0x018F6FB0, void, LateUpdate, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x018F7210, void, ApplySettings, (UberPostProcessingCrossFade * __this, UberPostProcessingCrossFade_CameraInformation * info));
IL2CPP_REGISTER_METHOD(0x018F73D0, void, OnDestroy, (UberPostProcessingCrossFade * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UberPostProcessingCrossFade * __this));
}
