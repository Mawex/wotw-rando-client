#include <interception_macros.h>

namespace app::methods::UnityEngine::Pose {
IL2CPP_REGISTER_METHOD(0x001FE8F0, void, __ctor, (Pose__Boxed * __this, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x002170A0, String *, ToString, (Pose__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00217190, bool, Equals, (Pose__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00217280, bool, Equals, (Pose__Boxed * __this, Pose other));
IL2CPP_REGISTER_METHOD(0x002172C0, int32_t, GetHashCode, (Pose__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02968200, void, __cctor, ());
}
