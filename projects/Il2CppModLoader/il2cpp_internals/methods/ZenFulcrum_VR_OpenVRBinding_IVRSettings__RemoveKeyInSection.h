using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSettings__RemoveKeyInSection {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSettings_RemoveKeyInSection * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (IVRSettings_RemoveKeyInSection * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02CE81D0, IAsyncResult *, BeginInvoke, (IVRSettings_RemoveKeyInSection * __this, String * pchSection, String * pchSettingsKey, EVRSettingsError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (IVRSettings_RemoveKeyInSection * __this, EVRSettingsError__Enum * peError, IAsyncResult * result));
}
