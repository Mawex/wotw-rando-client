using namespace app;

namespace app::methods::Moon::ContinuousIntegration::VariablesProvider {
IL2CPP_REGISTER_METHOD(0x0318EC30, Dictionary_2_System_String_System_String_ *, get_Arguments, (VariablesProvider * __this));
IL2CPP_REGISTER_METHOD(0x0318EDE0, String *, GetVariableRaw, (VariablesProvider * __this, String * key));
IL2CPP_REGISTER_METHOD(0x0318EDF0, String *, GetArgumentRaw, (VariablesProvider * __this, String * key));
IL2CPP_REGISTER_METHOD(0x0318EEF0, Dictionary_2_System_String_System_String_ *, ParseArguments, (VariablesProvider * __this, String__Array * args));
IL2CPP_REGISTER_METHOD(0x0318F6B0, bool, HasVariable, (VariablesProvider * __this, String * key));
IL2CPP_REGISTER_METHOD(0x0318F6E0, bool, HasArgument, (VariablesProvider * __this, String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (VariablesProvider * __this));
IL2CPP_REGISTER_METHOD(0x015EF8E0, Object *, GetVariable, (VariablesProvider * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x0478A830, VariablesProvider_GetVariable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0154F690, void, ReadVariable, (VariablesProvider * __this, String * key, Object * * collector));
IL2CPP_REGISTER_METHODINFO(0x0478CE40, VariablesProvider_ReadVariable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0154F420, void, ReadArgument, (VariablesProvider * __this, String * key, Object * * collector));
}
