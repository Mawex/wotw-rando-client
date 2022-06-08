#include <interception_macros.h>

namespace app::methods::RootMotion::CameraControllerFPS {
IL2CPP_REGISTER_METHOD(0x02207C00, void, Awake, (CameraControllerFPS * __this));
IL2CPP_REGISTER_METHOD(0x02207D00, void, LateUpdate, (CameraControllerFPS * __this));
IL2CPP_REGISTER_METHOD(0x022081F0, float, ClampAngle, (CameraControllerFPS * __this, float angle, float min, float max));
IL2CPP_REGISTER_METHOD(0x022082E0, void, __ctor, (CameraControllerFPS * __this));
}
