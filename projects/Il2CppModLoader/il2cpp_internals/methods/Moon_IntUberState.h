using namespace app;

namespace app::methods::Moon::IntUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63060, UberID *, get_GroupID, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63150, int32_t, get_Value, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63290, void, set_Value, (IntUberState * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Int32___Array *, get_Options, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63350, float, get_GenericValue, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63370, void, set_GenericValue, (IntUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (IntUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63380, void, Initialize, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B63390, String *, ToString, (IntUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (IntUberState * __this));
}
