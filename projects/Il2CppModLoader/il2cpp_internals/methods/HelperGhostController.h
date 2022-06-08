#include <interception_macros.h>

namespace app::methods::HelperGhostController {
IL2CPP_REGISTER_METHOD(0x010A32F0, void, Start, (HelperGhostController * __this));
IL2CPP_REGISTER_METHOD(0x010A3370, void, OnTriggerStay, (HelperGhostController * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x010A3670, void, StartHelperGhostSetup, (HelperGhostController * __this));
IL2CPP_REGISTER_METHOD(0x010A3A10, void, FixedUpdate, (HelperGhostController * __this));
IL2CPP_REGISTER_METHOD(0x010A3C10, IEnumerator *, OnFinishedRoutive, (HelperGhostController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HelperGhostController * __this));
}
