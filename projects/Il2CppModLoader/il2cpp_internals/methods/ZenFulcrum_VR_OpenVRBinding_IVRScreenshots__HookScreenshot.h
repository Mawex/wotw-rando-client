#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__HookScreenshot {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRScreenshots_HookScreenshot * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F54C90, EVRScreenshotError__Enum, Invoke, (IVRScreenshots_HookScreenshot * __this, EVRScreenshotType__Enum__Array * pSupportedTypes, int32_t numTypes));
IL2CPP_REGISTER_METHOD(0x02CE5B00, IAsyncResult *, BeginInvoke, (IVRScreenshots_HookScreenshot * __this, EVRScreenshotType__Enum__Array * pSupportedTypes, int32_t numTypes, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRScreenshotError__Enum, EndInvoke, (IVRScreenshots_HookScreenshot * __this, IAsyncResult * result));
}
