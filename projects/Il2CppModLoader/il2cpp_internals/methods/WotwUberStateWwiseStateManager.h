#include <interception_macros.h>

namespace app::methods::WotwUberStateWwiseStateManager {
IL2CPP_REGISTER_METHOD(0x00590130, void, CopyDataFromMap, (WotwUberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x005904C0, void, GenerateResetState, (WotwUberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x005907F0, void, ResetWwiseStates, (WotwUberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x00590CD0, void, PopulateAffectedStates, (WotwUberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x005918A0, void, UpdateAbilitiesCallback, (WotwUberStateWwiseStateManager * __this, AbilityType__Enum type, bool hasAbility));
IL2CPP_REGISTER_METHODINFO(0x04706138, WotwUberStateWwiseStateManager_UpdateAbilitiesCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00591BB0, void, UpdateWwiseStates, (WotwUberStateWwiseStateManager * __this, List_1_System_UInt32_ * statesSetThisUpdate));
IL2CPP_REGISTER_METHOD(0x00591F10, void, OnDestroy, (WotwUberStateWwiseStateManager * __this));
IL2CPP_REGISTER_METHOD(0x00592160, void, __ctor, (WotwUberStateWwiseStateManager * __this));
}
