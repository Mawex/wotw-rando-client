#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::PlatformRotator {
IL2CPP_REGISTER_METHOD(0x0222D600, void, Start, (PlatformRotator * __this));
IL2CPP_REGISTER_METHOD(0x0222D9A0, void, FixedUpdate, (PlatformRotator * __this));
IL2CPP_REGISTER_METHOD(0x0222DE60, IEnumerator *, SwitchRotation, (PlatformRotator * __this));
IL2CPP_REGISTER_METHOD(0x0222DFB0, void, OnCollisionEnter, (PlatformRotator * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x0222E120, void, OnCollisionExit, (PlatformRotator * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x0222E290, void, __ctor, (PlatformRotator * __this));
}
