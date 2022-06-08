#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ReloadFromDisk {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_ReloadFromDisk * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (IVRChaperoneSetup_ReloadFromDisk * __this, EChaperoneConfigFile__Enum configFile));
IL2CPP_REGISTER_METHOD(0x02F40970, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_ReloadFromDisk * __this, EChaperoneConfigFile__Enum configFile, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (IVRChaperoneSetup_ReloadFromDisk * __this, IAsyncResult * result));
}
