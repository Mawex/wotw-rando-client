#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__SubmitScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_SubmitScreenshot * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52B80, EVRScreenshotError__Enum, Invoke, (IVRScreenshots_SubmitScreenshot * __this, uint32_t screenshotHandle, EVRScreenshotType__Enum type, String * pchSourcePreviewFilename, String * pchSourceVRFilename));
IL2CPP_REGISTER_METHOD(0x02CE60F0, IAsyncResult *, BeginInvoke, (IVRScreenshots_SubmitScreenshot * __this, uint32_t screenshotHandle, EVRScreenshotType__Enum type, String * pchSourcePreviewFilename, String * pchSourceVRFilename, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRScreenshotError__Enum, EndInvoke, (IVRScreenshots_SubmitScreenshot * __this, IAsyncResult * result));
}
