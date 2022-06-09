#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRScreenshots__GetScreenshotPropertyType {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRScreenshots_GetScreenshotPropertyType * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00F51B50, EVRScreenshotType__Enum, Invoke, (app::IVRScreenshots_GetScreenshotPropertyType * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotError__Enum * p_error));
IL2CPP_REGISTER_METHOD(0x02CE5A20, IAsyncResult *, BeginInvoke, (app::IVRScreenshots_GetScreenshotPropertyType * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotError__Enum * p_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotType__Enum, EndInvoke, (app::IVRScreenshots_GetScreenshotPropertyType * this_ptr, app::EVRScreenshotError__Enum * p_error, app::IAsyncResult * result));
}
