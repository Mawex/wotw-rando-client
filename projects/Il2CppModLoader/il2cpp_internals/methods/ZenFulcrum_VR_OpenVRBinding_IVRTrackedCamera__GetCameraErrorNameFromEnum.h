#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraErrorNameFromEnum {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRTrackedCamera_GetCameraErrorNameFromEnum * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (IVRTrackedCamera_GetCameraErrorNameFromEnum * __this, EVRTrackedCameraError__Enum eCameraError));
IL2CPP_REGISTER_METHOD(0x00F523C0, IAsyncResult *, BeginInvoke, (IVRTrackedCamera_GetCameraErrorNameFromEnum * __this, EVRTrackedCameraError__Enum eCameraError, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (IVRTrackedCamera_GetCameraErrorNameFromEnum * __this, IAsyncResult * result));
}
