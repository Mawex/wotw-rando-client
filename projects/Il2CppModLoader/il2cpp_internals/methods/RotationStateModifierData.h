#include <interception_macros.h>

namespace app::methods::RotationStateModifierData {
IL2CPP_REGISTER_METHOD(0x01B799C0, Vector3, get_RotationEuler, (RotationStateModifierData * __this));
IL2CPP_REGISTER_METHOD(0x01B79A80, void, set_RotationEuler, (RotationStateModifierData * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B79B60, Quaternion, get_RotationQuartenion, (RotationStateModifierData * __this));
IL2CPP_REGISTER_METHOD(0x01B79C60, void, set_RotationQuartenion, (RotationStateModifierData * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x01B79D50, float, get_RotationEulerZ, (RotationStateModifierData * __this));
IL2CPP_REGISTER_METHOD(0x01B79DF0, void, set_RotationEulerZ, (RotationStateModifierData * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B79EF0, void, Apply, (RotationStateModifierData * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B7A180, void, __ctor, (RotationStateModifierData * __this));
IL2CPP_REGISTER_METHOD(0x01B7A270, void, OnTargetChange, (RotationStateModifierData * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x01B7A370, void, CaptureCurrentTargetState, (RotationStateModifierData * __this, GameObject * target));
}
