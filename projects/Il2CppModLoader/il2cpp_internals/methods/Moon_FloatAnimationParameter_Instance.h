#include <interception_macros.h>

namespace app::methods::Moon::FloatAnimationParameter_Instance {
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TargetValue, (FloatAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x01B0E300, void, set_TargetValue, (FloatAnimationParameter_Instance * __this, float value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_CurrentValue, (FloatAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_PreviewMode, (FloatAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_PreviewMode, (FloatAnimationParameter_Instance * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01B0E340, void, __ctor, (FloatAnimationParameter_Instance * __this, FloatAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x01B0E370, void, Update, (FloatAnimationParameter_Instance * __this, float dt));
}
