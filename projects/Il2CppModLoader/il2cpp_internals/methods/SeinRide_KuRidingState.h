#include <interception_macros.h>

namespace app::methods::SeinRide_KuRidingState {
IL2CPP_REGISTER_METHOD(0x005D45D0, KuController *, get_KuController, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D4670, Ku *, get_Ku, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D4700, SeinCharacter *, get_Sein, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D4790, List_1_EquipmentType_ *, get_AllowedEquipment, ());
IL2CPP_REGISTER_METHOD(0x005D4990, void, OnBegin, (SeinRide_KuRidingState * __this, IRideable * rideable, bool skipMountAnimation));
IL2CPP_REGISTER_METHOD(0x005D5010, void, OnMatchAnimationStopped, (SeinRide_KuRidingState * __this, MoonAnimation * oriAnimation, ActiveAnimationHandle sourceActiveAnimation));
IL2CPP_REGISTER_METHODINFO(0x04727580, SeinRide_KuRidingState_OnMatchAnimationStopped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D5290, void, OnMatchAnimationTrigered, (SeinRide_KuRidingState * __this, MoonAnimation * oriAnimation, ActiveAnimationHandle sourceActiveAnimation, int32_t priority, Func_1_Boolean_ * sourceContinueCondition));
IL2CPP_REGISTER_METHODINFO(0x04708BE0, SeinRide_KuRidingState_OnMatchAnimationTrigered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D56A0, void, OnEnd, (SeinRide_KuRidingState * __this, IRideable * rideable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnJump, (SeinRide_KuRidingState * __this, float YSpeed));
IL2CPP_REGISTER_METHOD(0x005D5920, void, EnterMounting, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D5E50, void, UpdateMounting, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D62B0, void, Update, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_MatchRotation, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D6880, bool, get_LockPlayerToAttachmentPoint, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHOD(0x005D6890, void, _EnterMounting_b__26_0, (SeinRide_KuRidingState * __this));
IL2CPP_REGISTER_METHODINFO(0x0478F468, SeinRide_KuRidingState__EnterMounting_b__26_0__MethodInfo);
}
