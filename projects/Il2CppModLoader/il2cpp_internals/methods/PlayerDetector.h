#include <interception_macros.h>

namespace app::methods::PlayerDetector {
IL2CPP_REGISTER_METHOD(0x0140E450, void, OnTriggerStay, (PlayerDetector * __this, Collider * col));
IL2CPP_REGISTER_METHOD(0x0089F980, void, OnUnreachable, (PlayerDetector * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayerDetector * __this));
}
