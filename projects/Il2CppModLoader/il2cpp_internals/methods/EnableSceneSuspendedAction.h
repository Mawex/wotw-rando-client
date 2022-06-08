using namespace app;

namespace app::methods::EnableSceneSuspendedAction {
IL2CPP_REGISTER_METHOD(0x00BFD0E0, void, Perform, (EnableSceneSuspendedAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BFD240, IEnumerator *, EnableRoutine, (EnableSceneSuspendedAction * __this));
IL2CPP_REGISTER_METHOD(0x004C15C0, void, FlagEnabled, (EnableSceneSuspendedAction * __this, bool success));
IL2CPP_REGISTER_METHODINFO(0x04733F00, EnableSceneSuspendedAction_FlagEnabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (EnableSceneSuspendedAction * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, (EnableSceneSuspendedAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (EnableSceneSuspendedAction * __this));
}
