#include <interception_macros.h>

namespace app::methods::CameraChaseTarget {
IL2CPP_REGISTER_METHOD(0x01683250, CameraChaseTargetSpeedRatioController *, get_SpeedRatioController, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x01683320, void, OnEnable, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x01683410, void, Start, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x01683420, void, UpdateCameraLastPosition, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x016835E0, Vector3, UpdateChase, (CameraChaseTarget * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01683F90, void, GoToTarget, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x01684230, void, DoSmoothing, (CameraChaseTarget * __this, float smoothingTime));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_IgnoreSmoothingForAFrame, (CameraChaseTarget * __this));
IL2CPP_REGISTER_METHOD(0x002FD4A0, void, set_IgnoreSmoothingForAFrame, (CameraChaseTarget * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01684240, void, __ctor, (CameraChaseTarget * __this));
}
