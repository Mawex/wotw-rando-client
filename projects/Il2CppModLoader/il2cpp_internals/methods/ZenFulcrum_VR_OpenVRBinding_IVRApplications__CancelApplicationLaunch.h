#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__CancelApplicationLaunch {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_CancelApplicationLaunch * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (IVRApplications_CancelApplicationLaunch * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_CancelApplicationLaunch * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRApplications_CancelApplicationLaunch * __this, IAsyncResult * result));
}
