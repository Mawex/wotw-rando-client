#include <interception_macros.h>

namespace app::methods::DebugRaycastCheck {
IL2CPP_REGISTER_METHOD(0x00B72FB0, void, CheckForFirstBetweenHereAndTarget, (DebugRaycastCheck * __this));
IL2CPP_REGISTER_METHOD(0x00B733E0, void, SpherecastCheckBetweenHereAndTarget, (DebugRaycastCheck * __this));
IL2CPP_REGISTER_METHOD(0x00B73850, void, OnDrawGizmos, (DebugRaycastCheck * __this));
IL2CPP_REGISTER_METHOD(0x00B73A10, void, __ctor, (DebugRaycastCheck * __this));
}
