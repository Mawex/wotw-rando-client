#include <interception_macros.h>

namespace app::methods::Moon::CountUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, IUberStateGroup *, get_UberStateGroup, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B60FC0, UberID *, get_GroupID, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B610B0, int32_t, get_Value, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B612B0, void, set_Value, (app::CountUberState * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B61350, NamedValue_1_System_Int32___Array *, get_Options, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B61370, int32_t, EvaluateConditions, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B61460, UberStateCondition *, GetUberStateCondition, (app::CountUberState * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B61680, String *, ToString, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B61760, float, get_GenericValue, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_GenericValue, (app::CountUberState * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Nullable_1_Single_, get_VolitileGenericOverrideValue, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_VolitileGenericOverrideValue, (app::CountUberState * this_ptr, app::Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x01B61780, List_1_Moon_IUberState_ *, get_UberStates, (app::CountUberState * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (app::CountUberState * this_ptr));
}
