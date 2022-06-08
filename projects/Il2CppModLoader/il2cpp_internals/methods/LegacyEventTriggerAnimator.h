#include <interception_macros.h>

namespace app::methods::LegacyEventTriggerAnimator {
IL2CPP_REGISTER_METHOD(0x00A242F0, void, add_Started, (LegacyEventTriggerAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00A243E0, void, remove_Started, (LegacyEventTriggerAnimator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x00A244D0, void, OnStartPlay, (LegacyEventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (LegacyEventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (LegacyEventTriggerAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacyEventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00A244F0, float, get_Duration, (LegacyEventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (LegacyEventTriggerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (LegacyEventTriggerAnimator * __this));
}
