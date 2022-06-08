#include <interception_macros.h>

namespace app::methods::Moon::AnimationPostprocessGroupManager_GroupState {
IL2CPP_REGISTER_METHOD(0x00573170, float, get_Weight, (AnimationPostprocessGroupManager_GroupState * __this));
IL2CPP_REGISTER_METHOD(0x01B05230, void, __ctor, (AnimationPostprocessGroupManager_GroupState * __this, AnimationPostprocessGroup * group));
IL2CPP_REGISTER_METHOD(0x01B05240, void, Enable, (AnimationPostprocessGroupManager_GroupState * __this));
IL2CPP_REGISTER_METHOD(0x01B05270, void, Disable, (AnimationPostprocessGroupManager_GroupState * __this));
IL2CPP_REGISTER_METHOD(0x01B052A0, void, Enable, (AnimationPostprocessGroupManager_GroupState * __this, float blendInTime));
IL2CPP_REGISTER_METHOD(0x01B052B0, void, Disable, (AnimationPostprocessGroupManager_GroupState * __this, float blendOutTime));
IL2CPP_REGISTER_METHOD(0x01B052C0, void, Update, (AnimationPostprocessGroupManager_GroupState * __this, float deltaTime));
}
