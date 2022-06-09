#include <interception_macros.h>

namespace app::methods::TentacleJoint {
IL2CPP_REGISTER_METHOD(0x010CDB80, void, add_ReceiveDamageCallback, (app::TentacleJoint * this_ptr, app::Action_2_Damage_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x010CDC70, void, remove_ReceiveDamageCallback, (app::TentacleJoint * this_ptr, app::Action_2_Damage_Int32_ * value));
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::TentacleJoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x010CDD60, void, OnRecieveDamage, (app::TentacleJoint * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHOD(0x010CDF10, void, __ctor, (app::TentacleJoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (app::TentacleJoint * this_ptr));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (app::TentacleJoint * this_ptr));
}
