#include <interception_macros.h>

namespace app::methods::HornBugBossTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x00B688F0, void, OnEntityInitialized, (HornBugBossTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00B68AD0, void, Flip, (HornBugBossTimelineBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473BA00, HornBugBossTimelineBehaviour_Flip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, RootMotionModifier, (HornBugBossTimelineBehaviour * __this, Vector3 motion));
IL2CPP_REGISTER_METHOD(0x00B68B70, void, OnEnter, (HornBugBossTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B68ED0, BehaviourStatus__Enum, OnExecute, (HornBugBossTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B68FA0, void, OnStopTimeline, (HornBugBossTimelineBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D3D8, HornBugBossTimelineBehaviour_OnStopTimeline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B69160, void, OnExit, (HornBugBossTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B65470, void, __ctor, (HornBugBossTimelineBehaviour * __this));
}
