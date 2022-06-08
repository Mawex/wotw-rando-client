using namespace app;

namespace app::methods::UnityStandardAssets::ImageEffects::CameraMotionBlur {
IL2CPP_REGISTER_METHOD(0x025171C0, void, CalculateViewProjection, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x025173F0, void, Start, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x02517590, void, OnEnable, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x02517700, void, OnDisable, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x025178C0, bool, CheckResources, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x02517950, void, OnRenderImage, (CameraMotionBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x02519B80, void, Remember, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x02519DC0, Camera *, GetTmpCam, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0251A7C0, void, StartFrame, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0251AA50, int32_t, divRoundUp, (int32_t x, int32_t d));
IL2CPP_REGISTER_METHOD(0x0251AA60, void, __ctor, (CameraMotionBlur * __this));
IL2CPP_REGISTER_METHOD(0x0251ABD0, void, __cctor, (MethodInfo * method));
}
