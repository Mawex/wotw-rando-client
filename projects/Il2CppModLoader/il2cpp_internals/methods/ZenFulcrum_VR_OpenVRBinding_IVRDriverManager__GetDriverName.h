using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverName {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRDriverManager_GetDriverName * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (IVRDriverManager_GetDriverName * __this, uint32_t nDriver, StringBuilder * pchValue, uint32_t unBufferSize));
IL2CPP_REGISTER_METHOD(0x02D78170, IAsyncResult *, BeginInvoke, (IVRDriverManager_GetDriverName * __this, uint32_t nDriver, StringBuilder * pchValue, uint32_t unBufferSize, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (IVRDriverManager_GetDriverName * __this, IAsyncResult * result));
}
