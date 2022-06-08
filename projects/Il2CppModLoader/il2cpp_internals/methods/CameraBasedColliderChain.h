#include <interception_macros.h>

namespace app::methods::CameraBasedColliderChain {
IL2CPP_REGISTER_METHOD(0x01682070, Vector3, get_CameraPosition, (CameraBasedColliderChain * __this));
IL2CPP_REGISTER_METHOD(0x01682220, void, Start, (CameraBasedColliderChain * __this));
IL2CPP_REGISTER_METHOD(0x01682330, void, LateUpdate, (CameraBasedColliderChain * __this));
IL2CPP_REGISTER_METHOD(0x01682A10, Vector3, GetEdgePoint, (CameraBasedColliderChain * __this, int32_t pointIndex));
IL2CPP_REGISTER_METHOD(0x01683070, Vector3, GetProjectedPointOnZ, (CameraBasedColliderChain * __this, Vector3 pointPosition));
IL2CPP_REGISTER_METHOD(0x01683230, void, __ctor, (CameraBasedColliderChain * __this));
}
