#include <interception_macros.h>

namespace app::methods::GlobalTurbulenceMaskAnimator {
IL2CPP_REGISTER_METHOD(0x007FA2D0, SceneSettingsComponent *, get_SceneSettings, (GlobalTurbulenceMaskAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007FA440, float, get_Duration, (GlobalTurbulenceMaskAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007FA540, bool, get_IsLooping, (GlobalTurbulenceMaskAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (GlobalTurbulenceMaskAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (GlobalTurbulenceMaskAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (GlobalTurbulenceMaskAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x007FA950, void, __ctor, (GlobalTurbulenceMaskAnimator * __this));
}
