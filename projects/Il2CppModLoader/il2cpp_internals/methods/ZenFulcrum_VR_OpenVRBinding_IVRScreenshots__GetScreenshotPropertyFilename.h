using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyFilename {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_GetScreenshotPropertyFilename * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE5480, uint32_t, Invoke, (IVRScreenshots_GetScreenshotPropertyFilename * __this, uint32_t screenshotHandle, EVRScreenshotPropertyFilenames__Enum filenameType, StringBuilder * pchFilename, uint32_t cchFilename, EVRScreenshotError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CE5900, IAsyncResult *, BeginInvoke, (IVRScreenshots_GetScreenshotPropertyFilename * __this, uint32_t screenshotHandle, EVRScreenshotPropertyFilenames__Enum filenameType, StringBuilder * pchFilename, uint32_t cchFilename, EVRScreenshotError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRScreenshots_GetScreenshotPropertyFilename * __this, EVRScreenshotError__Enum * pError, IAsyncResult * result));
}
