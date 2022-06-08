#include <interception_macros.h>

namespace app::methods::Moon::InverseKinematicsPostprocess {
IL2CPP_REGISTER_METHOD(0x01B14380, IK *, get_IK, (InverseKinematicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, get_Order, (InverseKinematicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B14450, float, get_TotalWeight, (InverseKinematicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B14470, void, Awake, (InverseKinematicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B144E0, void, OnAddedToAnimator, (InverseKinematicsPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x01B14A10, void, Process, (InverseKinematicsPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B14C30, void, Process, (InverseKinematicsPostprocess * __this, MoonAnimator * animator, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B14E40, Transform *, FindChildRecursive, (GameObject * go, String * name, bool allowInactive));
IL2CPP_REGISTER_METHOD(0x01B15170, void, __ctor, (InverseKinematicsPostprocess * __this));
}
