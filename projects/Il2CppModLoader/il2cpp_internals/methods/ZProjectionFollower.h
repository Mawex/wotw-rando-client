#include <interception_macros.h>

namespace app::methods::ZProjectionFollower {
IL2CPP_REGISTER_METHOD(0x01C5FD80, void, LateUpdate, (ZProjectionFollower * __this));
IL2CPP_REGISTER_METHOD(0x01C60040, Vector3, GetProjectedPointOnZ, (ZProjectionFollower * __this, Vector3 pointPosition));
IL2CPP_REGISTER_METHOD(0x01C60200, Vector3, get_cameraPosition, (ZProjectionFollower * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ZProjectionFollower * __this));
}
