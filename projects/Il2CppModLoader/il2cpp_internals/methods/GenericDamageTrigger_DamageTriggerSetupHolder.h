using namespace app;

namespace app::methods::GenericDamageTrigger_DamageTriggerSetupHolder {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (GenericDamageTrigger_DamageTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00E07780, GenericDamageTrigger_DamageTriggerSetupData *, get_NewState, (GenericDamageTrigger_DamageTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00E07830, void, CacheSetupStates, (GenericDamageTrigger_DamageTriggerSetupHolder * __this, List_1_IIndexedItem_ * cacheToPopulate));
IL2CPP_REGISTER_METHOD(0x00E07910, void, StopTimelines, (GenericDamageTrigger_DamageTriggerSetupHolder * __this));
IL2CPP_REGISTER_METHOD(0x00E07A10, void, Perform, (GenericDamageTrigger_DamageTriggerSetupHolder * __this, GenericDamageTrigger_DamageTriggerSetupData * state));
IL2CPP_REGISTER_METHOD(0x00E07BD0, void, __ctor, (GenericDamageTrigger_DamageTriggerSetupHolder * __this));
}
