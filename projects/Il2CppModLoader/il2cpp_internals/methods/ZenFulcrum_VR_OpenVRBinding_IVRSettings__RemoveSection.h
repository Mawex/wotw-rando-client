using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__RemoveSection {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_RemoveSection * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (IVRSettings_RemoveSection * __this, String * pchSection, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE82B0, IAsyncResult *, BeginInvoke, (IVRSettings_RemoveSection * __this, String * pchSection, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_RemoveSection * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
