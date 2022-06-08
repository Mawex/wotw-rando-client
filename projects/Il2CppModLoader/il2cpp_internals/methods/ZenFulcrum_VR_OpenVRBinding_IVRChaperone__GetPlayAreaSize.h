using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperone_GetPlayAreaSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRChaperone_GetPlayAreaSize * __this, float * pSizeX, float * pSizeZ));
IL2CPP_REGISTER_METHOD(0x02F3FD90, IAsyncResult *, BeginInvoke, (IVRChaperone_GetPlayAreaSize * __this, float * pSizeX, float * pSizeZ, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVRChaperone_GetPlayAreaSize * __this, float * pSizeX, float * pSizeZ, IAsyncResult * result));
}
