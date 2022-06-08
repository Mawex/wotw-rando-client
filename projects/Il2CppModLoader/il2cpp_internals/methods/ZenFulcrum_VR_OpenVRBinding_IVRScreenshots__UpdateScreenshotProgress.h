using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__UpdateScreenshotProgress {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_UpdateScreenshotProgress * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE6660, EVRScreenshotError__Enum, Invoke, (IVRScreenshots_UpdateScreenshotProgress * __this, uint32_t screenshotHandle, float flProgress));
IL2CPP_REGISTER_METHOD(0x02CE69D0, IAsyncResult *, BeginInvoke, (IVRScreenshots_UpdateScreenshotProgress * __this, uint32_t screenshotHandle, float flProgress, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRScreenshotError__Enum, EndInvoke, (IVRScreenshots_UpdateScreenshotProgress * __this, IAsyncResult * result));
}
