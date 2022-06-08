#include <interception_macros.h>

namespace app::methods::CameraController_UpdatePlaneFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CameraController_UpdatePlaneFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (CameraController_UpdatePlaneFunc * __this, Plane__Array * planes, Matrix4x4 * trans));
IL2CPP_REGISTER_METHOD(0x01687490, IAsyncResult *, BeginInvoke, (CameraController_UpdatePlaneFunc * __this, Plane__Array * planes, Matrix4x4 * trans, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (CameraController_UpdatePlaneFunc * __this, Matrix4x4 * trans, IAsyncResult * result));
}
