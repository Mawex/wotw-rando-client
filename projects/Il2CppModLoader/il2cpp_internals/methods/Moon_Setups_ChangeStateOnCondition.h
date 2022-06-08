#include <interception_macros.h>

namespace app::methods::Moon::Setups::ChangeStateOnCondition {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, ShouldCreateCheckpoint, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24500, void, __ctor, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00A09730, void, Reset, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24520, void, Awake, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E246F0, void, OnDestroy, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E248C0, void, OnCheckpointRestore, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x04737AB8, ChangeStateOnCondition_OnCheckpointRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24A30, void, OnUpdate, (ChangeStateOnCondition * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00E24B20, void, PerformStateChange, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24B80, IDesiredUberState *, GetRequirementsForTimeline, (ChangeStateOnCondition * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24B20, void, OnSkipCutscene, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24C90, bool, get_InvalidateParentTimelineCache, (ChangeStateOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00E24CA0, void, set_InvalidateParentTimelineCache, (ChangeStateOnCondition * __this, bool value));
}
