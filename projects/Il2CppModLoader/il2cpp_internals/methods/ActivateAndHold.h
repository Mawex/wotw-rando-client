#include <interception_macros.h>

namespace app::methods::ActivateAndHold {
IL2CPP_REGISTER_METHOD(0x004C7770, ILever *, get_ResolvedLever, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7830, void, Awake, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7840, void, OnEnable, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7A20, void, OnDisable, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7C00, void, Update, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7C10, void, ChangeState, (ActivateAndHold * __this, ActivateAndHold_State__Enum newState));
IL2CPP_REGISTER_METHODINFO(0x0478B6B0, ActivateAndHold_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C7DB0, void, EnterResting, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7E00, void, EnterForward, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7E10, void, EnterHold, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7E20, void, EnterBack, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x004C7E30, void, UpdateCurrentState, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHODINFO(0x04703648, ActivateAndHold_UpdateCurrentState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C8170, void, OnForwardFinished, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BFD0, ActivateAndHold_OnForwardFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C8200, void, PlayTimeline, (ActivateAndHold * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x004C7DB0, void, StopAllTimelines, (ActivateAndHold * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ActivateAndHold * __this));
}
