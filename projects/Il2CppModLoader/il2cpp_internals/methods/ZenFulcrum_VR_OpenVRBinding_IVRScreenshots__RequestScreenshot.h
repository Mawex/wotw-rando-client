#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__RequestScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_RequestScreenshot * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE5BD0, EVRScreenshotError__Enum, Invoke, (IVRScreenshots_RequestScreenshot * __this, uint32_t * pOutScreenshotHandle, EVRScreenshotType__Enum type, String * pchPreviewFilename, String * pchVRFilename));
IL2CPP_REGISTER_METHOD(0x02CE5FF0, IAsyncResult *, BeginInvoke, (IVRScreenshots_RequestScreenshot * __this, uint32_t * pOutScreenshotHandle, EVRScreenshotType__Enum type, String * pchPreviewFilename, String * pchVRFilename, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotError__Enum, EndInvoke, (IVRScreenshots_RequestScreenshot * __this, uint32_t * pOutScreenshotHandle, IAsyncResult * result));
}
