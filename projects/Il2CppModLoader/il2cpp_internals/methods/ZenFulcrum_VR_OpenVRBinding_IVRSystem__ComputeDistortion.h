#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ComputeDistortion {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_ComputeDistortion * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEA040, bool, Invoke, (IVRSystem_ComputeDistortion * __this, EVREye__Enum eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates));
IL2CPP_REGISTER_METHOD(0x02CEA480, IAsyncResult *, BeginInvoke, (IVRSystem_ComputeDistortion * __this, EVREye__Enum eEye, float fU, float fV, DistortionCoordinates_t * pDistortionCoordinates, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRSystem_ComputeDistortion * __this, DistortionCoordinates_t * pDistortionCoordinates, IAsyncResult * result));
}
