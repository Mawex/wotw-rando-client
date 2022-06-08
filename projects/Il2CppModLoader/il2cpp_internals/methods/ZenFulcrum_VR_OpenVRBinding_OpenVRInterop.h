#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::OpenVRInterop {
IL2CPP_REGISTER_METHOD(0x00F55520, uint32_t, InitInternal, (EVRInitError__Enum * peError, EVRApplicationType__Enum eApplicationType));
IL2CPP_REGISTER_METHOD(0x00F555D0, void, ShutdownInternal, ());
IL2CPP_REGISTER_METHOD(0x00F55660, bool, IsHmdPresent, ());
IL2CPP_REGISTER_METHOD(0x00F556F0, bool, IsRuntimeInstalled, ());
IL2CPP_REGISTER_METHOD(0x00F58C80, void *, GetStringForHmdError, (EVRInitError__Enum error));
IL2CPP_REGISTER_METHOD(0x00F58D20, void *, GetGenericInterface, (String * pchInterfaceVersion, EVRInitError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x00F558E0, bool, IsInterfaceVersionValid, (String * pchInterfaceVersion));
IL2CPP_REGISTER_METHOD(0x00F55A60, uint32_t, GetInitToken, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OpenVRInterop * __this));
}
