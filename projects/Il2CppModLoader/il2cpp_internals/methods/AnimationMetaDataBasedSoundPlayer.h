#include <interception_macros.h>

namespace app::methods::AnimationMetaDataBasedSoundPlayer {
IL2CPP_REGISTER_METHOD(0x004FF0C0, void, FixedUpdate, (AnimationMetaDataBasedSoundPlayer * __this));
IL2CPP_REGISTER_METHOD(0x004FF750, bool, ShouldPlaySound, (AnimationMetaDataBasedSoundPlayer * __this, AnimationMetaData_AnimationData * animationData, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004FF830, bool, ShuoldPlaySoundInFrame, (AnimationMetaDataBasedSoundPlayer * __this, AnimationMetaData_AnimationData * animationData, int32_t frame));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AnimationMetaDataBasedSoundPlayer * __this));
}
