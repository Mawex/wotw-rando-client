#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchTemplateApplication {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_LaunchTemplateApplication * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3470, EVRApplicationError__Enum, Invoke, (IVRApplications_LaunchTemplateApplication * __this, String * pchTemplateAppKey, String * pchNewAppKey, AppOverrideKeys_t__Array * pKeys, uint32_t unKeys));
IL2CPP_REGISTER_METHOD(0x02F3F540, IAsyncResult *, BeginInvoke, (IVRApplications_LaunchTemplateApplication * __this, String * pchTemplateAppKey, String * pchNewAppKey, AppOverrideKeys_t__Array * pKeys, uint32_t unKeys, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVRApplicationError__Enum, EndInvoke, (IVRApplications_LaunchTemplateApplication * __this, IAsyncResult * result));
}
