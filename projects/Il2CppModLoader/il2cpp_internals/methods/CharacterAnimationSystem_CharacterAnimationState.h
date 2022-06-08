#include <interception_macros.h>

namespace app::methods::CharacterAnimationSystem_CharacterAnimationState {
IL2CPP_REGISTER_METHOD(0x01049E40, void, __ctor, (CharacterAnimationSystem_CharacterAnimationState * __this, TextureAnimationWithTransitions * animation, Func_1_Boolean_ * condition, int32_t layer, bool playOnce, bool keepFrame));
IL2CPP_REGISTER_METHOD(0x01049EA0, void, __ctor, (CharacterAnimationSystem_CharacterAnimationState * __this, String * animation, Func_1_Boolean_ * condition, int32_t layer, bool playOnce, bool keepFrame));
IL2CPP_REGISTER_METHOD(0x01049EC0, bool, get_Condition, (CharacterAnimationSystem_CharacterAnimationState * __this));
IL2CPP_REGISTER_METHOD(0x01049F50, void, InvokeOnStopPlaying, (CharacterAnimationSystem_CharacterAnimationState * __this));
}
