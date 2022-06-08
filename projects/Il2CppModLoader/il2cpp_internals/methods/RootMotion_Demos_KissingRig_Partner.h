#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::KissingRig_Partner {
IL2CPP_REGISTER_METHOD(0x02053D20, void, Initiate, (KissingRig_Partner * __this));
IL2CPP_REGISTER_METHOD(0x02221D30, void, Update, (KissingRig_Partner * __this, float weight));
IL2CPP_REGISTER_METHOD(0x02222AE0, Transform *, get_neck, (KissingRig_Partner * __this));
IL2CPP_REGISTER_METHOD(0x02222B70, void, InverseTransformEffector, (KissingRig_Partner * __this, FullBodyBipedEffector__Enum effector, Transform * target, Vector3 targetPosition, float weight));
IL2CPP_REGISTER_METHOD(0x02222F80, void, __ctor, (KissingRig_Partner * __this));
}
