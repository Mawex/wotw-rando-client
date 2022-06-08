#include <interception_macros.h>

namespace app::methods::LegacyCameraSettingsAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Restart, (LegacyCameraSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AnimateIt, (LegacyCameraSettingsAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (LegacyCameraSettingsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (LegacyCameraSettingsAnimator * __this));
}
