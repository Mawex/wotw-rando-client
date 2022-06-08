#include <interception_macros.h>

namespace app::methods::LegacyActivateDamageDealerAnimator {
IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CAEA0, void, CacheOriginals, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x015CAED0, void, SampleValue, (LegacyActivateDamageDealerAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x015CAF00, void, RestoreToOriginalState, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C88C0, float, get_Duration, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (LegacyActivateDamageDealerAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004C88D0, void, __ctor, (LegacyActivateDamageDealerAnimator * __this));
}
