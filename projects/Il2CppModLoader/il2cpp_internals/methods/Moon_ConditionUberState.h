#include <interception_macros.h>

namespace app::methods::Moon::ConditionUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, IUberStateGroup *, get_UberStateGroup, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B603A0, UberID *, get_GroupID, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60490, bool, get_Value, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B605E0, void, set_Value, (app::ConditionUberState * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_DefaultBooleanValue, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_DefaultBooleanValue, (app::ConditionUberState * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00E257C0, NamedValue_1_System_Boolean___Array *, get_Options, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60680, bool, EvaluateConditions, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60780, float, GetConditionProgress, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B608D0, int32_t, GetProgressCount, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B609B0, UberStateCondition *, GetUberStateCondition, (app::ConditionUberState * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60BD0, String *, ToString, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60CB0, float, get_GenericValue, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_GenericValue, (app::ConditionUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x01B60CD0, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60CE0, void, set_VolitileGenericOverrideValue, (app::ConditionUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B60CF0, List_1_Moon_IUberState_ *, get_UberStates, (app::ConditionUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::ConditionUberState * this_ptr));
}
