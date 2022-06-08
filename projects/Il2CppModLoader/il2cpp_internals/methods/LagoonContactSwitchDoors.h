#include <interception_macros.h>

namespace app::methods::LagoonContactSwitchDoors {
IL2CPP_REGISTER_METHOD(0x00F00170, void, Awake, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00440, void, OnDestroy, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F004E0, void, Start, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00820, void, OnEnable, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F009C0, void, OnDisable, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00B60, void, FixedUpdate, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00B70, void, UpdateVerletStructuresState, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00F40, void, StopAllTimelines, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F00FB0, void, PlayTimeline, (LagoonContactSwitchDoors * __this, MoonTimeline * moonTimeline));
IL2CPP_REGISTER_METHOD(0x00F01040, void, OpenDoor, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01160, void, CloseDoor, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHODINFO(0x0473EA88, LagoonContactSwitchDoors_CloseDoor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F012F0, void, ApplyOpen, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01310, void, OnRestoreCheckpoint, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHODINFO(0x047849F0, LagoonContactSwitchDoors_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F01330, void, OnFrustumEnter, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01340, void, OnFrustumExit, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_InsideFrustum, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01350, Bounds, get_Bounds, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01370, void, __ctor, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHOD(0x00F01400, void, _Start_b__12_0, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHODINFO(0x04790040, LagoonContactSwitchDoors__Start_b__12_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F01410, void, _Start_b__12_1, (LagoonContactSwitchDoors * __this));
IL2CPP_REGISTER_METHODINFO(0x0474E280, LagoonContactSwitchDoors__Start_b__12_1__MethodInfo);
}
