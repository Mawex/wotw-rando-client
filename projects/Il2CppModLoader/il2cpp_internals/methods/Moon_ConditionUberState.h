using namespace app;

namespace app::methods::Moon::ConditionUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, IUberStateGroup *, get_UberStateGroup, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B603A0, UberID *, get_GroupID, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60490, bool, get_Value, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B605E0, void, set_Value, (ConditionUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_DefaultBooleanValue, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_DefaultBooleanValue, (ConditionUberState * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E257C0, NamedValue_1_System_Boolean___Array *, get_Options, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60680, bool, EvaluateConditions, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60780, float, GetConditionProgress, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B608D0, int32_t, GetProgressCount, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B609B0, UberStateCondition *, GetUberStateCondition, (ConditionUberState * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60BD0, String *, ToString, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60CB0, float, get_GenericValue, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_GenericValue, (ConditionUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B60CD0, Nullable_1_Single_, get_VolitileGenericOverrideValue, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B60CE0, void, set_VolitileGenericOverrideValue, (ConditionUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B60CF0, List_1_Moon_IUberState_ *, get_UberStates, (ConditionUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (ConditionUberState * __this));
}
