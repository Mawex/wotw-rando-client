using namespace app;

namespace app::methods::AVProWindowsMediaManager {
IL2CPP_REGISTER_METHOD(0x0312C580, AVProWindowsMediaManager *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0312C790, void, Awake, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312C830, void, OnDestroy, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312C840, bool, Init, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04760620, AVProWindowsMediaManager_Init__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0312CB90, void, SetUnityFeatures, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312CC30, void, GetConversionMethod, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312D090, IEnumerator *, FinalRenderCapture, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312D1D0, void, Update, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312D220, void, Deinit, (AVProWindowsMediaManager * __this));
IL2CPP_REGISTER_METHOD(0x0312D470, Shader *, GetPixelConversionShader, (AVProWindowsMediaManager * __this, AVProWindowsMediaPlugin_VideoFrameFormat__Enum format, bool useBT709));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (AVProWindowsMediaManager * __this));
}
