#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRScreenshots__TakeStereoScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE61E0, EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::String * pch_preview_filename, app::String * pch_v_r_filename));
IL2CPP_REGISTER_METHOD(0x02CE6580, IAsyncResult *, BeginInvoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::String * pch_preview_filename, app::String * pch_v_r_filename, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, app::uint32_t * p_out_screenshot_handle, app::IAsyncResult * result));
}
