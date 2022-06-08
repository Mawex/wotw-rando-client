using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__TakeStereoScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_TakeStereoScreenshot * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVRScreenshotError__Enum, Invoke, (IVRScreenshots_TakeStereoScreenshot * __this, uint32_t * pOutScreenshotHandle, String * pchPreviewFilename, String * pchVRFilename));
IL2CPP_REGISTER_METHOD(0x02CE6580, IAsyncResult *, BeginInvoke, (IVRScreenshots_TakeStereoScreenshot * __this, uint32_t * pOutScreenshotHandle, String * pchPreviewFilename, String * pchVRFilename, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotError__Enum, EndInvoke, (IVRScreenshots_TakeStereoScreenshot * __this, uint32_t * pOutScreenshotHandle, IAsyncResult * result));
}
