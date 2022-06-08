#include <interception_macros.h>

namespace app::methods::PassiveStateModifier {
IL2CPP_REGISTER_METHOD(0x01B779A0, int32_t, get_StateGUIDToApply, (PassiveStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B77A40, void, set_StateGUIDToApply, (PassiveStateModifier * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB40, IPassiveStateDescriptor *, get_Controller, (PassiveStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Controller, (PassiveStateModifier * __this, IPassiveStateDescriptor * value));
IL2CPP_REGISTER_METHOD(0x01B77B10, String *, get_StateName, (PassiveStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B77BD0, void, Apply, (PassiveStateModifier * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B77D50, void, __ctor, (PassiveStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B77E60, void, OnTargetChange, (PassiveStateModifier * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x01B77F30, void, CaptureCurrentTargetState, (PassiveStateModifier * __this, GameObject * target));
IL2CPP_REGISTER_METHOD(0x01B78100, void, RefreshControler, (PassiveStateModifier * __this, GameObject * target));
}
