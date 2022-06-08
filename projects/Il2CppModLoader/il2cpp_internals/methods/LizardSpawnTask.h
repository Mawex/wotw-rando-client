#include <interception_macros.h>

namespace app::methods::LizardSpawnTask {
IL2CPP_REGISTER_METHOD(0x00FB24F0, void, OnEnterTask, (LizardSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (LizardSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FB2660, void, StartSpawnTimeline, (LizardSpawnTask * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnSpawningFinnished, (LizardSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x0470BD90, LizardSpawnTask_OnSpawningFinnished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (LizardSpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x006B38D0, void, __ctor, (LizardSpawnTask * __this));
}
