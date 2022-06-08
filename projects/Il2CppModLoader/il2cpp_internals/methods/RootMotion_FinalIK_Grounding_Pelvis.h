#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Grounding_Pelvis {
IL2CPP_REGISTER_METHOD(0x007EC230, Vector3, get_IKOffset, (Grounding_Pelvis * __this));
IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_IKOffset, (Grounding_Pelvis * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_heightOffset, (Grounding_Pelvis * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_heightOffset, (Grounding_Pelvis * __this, float value));
IL2CPP_REGISTER_METHOD(0x02074B70, void, Initiate, (Grounding_Pelvis * __this, Grounding * grounding));
IL2CPP_REGISTER_METHOD(0x02074C80, void, Reset, (Grounding_Pelvis * __this));
IL2CPP_REGISTER_METHOD(0x02074E80, void, OnEnable, (Grounding_Pelvis * __this));
IL2CPP_REGISTER_METHOD(0x02074F90, void, Process, (Grounding_Pelvis * __this, float lowestOffset, float highestOffset, bool isGrounded));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Grounding_Pelvis * __this));
}
