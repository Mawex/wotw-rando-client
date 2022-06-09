#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRChaperoneSetup__ReloadFromDisk {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::EChaperoneConfigFile__Enum config_file));
IL2CPP_REGISTER_METHOD(0x02F40970, IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::EChaperoneConfigFile__Enum config_file, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_ReloadFromDisk * this_ptr, app::IAsyncResult * result));
}
