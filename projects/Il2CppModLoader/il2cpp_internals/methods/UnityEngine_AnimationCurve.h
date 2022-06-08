#include <interception_macros.h>

namespace app::methods::UnityEngine::AnimationCurve {
IL2CPP_REGISTER_METHOD(0x02419990, void, __ctor, (AnimationCurve * __this, Keyframe__Array * keys));
IL2CPP_REGISTER_METHOD(0x024199F0, void, __ctor, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x02419A50, void, Internal_Destroy, (void * ptr));
IL2CPP_REGISTER_METHOD(0x02419AA0, void *, Internal_Create, (Keyframe__Array * keys));
IL2CPP_REGISTER_METHOD(0x02419AF0, bool, Internal_Equals, (AnimationCurve * __this, void * other));
IL2CPP_REGISTER_METHOD(0x02419B50, void, Finalize, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x02419C10, float, Evaluate, (AnimationCurve * __this, float time));
IL2CPP_REGISTER_METHOD(0x02419C70, Keyframe__Array *, get_keys, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x02419CC0, void, set_keys, (AnimationCurve * __this, Keyframe__Array * value));
IL2CPP_REGISTER_METHOD(0x02419D20, void, CopyFrom, (AnimationCurve * __this, AnimationCurve * source));
IL2CPP_REGISTER_METHOD(0x02419D80, int32_t, AddKey, (AnimationCurve * __this, float time, float value));
IL2CPP_REGISTER_METHOD(0x02419DF0, int32_t, MoveKey, (AnimationCurve * __this, int32_t index, Keyframe key));
IL2CPP_REGISTER_METHOD(0x02419E60, Keyframe, get_Item, (AnimationCurve * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02419F10, int32_t, get_length, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x02419CC0, void, SetKeys, (AnimationCurve * __this, Keyframe__Array * keys));
IL2CPP_REGISTER_METHOD(0x02419E60, Keyframe, GetKey, (AnimationCurve * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02419C70, Keyframe__Array *, GetKeys, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x02419F60, void, SmoothTangents, (AnimationCurve * __this, int32_t index, float weight));
IL2CPP_REGISTER_METHOD(0x02419FD0, AnimationCurve *, Constant, (float timeStart, float timeEnd, float value));
IL2CPP_REGISTER_METHOD(0x0241A000, AnimationCurve *, Linear, (float timeStart, float valueStart, float timeEnd, float valueEnd));
IL2CPP_REGISTER_METHOD(0x0241A390, AnimationCurve *, EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));
IL2CPP_REGISTER_METHOD(0x0241A6F0, WrapMode__Enum, get_preWrapMode, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x0241A740, void, set_preWrapMode, (AnimationCurve * __this, WrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x0241A7A0, WrapMode__Enum, get_postWrapMode, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x0241A7F0, void, set_postWrapMode, (AnimationCurve * __this, WrapMode__Enum value));
IL2CPP_REGISTER_METHOD(0x0241A850, bool, Equals, (AnimationCurve * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x0241AA10, bool, Equals, (AnimationCurve * __this, AnimationCurve * other));
IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (AnimationCurve * __this));
IL2CPP_REGISTER_METHOD(0x0241AB30, int32_t, MoveKey_Injected, (AnimationCurve * __this, int32_t index, Keyframe * key));
IL2CPP_REGISTER_METHOD(0x0241ABA0, void, GetKey_Injected, (AnimationCurve * __this, int32_t index, Keyframe * ret));
}
