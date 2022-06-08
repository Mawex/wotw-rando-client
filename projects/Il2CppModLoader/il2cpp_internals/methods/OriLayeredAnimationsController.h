#include <interception_macros.h>

namespace app::methods::OriLayeredAnimationsController {
IL2CPP_REGISTER_METHOD(0x0043DA30, MoonAnimator *, get_OriAnimator, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x0043DB30, List_1_ICondition_ *, get_ResolvedConditions, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x0043DD50, void, OnEnable, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x0043DF80, void, OnDisable, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x0043DFA0, void, LateUpdate, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x0043E350, void, OnMatchAnimationTrigered, (OriLayeredAnimationsController * __this, MoonAnimation * matchedAnimation, ActiveAnimationHandle sourceActiveAnimation, int32_t priority, Func_1_Boolean_ * sourceContinueCondition));
IL2CPP_REGISTER_METHODINFO(0x04764218, OriLayeredAnimationsController_OnMatchAnimationTrigered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043E680, bool, ShouldSync, (OriLayeredAnimationsController * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (OriLayeredAnimationsController * __this));
}
