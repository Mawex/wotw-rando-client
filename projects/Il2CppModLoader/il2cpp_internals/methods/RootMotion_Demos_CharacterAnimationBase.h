#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::CharacterAnimationBase {
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, GetPivotPoint, (CharacterAnimationBase * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_animationGrounded, (CharacterAnimationBase * __this));
IL2CPP_REGISTER_METHOD(0x0220CF60, float, GetAngleFromForward, (CharacterAnimationBase * __this, Vector3 worldDirection));
IL2CPP_REGISTER_METHOD(0x0220D0F0, void, Start, (CharacterAnimationBase * __this));
IL2CPP_REGISTER_METHOD(0x0220D980, void, LateUpdate, (CharacterAnimationBase * __this));
IL2CPP_REGISTER_METHOD(0x0220E260, void, __ctor, (CharacterAnimationBase * __this));
}
