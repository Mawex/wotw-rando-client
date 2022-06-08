using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionRaw {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetProjectionRaw * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEDA90, void, Invoke, (IVRSystem_GetProjectionRaw * __this, EVREye__Enum eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom));
IL2CPP_REGISTER_METHOD(0x02CEDF20, IAsyncResult *, BeginInvoke, (IVRSystem_GetProjectionRaw * __this, EVREye__Enum eEye, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (IVRSystem_GetProjectionRaw * __this, float * pfLeft, float * pfRight, float * pfTop, float * pfBottom, IAsyncResult * result));
}
