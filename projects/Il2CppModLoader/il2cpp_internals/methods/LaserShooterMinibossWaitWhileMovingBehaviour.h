#include <interception_macros.h>

namespace app::methods::LaserShooterMinibossWaitWhileMovingBehaviour {
IL2CPP_REGISTER_METHOD(0x00F1E150, void, OnEnter, (LaserShooterMinibossWaitWhileMovingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E1C0, void, OnExit, (LaserShooterMinibossWaitWhileMovingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E1F0, BehaviourStatus__Enum, OnExecute, (LaserShooterMinibossWaitWhileMovingBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00F1E2A0, void, StartTimeline, (LaserShooterMinibossWaitWhileMovingBehaviour * __this, MoonTimeline * timeline, Action * onStop));
IL2CPP_REGISTER_METHOD(0x00F1E1C0, void, StopCurrentTimeline, (LaserShooterMinibossWaitWhileMovingBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00F1E2E0, void, __ctor, (LaserShooterMinibossWaitWhileMovingBehaviour * __this));
}
