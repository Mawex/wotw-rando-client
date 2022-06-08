#include <interception_macros.h>

namespace app::methods::Moon::PetrifiedOwlLookStateAnimator {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C37270, void, CacheOriginals, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C372A0, void, RestoreToOriginalState, (PetrifiedOwlLookStateAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00C372D0, void, SampleValue, (PetrifiedOwlLookStateAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00C37310, void, __ctor, (PetrifiedOwlLookStateAnimator * __this));
}
