using namespace app;

namespace app::methods::System::ParameterizedStrings {
IL2CPP_REGISTER_METHOD(0x0227C930, String *, Evaluate, (String * format, ParameterizedStrings_FormatParam__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04710188, ParameterizedStrings_Evaluate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227CC40, String *, EvaluateInternal, (String * format, int32_t * pos, ParameterizedStrings_FormatParam__Array * args, ParameterizedStrings_LowLevelStack * stack, ParameterizedStrings_FormatParam__Array * * dynamicVars, ParameterizedStrings_FormatParam__Array * * staticVars));
IL2CPP_REGISTER_METHODINFO(0x0474FD48, ParameterizedStrings_EvaluateInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020378B0, bool, AsBool, (int32_t i));
IL2CPP_REGISTER_METHOD(0x0203AB80, int32_t, AsInt, (bool b));
IL2CPP_REGISTER_METHOD(0x0227DA00, String *, StringFromAsciiBytes, (Byte__Array * buffer, int32_t offset, int32_t length));
IL2CPP_REGISTER_METHOD(0x0227DB20, int32_t, snprintf, (uint8_t * str, void * size, String * format, String * arg1));
IL2CPP_REGISTER_METHOD(0x0227DD70, int32_t, snprintf, (uint8_t * str, void * size, String * format, int32_t arg1));
IL2CPP_REGISTER_METHOD(0x0227DF10, String *, FormatPrintF, (String * format, Object * arg));
IL2CPP_REGISTER_METHODINFO(0x04782EB8, ParameterizedStrings_FormatPrintF__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227E210, ParameterizedStrings_FormatParam__Array *, GetDynamicOrStaticVariables, (uint16_t c, ParameterizedStrings_FormatParam__Array * * dynamicVars, ParameterizedStrings_FormatParam__Array * * staticVars, int32_t * index));
IL2CPP_REGISTER_METHODINFO(0x04771D58, ParameterizedStrings_GetDynamicOrStaticVariables__MethodInfo);
}
