#include <interception_macros.h>

namespace app::methods::UnityEngine::Keyframe {
IL2CPP_REGISTER_METHOD(0x001F2820, void, __ctor, (Keyframe__Boxed * __this, float time, float value));
IL2CPP_REGISTER_METHOD(0x001F2840, void, __ctor, (Keyframe__Boxed * __this, float time, float value, float inTangent, float outTangent));
IL2CPP_REGISTER_METHOD(0x001EB400, float, get_time, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00114F30, void, set_time, (Keyframe__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001EB410, float, get_value, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155C0, void, set_value, (Keyframe__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_inTangent, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B30, void, set_inTangent, (Keyframe__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_outTangent, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B40, void, set_outTangent, (Keyframe__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x001F2870, float, get_inWeight, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F2880, float, get_outWeight, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120160, WeightedMode__Enum, get_weightedMode, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F2890, int32_t, get_tangentMode, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00002890, void, set_tangentMode, (Keyframe__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001F2890, int32_t, get_tangentModeInternal, (Keyframe__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00002890, void, set_tangentModeInternal, (Keyframe__Boxed * __this, int32_t value));
}
