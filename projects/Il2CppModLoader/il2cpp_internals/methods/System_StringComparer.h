using namespace app;

namespace app::methods::System::StringComparer {
IL2CPP_REGISTER_METHOD(0x0243D830, StringComparer *, get_InvariantCultureIgnoreCase, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0243D8D0, StringComparer *, get_CurrentCultureIgnoreCase, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0243DA60, StringComparer *, get_Ordinal, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0243DB00, StringComparer *, get_OrdinalIgnoreCase, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0243DBA0, StringComparer *, Create, (CultureInfo * culture, bool ignoreCase));
IL2CPP_REGISTER_METHODINFO(0x04719C30, StringComparer_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0243DD30, int32_t, Compare, (StringComparer * __this, Object * x, Object * y));
IL2CPP_REGISTER_METHODINFO(0x047902A8, StringComparer_Compare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0243DE90, bool, Equals, (StringComparer * __this, Object * x, Object * y));
IL2CPP_REGISTER_METHOD(0x0243DF90, int32_t, GetHashCode, (StringComparer * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04719098, StringComparer_GetHashCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StringComparer * __this));
IL2CPP_REGISTER_METHOD(0x0243E0A0, void, __cctor, (MethodInfo * method));
}
