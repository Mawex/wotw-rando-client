#include <interception_macros.h>

namespace app::methods::Moon::IKTargetBehaviour {
IL2CPP_REGISTER_METHOD(0x01101D50, void, Start, (IKTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01101E90, void, ResetBehaviour, (IKTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01101F20, Transform *, get_LookTransform, (IKTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01102050, Vector2, ClampVector, (IKTargetBehaviour * __this, Vector3 origin, Vector3 target, float maxDist));
IL2CPP_REGISTER_METHOD(0x01102210, void, Process, (IKTargetBehaviour * __this, MoonAnimator * animator, InverseKinematicsPostprocess * postprocess, float delta, Vector3 targetPos, bool ignoreDamp));
IL2CPP_REGISTER_METHOD(0x01102AF0, void, FixedUpdate, (IKTargetBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01102C70, void, __ctor, (IKTargetBehaviour * __this));
}
