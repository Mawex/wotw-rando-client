#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::RagdollUtility_Rigidbone {
IL2CPP_REGISTER_METHOD(0x02A1C440, void, __ctor, (app::RagdollUtility_Rigidbone * this_ptr, app::Rigidbody * r));
IL2CPP_REGISTER_METHOD(0x02A1C720, void, RecordVelocity, (app::RagdollUtility_Rigidbone * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A1CA40, void, WakeUp, (app::RagdollUtility_Rigidbone * this_ptr, float velocity_weight, float angular_velocity_weight));
}
