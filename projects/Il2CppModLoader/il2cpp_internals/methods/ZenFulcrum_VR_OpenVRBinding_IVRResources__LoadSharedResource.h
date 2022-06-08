using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRResources__LoadSharedResource {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRResources_LoadSharedResource * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE4E30, uint32_t, Invoke, (IVRResources_LoadSharedResource * __this, String * pchResourceName, String * pchBuffer, uint32_t unBufferLen));
IL2CPP_REGISTER_METHOD(0x02CE53A0, IAsyncResult *, BeginInvoke, (IVRResources_LoadSharedResource * __this, String * pchResourceName, String * pchBuffer, uint32_t unBufferLen, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRResources_LoadSharedResource * __this, IAsyncResult * result));
}
