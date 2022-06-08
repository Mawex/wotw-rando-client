#include <interception_macros.h>

namespace app::methods::CameraOffsetAnimator {
IL2CPP_REGISTER_METHOD(0x01696D20, void, Restart, (CameraOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01696D40, void, AnimateIt, (CameraOffsetAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (CameraOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005790B0, void, __ctor, (CameraOffsetAnimator * __this));
}
