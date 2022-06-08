using namespace app;

namespace app::methods::Moon::FloatUberState {
IL2CPP_REGISTER_METHOD(0x002FB930, UberID *, get_StateID, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, IUberStateGroup *, get_UberStateGroup, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B62180, UberID *, get_GroupID, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B62270, float, get_Value, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B623B0, void, set_Value, (FloatUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B5FE20, NamedValue_1_System_Single___Array *, get_Options, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B62470, float, get_GenericValue, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B62480, void, set_GenericValue, (FloatUberState * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Single_, get_VolitileGenericOverrideValue, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_VolitileGenericOverrideValue, (FloatUberState * __this, Nullable_1_Single_ value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B62490, void, Initialize, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B624A0, String *, ToString, (FloatUberState * __this));
IL2CPP_REGISTER_METHOD(0x01B5FF80, void, __ctor, (FloatUberState * __this));
}
