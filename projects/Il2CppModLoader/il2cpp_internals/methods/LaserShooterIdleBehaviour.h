using namespace app;

namespace app::methods::LaserShooterIdleBehaviour {
IL2CPP_REGISTER_METHOD(0x00F15310, void, OnEnter, (LaserShooterIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F15500, void, OnExit, (LaserShooterIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecute, (LaserShooterIdleBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00754B80, void, CallEndTask, (LaserShooterIdleBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477ABD0, LaserShooterIdleBehaviour_CallEndTask__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F15530, void, StartTimeline, (LaserShooterIdleBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F15570, void, StopCurrentTimeline, (LaserShooterIdleBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F155A0, void, __ctor, (LaserShooterIdleBehaviour * __this));
}
