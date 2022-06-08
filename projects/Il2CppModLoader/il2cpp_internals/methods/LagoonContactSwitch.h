using namespace app;

namespace app::methods::LagoonContactSwitch {
IL2CPP_REGISTER_METHOD(0x00EFEA50, bool, get_IsActivated, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFEB30, void, set_IsActivated, (LagoonContactSwitch * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EFEC20, void, Start, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF0D0, void, OnEnable, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF0F0, void, OnDisable, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF110, void, OnTriggerEnable, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF1B0, void, OnTriggerDisable, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF250, void, FixedUpdate, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF530, void, OnTriggerActivated, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF670, void, ToggleSwitch, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF6E0, void, TurnOn, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF890, void, TurnOff, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF8E0, bool, get_IsOn, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF8F0, void, OnRestoreCheckpoint, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFF920, void, Apply, (LagoonContactSwitch * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00EFF930, void, ApplyState, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFFB70, IUberState__Array *, get_AffectingUberStates, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFFC60, List_1_UnityEngine_GameObject_ *, get_AllTargets, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFFE20, void, StopAllTimelines, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00EFFEA0, void, PlayTimeline, (LagoonContactSwitch * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x00EFFF40, void, ActivateSwitch, (LagoonContactSwitch * __this, bool playOpenDoorTimeline));
IL2CPP_REGISTER_METHOD(0x00F00120, void, DeactivateSwitch, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00F00130, void, __ctor, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHOD(0x00F00150, void, _Start_b__22_0, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C890, LagoonContactSwitch__Start_b__22_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F00160, void, _Start_b__22_1, (LagoonContactSwitch * __this));
IL2CPP_REGISTER_METHODINFO(0x04766278, LagoonContactSwitch__Start_b__22_1__MethodInfo);
}
