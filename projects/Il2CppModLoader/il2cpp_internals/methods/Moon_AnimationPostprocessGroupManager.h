#include <interception_macros.h>

namespace app::methods::Moon::AnimationPostprocessGroupManager {
IL2CPP_REGISTER_METHOD(0x01B04910, float, GetGroupWeight, (AnimationPostprocessGroupManager * __this, AnimationPostprocessGroup * group));
IL2CPP_REGISTER_METHOD(0x01B04A20, void, DisableGroup, (AnimationPostprocessGroupManager * __this, AnimationPostprocessGroup * group));
IL2CPP_REGISTER_METHOD(0x01B04A40, void, DisableGroup, (AnimationPostprocessGroupManager * __this, AnimationPostprocessGroup * group, float blendOutTime));
IL2CPP_REGISTER_METHOD(0x01B04C90, void, EnableGroup, (AnimationPostprocessGroupManager * __this, AnimationPostprocessGroup * group));
IL2CPP_REGISTER_METHOD(0x01B04CB0, void, EnableGroup, (AnimationPostprocessGroupManager * __this, AnimationPostprocessGroup * group, float blendInTime));
IL2CPP_REGISTER_METHOD(0x01B04DC0, void, Update, (AnimationPostprocessGroupManager * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B04FF0, void, __ctor, (AnimationPostprocessGroupManager * __this));
}
