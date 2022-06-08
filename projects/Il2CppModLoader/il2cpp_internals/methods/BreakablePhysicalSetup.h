#include <interception_macros.h>

namespace app::methods::BreakablePhysicalSetup {
IL2CPP_REGISTER_METHOD(0x00D4C460, bool, get_IsBridgeBroken, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4C600, void, Awake, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4CC50, void, OnDestroy, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4CCF0, void, OnEnable, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4CDB0, void, OnDisable, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4CE70, void, Start, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4D0C0, void, OnUpdate, (BreakablePhysicalSetup * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00D4D400, void, StartBreaking, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4D530, void, BreakJoints, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x0471ED90, BreakablePhysicalSetup_BreakJoints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D4D840, void, DisableManager, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHODINFO(0x04778090, BreakablePhysicalSetup_DisableManager__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00D4D860, void, StopTransitions, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4DA20, void, Apply, (BreakablePhysicalSetup * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00D4DA30, IUberState__Array *, get_AffectingUberStates, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_AllTargets, (BreakablePhysicalSetup * __this, List_1_UnityEngine_GameObject_ * value));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (BreakablePhysicalSetup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, SuspendableMask__Enum, get_Mask, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4DBA0, void, set_Mask, (BreakablePhysicalSetup * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4DBB0, void, ResetToOriginalState, (BreakablePhysicalSetup * __this));
IL2CPP_REGISTER_METHOD(0x00D4DE80, void, __ctor, (BreakablePhysicalSetup * __this));
}
