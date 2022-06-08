using namespace app;

namespace app::methods::Respawner {
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (Respawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00907B40, void, set_Mask, (Respawner * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00907BF0, bool, get_IsOnScreen, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00907E20, bool, get_CanRespawn, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00907F90, void, Awake, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x009082B0, void, OnDestroy, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x009085D0, void, OnRestoreCheckpoint, (Respawner * __this));
IL2CPP_REGISTER_METHODINFO(0x0470C688, Respawner_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00908690, void, FixedUpdate, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x009086A0, void, OnTargetDestroyed, (Respawner * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F3A0, Respawner_OnTargetDestroyed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00908860, void, UpdateRespawner, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00908AE0, void, Respawn, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x00908C00, void, Apply, (Respawner * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x002FBBC0, IUberState__Array *, get_AffectingUberStates, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_AffectingUberStates, (Respawner * __this, IUberState__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_AllTargets, (Respawner * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_InvalidateParentTimelineCache, (Respawner * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_InvalidateParentTimelineCache, (Respawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00908C80, void, __ctor, (Respawner * __this));
}
