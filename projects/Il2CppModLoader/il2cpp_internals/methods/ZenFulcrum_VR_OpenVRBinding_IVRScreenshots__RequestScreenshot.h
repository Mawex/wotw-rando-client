#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRScreenshots__RequestScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRScreenshots_RequestScreenshot * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE5BD0, EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::EVRScreenshotType__Enum type, app::String * pch_preview_filename, app::String * pch_v_r_filename));
IL2CPP_REGISTER_METHOD(0x02CE5FF0, IAsyncResult *, BeginInvoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::EVRScreenshotType__Enum type, app::String * pch_preview_filename, app::String * pch_v_r_filename, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::IAsyncResult * result));
}
