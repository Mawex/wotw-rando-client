using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaRect {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperone_GetPlayAreaRect * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (IVRChaperone_GetPlayAreaRect * __this, HmdQuad_t * rect));
IL2CPP_REGISTER_METHOD(0x02F3FCC0, IAsyncResult *, BeginInvoke, (IVRChaperone_GetPlayAreaRect * __this, HmdQuad_t * rect, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperone_GetPlayAreaRect * __this, HmdQuad_t * rect, IAsyncResult * result));
}
