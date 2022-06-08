#include <interception_macros.h>

namespace app::methods::TentacleHead {
IL2CPP_REGISTER_METHOD(0x00D00300, void, add_OnTriggerEnterEvent, (TentacleHead * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x00D003F0, void, remove_OnTriggerEnterEvent, (TentacleHead * __this, Action_1_UnityEngine_Collider_ * value));
IL2CPP_REGISTER_METHOD(0x00D004E0, void, OnTriggerEnter, (TentacleHead * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00D00580, void, __ctor, (TentacleHead * __this));
}
