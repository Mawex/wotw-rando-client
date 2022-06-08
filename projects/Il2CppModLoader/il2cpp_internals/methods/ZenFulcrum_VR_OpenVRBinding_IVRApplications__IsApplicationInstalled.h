#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IsApplicationInstalled {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_IsApplicationInstalled * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (IVRApplications_IsApplicationInstalled * __this, String * pchAppKey));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (IVRApplications_IsApplicationInstalled * __this, String * pchAppKey, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRApplications_IsApplicationInstalled * __this, IAsyncResult * result));
}
