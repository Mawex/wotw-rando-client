#include <interception_macros.h>

namespace app::methods::GhostReplayAnimator {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (GhostReplayAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (GhostReplayAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (GhostReplayAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x007E49F0, float, get_Duration, (GhostReplayAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (GhostReplayAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007E4AB0, void, LoadData, (GhostReplayAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (GhostReplayAnimator * __this));
}
