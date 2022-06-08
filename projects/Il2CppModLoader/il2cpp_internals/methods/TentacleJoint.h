#include <interception_macros.h>

namespace app::methods::TentacleJoint {
IL2CPP_REGISTER_METHOD(0x010CDB80, void, add_ReceiveDamageCallback, (TentacleJoint * __this, Action_2_Damage_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x010CDC70, void, remove_ReceiveDamageCallback, (TentacleJoint * __this, Action_2_Damage_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (TentacleJoint * __this));
IL2CPP_REGISTER_METHOD(0x010CDD60, void, OnRecieveDamage, (TentacleJoint * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x010CDF10, void, __ctor, (TentacleJoint * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (TentacleJoint * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (TentacleJoint * __this));
}
