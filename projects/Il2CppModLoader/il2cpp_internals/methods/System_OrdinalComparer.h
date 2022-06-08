using namespace app;

namespace app::methods::System::OrdinalComparer {
IL2CPP_REGISTER_METHOD(0x0227C1D0, void, __ctor, (OrdinalComparer * __this, bool ignoreCase));
IL2CPP_REGISTER_METHOD(0x0227C270, int32_t, Compare, (OrdinalComparer * __this, String * x, String * y));
IL2CPP_REGISTER_METHOD(0x0227C3C0, bool, Equals, (OrdinalComparer * __this, String * x, String * y));
IL2CPP_REGISTER_METHOD(0x0227C520, int32_t, GetHashCode, (OrdinalComparer * __this, String * obj));
IL2CPP_REGISTER_METHODINFO(0x0474CCB0, OrdinalComparer_GetHashCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227C630, bool, Equals, (OrdinalComparer * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0227C6F0, int32_t, GetHashCode, (OrdinalComparer * __this));
}
