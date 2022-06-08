using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyString {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRApplications_GetApplicationPropertyString * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02F3D650, uint32_t, Invoke, (IVRApplications_GetApplicationPropertyString * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, StringBuilder * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x02F3DD30, IAsyncResult *, BeginInvoke, (IVRApplications_GetApplicationPropertyString * __this, String * pchAppKey, EVRApplicationProperty__Enum eProperty, StringBuilder * pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError__Enum * peError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (IVRApplications_GetApplicationPropertyString * __this, EVRApplicationError__Enum * peError, IAsyncResult * result));
}
