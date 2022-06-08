#include <interception_macros.h>

namespace app::methods::RootMotion::AxisTools {
IL2CPP_REGISTER_METHOD(0x021FB560, Vector3, ToVector3, (Axis__Enum axis));
IL2CPP_REGISTER_METHOD(0x021FB670, Axis__Enum, ToAxis, (Vector3 v));
IL2CPP_REGISTER_METHOD(0x021FB780, Axis__Enum, GetAxisToPoint, (Transform * t, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x021FBA20, Axis__Enum, GetAxisToDirection, (Transform * t, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x021FBBB0, Vector3, GetAxisVectorToPoint, (Transform * t, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x021FBD30, Vector3, GetAxisVectorToDirection, (Transform * t, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AxisTools * __this));
}
