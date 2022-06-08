using namespace app;

namespace app::methods::PerformBackOutAction {
IL2CPP_REGISTER_METHOD(0x0044C0D0, void, ClearAbandonChallangeCondition, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0044C160, bool, get_IsAbandonChallangeActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0044C490, void, ActivateAbandonChallange, (ConditionUberState * abandonChallangeCondition));
IL2CPP_REGISTER_METHOD(0x0044C530, void, Perform, (PerformBackOutAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0044C690, IEnumerator *, AbandonChallange, (PerformBackOutAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C7D0, String *, GetNiceName, (PerformBackOutAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (PerformBackOutAction * __this));
}
