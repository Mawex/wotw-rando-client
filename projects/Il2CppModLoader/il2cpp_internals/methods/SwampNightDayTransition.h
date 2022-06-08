using namespace app;

namespace app::methods::SwampNightDayTransition {
IL2CPP_REGISTER_METHOD(0x00675960, bool, get_DayTime, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00675AE0, bool, get_NightTime, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_InvalidateParentTimelineCache, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00675C70, void, set_InvalidateParentTimelineCache, (SwampNightDayTransition * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00675C80, void, OnValidate, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00675D60, void, Awake, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00676000, void, OnDestroy, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x006761A0, void, FixedUpdate, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x006761B0, bool, DayTimeCondition, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00676310, void, UpdateStateBasedOnCondition, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x006761A0, void, OnSceneStartLateAfterSerialize, (SwampNightDayTransition * __this, SceneRoot * root));
IL2CPP_REGISTER_METHODINFO(0x04794118, SwampNightDayTransition_OnSceneStartLateAfterSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00676720, void, SetupNightTime, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x006769C0, void, SetupDayTime, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x00676C60, void, SetupPhysics, (SwampNightDayTransition * __this, String * timeStateName));
IL2CPP_REGISTER_METHOD(0x00676DD0, GameObject__Array *, GetDynamicGraphicTargets, (SwampNightDayTransition * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SwampNightDayTransition * __this));
}
