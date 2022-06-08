#include <interception_macros.h>

namespace app::methods::ColorStateModifierDataWisps {
IL2CPP_REGISTER_METHOD(0x012D3960, Color, get_Color, (ColorStateModifierDataWisps * __this));
IL2CPP_REGISTER_METHOD(0x012D3A10, void, set_Color, (ColorStateModifierDataWisps * __this, Color value));
IL2CPP_REGISTER_METHOD(0x012D3AE0, ColorAnimator_ColorType__Enum, get_ColorType, (ColorStateModifierDataWisps * __this));
IL2CPP_REGISTER_METHOD(0x012D3B80, void, set_ColorType, (ColorStateModifierDataWisps * __this, ColorAnimator_ColorType__Enum value));
IL2CPP_REGISTER_METHOD(0x012D3C50, void, Apply, (ColorStateModifierDataWisps * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x012D3E80, void, __ctor, (ColorStateModifierDataWisps * __this));
IL2CPP_REGISTER_METHOD(0x012D4040, void, OnTargetChange, (ColorStateModifierDataWisps * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x012D4140, void, CaptureCurrentTargetState, (ColorStateModifierDataWisps * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x012D4310, Dictionary_2_System_Int32_System_Type_ *, GetIdToTypeMap, (ColorStateModifierDataWisps * __this));
}
