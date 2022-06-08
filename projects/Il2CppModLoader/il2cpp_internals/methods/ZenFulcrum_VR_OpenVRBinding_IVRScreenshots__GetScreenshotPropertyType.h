using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_GetScreenshotPropertyType * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRScreenshotType__Enum, Invoke, (IVRScreenshots_GetScreenshotPropertyType * __this, uint32_t screenshotHandle, EVRScreenshotError__Enum * pError));
IL2CPP_REGISTER_METHOD(0x02CE5A20, IAsyncResult *, BeginInvoke, (IVRScreenshots_GetScreenshotPropertyType * __this, uint32_t screenshotHandle, EVRScreenshotError__Enum * pError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotType__Enum, EndInvoke, (IVRScreenshots_GetScreenshotPropertyType * __this, EVRScreenshotError__Enum * pError, IAsyncResult * result));
}
