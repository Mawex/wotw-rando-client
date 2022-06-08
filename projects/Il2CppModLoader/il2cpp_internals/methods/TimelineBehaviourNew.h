using namespace app;

namespace app::methods::TimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x010F4B70, BehaviourStatus__Enum, get_StatusWhenPlaying, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x010F4B80, bool, ShouldPauseLocomotion, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x010F4BA0, void, MoonCleanup, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x010F4BB0, void, OnBehaviourTreeInitialize, (TimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F4F30, void, AllowCancel, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04787AF8, TimelineBehaviourNew_AllowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F4F40, void, DisallowCancel, (TimelineBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04759DA8, TimelineBehaviourNew_DisallowCancel__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010F4F50, void, OnEnter, (TimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F50B0, BehaviourStatus__Enum, OnExecute, (TimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010F51D0, void, OnExit, (TimelineBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420FE0, void, __ctor, (TimelineBehaviourNew * __this));
}
