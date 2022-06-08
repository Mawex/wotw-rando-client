#include <interception_macros.h>

namespace app::methods::UnityEngine::SphereCollider {
IL2CPP_REGISTER_METHOD(0x030AF4E0, Vector3, get_center, (SphereCollider * __this));
IL2CPP_REGISTER_METHOD(0x030AF560, void, set_center, (SphereCollider * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x030AF5C0, float, get_radius, (SphereCollider * __this));
IL2CPP_REGISTER_METHOD(0x030AF610, void, set_radius, (SphereCollider * __this, float value));
IL2CPP_REGISTER_METHOD(0x030AF670, void, set_moonFastResize, (SphereCollider * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030AF6D0, void, get_center_Injected, (SphereCollider * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x030AF730, void, set_center_Injected, (SphereCollider * __this, Vector3 * value));
}
