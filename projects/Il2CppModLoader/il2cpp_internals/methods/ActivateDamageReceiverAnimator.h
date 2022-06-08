#include <interception_macros.h>

namespace app::methods::ActivateDamageReceiverAnimator {
IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C8830, void, CacheOriginals, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C8860, void, SampleValue, (ActivateDamageReceiverAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x004C8890, void, RestoreToOriginalState, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C88C0, float, get_Duration, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (ActivateDamageReceiverAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C88D0, void, __ctor, (ActivateDamageReceiverAnimator * __this));
}
