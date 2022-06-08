using namespace app;

namespace app::methods::System::CultureAwareComparer {
IL2CPP_REGISTER_METHOD(0x028A0750, void, __ctor, (CultureAwareComparer * __this, CultureInfo * culture, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x028A0830, int32_t, Compare, (CultureAwareComparer * __this, String * x, String * y));
IL2CPP_REGISTER_METHOD(0x028A0890, bool, Equals, (CultureAwareComparer * __this, String * x, String * y));
IL2CPP_REGISTER_METHOD(0x028A08F0, int32_t, GetHashCode, (CultureAwareComparer * __this, String * obj));
IL2CPP_REGISTER_METHODINFO(0x04771020, CultureAwareComparer_GetHashCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028A0AC0, bool, Equals, (CultureAwareComparer * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x028A0BB0, int32_t, GetHashCode, (CultureAwareComparer * __this));
}
