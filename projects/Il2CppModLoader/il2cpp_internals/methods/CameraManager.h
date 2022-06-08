#include <interception_macros.h>

namespace app::methods::CameraManager {
IL2CPP_REGISTER_METHOD(0x01692FD0, void, OnEnable, (CameraManager * __this));
IL2CPP_REGISTER_METHOD(0x01692FE0, void, ReRegisterCameraManager, (CameraManager * __this));
IL2CPP_REGISTER_METHOD(0x016930C0, void, RegisterCamera, (CameraManager * __this, CameraController_1 * cameraController));
IL2CPP_REGISTER_METHOD(0x01693250, void, UnregisterCamera, (CameraManager * __this, CameraController_1 * cameraController));
IL2CPP_REGISTER_METHOD(0x016932F0, void, __ctor, (CameraManager * __this));
}
