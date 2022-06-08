#include <interception_macros.h>

namespace app::methods::Game::ScrollLocks {
IL2CPP_REGISTER_METHOD(0x01527950, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x01527BF0, void, Register, (CameraScrollLock * cameraScrollLock));
IL2CPP_REGISTER_METHOD(0x01527CB0, void, Unregister, (CameraScrollLock * cameraScrollLock));
IL2CPP_REGISTER_METHOD(0x01527D90, void, __cctor, ());
}
