#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperone__ReloadInfo {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperone_ReloadInfo * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::IVRChaperone_ReloadInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (app::IVRChaperone_ReloadInfo * this_ptr, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperone_ReloadInfo * this_ptr, app::IAsyncResult * result));
}
