using namespace app;

namespace app::methods::RetaliationRuleHandler {
IL2CPP_REGISTER_METHOD(0x0090EEA0, bool, get_MeetsRetaliationConditions, (RetaliationRuleHandler * __this));
IL2CPP_REGISTER_METHOD(0x0090EEB0, void, set_MeetsRetaliationConditions, (RetaliationRuleHandler * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0090EEC0, void, OnDamageTaken, (RetaliationRuleHandler * __this, DamageResult damageResult));
IL2CPP_REGISTER_METHOD(0x0090F0F0, void, UpdateRetaliationLogic, (RetaliationRuleHandler * __this, float timeDelta));
IL2CPP_REGISTER_METHOD(0x0090F380, void, __ctor, (RetaliationRuleHandler * __this));
IL2CPP_REGISTER_METHOD(0x0090F620, void, __cctor, (MethodInfo * method));
}
