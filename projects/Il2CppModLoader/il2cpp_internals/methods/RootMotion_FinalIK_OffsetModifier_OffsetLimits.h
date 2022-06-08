#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::OffsetModifier_OffsetLimits {
IL2CPP_REGISTER_METHOD(0x02A18C50, void, Apply, (OffsetModifier_OffsetLimits * __this, IKEffector * e, Quaternion rootRotation));
IL2CPP_REGISTER_METHOD(0x02A18FF0, float, SpringAxis, (OffsetModifier_OffsetLimits * __this, float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x02A19040, float, Spring, (OffsetModifier_OffsetLimits * __this, float value, float limit, bool negative));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (OffsetModifier_OffsetLimits * __this));
}
