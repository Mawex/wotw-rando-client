#include <interception_macros.h>

namespace app::methods::KuController {
IL2CPP_REGISTER_METHOD(0x0122D4D0, float, get_HorizontalInput, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122D540, float, get_VerticalInput, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122D5C0, bool, get_LockedInput, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122D840, void, Awake, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122D920, void, OnEnable, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122DAF0, void, OnDisable, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122DCC0, void, OnDestroy, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122DD60, bool, IsPerforming, (KuController * __this, KuState * characterState));
IL2CPP_REGISTER_METHOD(0x0122DE20, void, FixedUpdate, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0122E360, void, OnSetTurningHandler, (KuController * __this, CharacterLeftRightMovement * leftRightMovement));
IL2CPP_REGISTER_METHODINFO(0x04780868, KuController_OnSetTurningHandler__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122E630, void, EnterMountState, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsSuspended, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_IsSuspended, (KuController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, SuspendableMask__Enum, get_Mask, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Mask, (KuController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0122E7A0, void, HandleOffscreenIssue, (KuController * __this));
IL2CPP_REGISTER_METHOD(0x0058EE40, void, __ctor, (KuController * __this));
}
