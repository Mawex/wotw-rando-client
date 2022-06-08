#include <interception_macros.h>

namespace app::methods::UberStateValueCondition {
IL2CPP_REGISTER_METHOD(0x0128B500, bool, Validate, (UberStateValueCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B610, IUberState__Array *, get_AffectingUberStates, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, List_1_UnityEngine_GameObject_ *, get_AllTargets, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_AllTargets, (UberStateValueCondition * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x0128B790, void, OnEnable, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B830, void, OnDisable, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128B8D0, void, Apply, (UberStateValueCondition * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x0128BA90, void, __ctor, (UberStateValueCondition * __this));
IL2CPP_REGISTER_METHOD(0x0128BBF0, void, __cctor, ());
}
