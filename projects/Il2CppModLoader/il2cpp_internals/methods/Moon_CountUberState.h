using namespace app;

namespace app::methods::Moon::CountUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60FC0, UberID *, get_GroupID, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B610B0, int32_t, get_Value, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B612B0, void, set_Value, (CountUberState * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B61350, NamedValue_1_System_Int32___Array *, get_Options, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B61370, int32_t, EvaluateConditions, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B61460, UberStateCondition *, GetUberStateCondition, (CountUberState * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B61680, String *, ToString, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B61760, float, get_GenericValue, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_GenericValue, (CountUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Nullable_1_Single_, get_VolitileGenericOverrideValue, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_VolitileGenericOverrideValue, (CountUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B61780, List_1_Moon_IUberState_ *, get_UberStates, (CountUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (CountUberState * __this));
}
