using namespace app;

namespace app::methods::System::ComponentModel::SingleConverter {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowHex, (SingleConverter * __this));
IL2CPP_REGISTER_METHOD(0x029ACE30, Type *, get_TargetType, (SingleConverter * __this));
IL2CPP_REGISTER_METHOD(0x029ACED0, Object *, FromString, (SingleConverter * __this, String * value, int32_t radix));
IL2CPP_REGISTER_METHOD(0x029AD000, Object *, FromString, (SingleConverter * __this, String * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x029AD0C0, Object *, FromString, (SingleConverter * __this, String * value, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x029AD180, String *, ToString, (SingleConverter * __this, Object * value, NumberFormatInfo * formatInfo));
IL2CPP_REGISTER_METHOD(0x01FE1B70, void, __ctor, (SingleConverter * __this));
}
