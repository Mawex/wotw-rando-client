using namespace app;

namespace app::methods::BuilderIdle {
IL2CPP_REGISTER_METHOD(0x00816A70, BuilderEntity *, get_m_builder, (BuilderIdle * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsOnground, (BuilderIdle * __this));
IL2CPP_REGISTER_METHOD(0x00816B50, void, Awake, (BuilderIdle * __this));
IL2CPP_REGISTER_METHOD(0x00816D00, void, OnDestroy, (BuilderIdle * __this));
IL2CPP_REGISTER_METHOD(0x00816EB0, void, LeftTree, (BuilderIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x047420E0, BuilderIdle_LeftTree__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (BuilderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (BuilderIdle * __this));
IL2CPP_REGISTER_METHOD(0x00816F90, void, PlayTimeline, (BuilderIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x008172F0, void, OnEnterTask, (BuilderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00817410, void, OnExitTask, (BuilderIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, (BuilderIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x047984B0, BuilderIdle_OnTimelineFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (BuilderIdle * __this));
}
