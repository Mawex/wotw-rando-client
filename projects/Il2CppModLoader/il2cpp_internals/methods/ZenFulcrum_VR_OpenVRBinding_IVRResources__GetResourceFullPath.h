using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRResources__GetResourceFullPath {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRResources_GetResourceFullPath * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3470, uint32_t, Invoke, (IVRResources_GetResourceFullPath * __this, String * pchResourceName, String * pchResourceTypeDirectory, String * pchPathBuffer, uint32_t unBufferLen));
IL2CPP_REGISTER_METHOD(0x02CE4D40, IAsyncResult *, BeginInvoke, (IVRResources_GetResourceFullPath * __this, String * pchResourceName, String * pchResourceTypeDirectory, String * pchPathBuffer, uint32_t unBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRResources_GetResourceFullPath * __this, IAsyncResult * result));
}
