#include <interception_macros.h>

namespace app::methods::Moon::Setups::ChangeMultipleStatesOnCondition {
IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00A1B030, void, Reset, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED1A00, void, Awake, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED1BD0, void, OnDestroy, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED1DA0, void, OnCheckpointRestore, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E9F0, ChangeMultipleStatesOnCondition_OnCheckpointRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED1FB0, void, OnUpdate, (ChangeMultipleStatesOnCondition * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00ED20A0, void, PerformStateChange, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED2230, IDesiredUberState *, GetRequirementsForTimeline, (ChangeMultipleStatesOnCondition * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x00ED2490, void, OnSkipCutscene, (ChangeMultipleStatesOnCondition * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ChangeMultipleStatesOnCondition * __this));
}
