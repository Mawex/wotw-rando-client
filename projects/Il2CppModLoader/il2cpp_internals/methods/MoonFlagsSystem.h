#include <interception_macros.h>

namespace app::methods::MoonFlagsSystem {
IL2CPP_REGISTER_METHOD(0x03121190, MoonFlagsSystem *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (MoonFlagsSystem * __this));
IL2CPP_REGISTER_METHOD(0x03121340, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x031213C0, void, SubmitHiddenToHierarchyUnmanaged, (MoonFlagsSystem * __this, GameObject * go, bool value));
IL2CPP_REGISTER_METHOD(0x03121430, void, SubmitDynamicHiddenFlag, (MoonFlagsSystem * __this, Renderer__Array * renderers, bool value));
IL2CPP_REGISTER_METHOD(0x031214B0, void, SubmitDynamicHiddenFlag, (MoonFlagsSystem * __this, Renderer * renderer, bool value));
IL2CPP_REGISTER_METHOD(0x03121610, void, SubmitStaticHiddenFlag, (MoonFlagsSystem * __this, Renderer__Array * renderers, bool value));
IL2CPP_REGISTER_METHOD(0x03121690, void, SubmitStaticHiddenFlag, (MoonFlagsSystem * __this, Renderer * renderer, bool value));
IL2CPP_REGISTER_METHOD(0x03121780, MoonFlagsSystem_ObjectState *, GetObjectState, (MoonFlagsSystem * __this, Renderer * renderer, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x03121AD0, bool, GetStaticHiddenFlag, (MoonFlagsSystem * __this, Renderer * renderer));
IL2CPP_REGISTER_METHOD(0x03121C70, void, ApplyObjectState, (MoonFlagsSystem * __this, MoonFlagsSystem_ObjectState * objectState, bool forceApply));
IL2CPP_REGISTER_METHOD(0x03121CA0, void, ApplyObjectState, (MoonFlagsSystem * __this, MoonFlagsSystem_ObjectState * objectState, bool * stateCanBeRemoved, bool forceApply));
IL2CPP_REGISTER_METHOD(0x03121F70, void, ClearStatesFor, (MoonFlagsSystem * __this, List_1_System_Int32_ * objects));
IL2CPP_REGISTER_METHOD(0x03122060, void, ClearAllStates, (MoonFlagsSystem * __this));
IL2CPP_REGISTER_METHOD(0x03122200, void, ClearState, (MoonFlagsSystem * __this, MoonFlagsSystem_ObjectState * objectState));
IL2CPP_REGISTER_METHOD(0x03122330, void, RestoreStateFor, (MoonFlagsSystem * __this, Renderer * target));
IL2CPP_REGISTER_METHOD(0x03122600, void, UpdateTrackedObjects, (MoonFlagsSystem * __this, List_1_System_Int32_ * objects, bool clearStateHolders));
IL2CPP_REGISTER_METHOD(0x03122880, void, OnUpdate, (MoonFlagsSystem * __this, float delta));
IL2CPP_REGISTER_METHOD(0x03122910, MoonFlagsSystem_ObjectState *, AcquireObjectStateFromPool, (MoonFlagsSystem * __this));
IL2CPP_REGISTER_METHOD(0x03122AC0, void, ReturnObjectStateToPool, (MoonFlagsSystem * __this, MoonFlagsSystem_ObjectState * os));
IL2CPP_REGISTER_METHOD(0x03122B60, void, __ctor, (MoonFlagsSystem * __this));
}
