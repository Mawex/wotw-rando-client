#include <interception_macros.h>

namespace app::methods::PowerLineSetup {
IL2CPP_REGISTER_METHOD(0x00C6B6C0, MoonTimeline *, get_AllDestroyedResolvedTimeline, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6B7C0, IUberState__Array *, get_AffectingUberStates, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6B8C0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6BB20, void, OnEnable, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6BF40, void, OnDisable, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6C360, void, CollectFusesOnChildren, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHOD(0x00C6C460, void, OnRestoreCheckpoint, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x04764178, PowerLineSetup_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C6C540, void, FuseDestroyed, (PowerLineSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B170, PowerLineSetup_FuseDestroyed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00C6C730, void, Apply, (PowerLineSetup * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00C6C910, bool, Validate, (PowerLineSetup * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C6C9F0, void, UpdateWireColor, (PowerLineSetup * __this, float value));
IL2CPP_REGISTER_METHOD(0x00C6CB20, IDesiredUberState *, GetRequirementsForTimeline, (PowerLineSetup * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00C6CD30, void, __ctor, (PowerLineSetup * __this));
}
