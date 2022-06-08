#include <interception_macros.h>

namespace app::methods::CameraPlugin {
IL2CPP_REGISTER_METHOD(0x0169F350, void, Awake, (CameraPlugin * __this));
IL2CPP_REGISTER_METHOD(0x0169F410, void, PlayCycle, (CameraPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x0169F480, void, RecordCycle, (CameraPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x0169F540, void, Exit, (CameraPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraPlugin * __this));
}
