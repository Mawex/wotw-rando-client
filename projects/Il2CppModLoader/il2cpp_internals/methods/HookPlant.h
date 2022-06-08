#include <interception_macros.h>

namespace app::methods::HookPlant {
IL2CPP_REGISTER_METHOD(0x00B5E490, SeinSpiritLeashAbility *, get_Leash, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00A64220, Transform *, get_HookTargetTransform, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5E5D0, void, SetAnimationAngle, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5E8C0, void, Start, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5EA80, void, OnDestroy, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5E0F0, void, OnPostRestoreCheckpoint, (HookPlant * __this));
IL2CPP_REGISTER_METHODINFO(0x04705448, HookPlant_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B5EC30, void, Closed, (HookPlant * __this));
IL2CPP_REGISTER_METHODINFO(0x047025E8, HookPlant_Closed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B5EC40, void, Opened, (HookPlant * __this));
IL2CPP_REGISTER_METHODINFO(0x04709AD8, HookPlant_Opened__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B5EC50, void, ChangeState, (HookPlant * __this, HookPlant_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00B5F1C0, void, FixedUpdate, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5F4A0, void, PlayCurrentTimeline, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5F570, void, StopCurrentTimeline, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5F640, void, SubscribeToCurrentTimelineStop, (HookPlant * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x00B5F770, void, OnSpiritLeashed, (HookPlant * __this, Vector3 playerPosition, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x00B5F7F0, bool, CanBeSpiritLeashed, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5F800, Vector3, GetLeashPos, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00757DC0, bool, get_InvalidateParentTimelineCache, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x00B5F820, void, set_InvalidateParentTimelineCache, (HookPlant * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AddChildren, (HookPlant * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CreateTimelineParentEntity, (HookPlant * __this, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x00B5F830, void, __ctor, (HookPlant * __this));
}
