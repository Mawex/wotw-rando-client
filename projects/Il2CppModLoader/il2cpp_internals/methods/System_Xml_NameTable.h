using namespace app;

namespace app::methods::System::Xml::NameTable {
IL2CPP_REGISTER_METHOD(0x0199D9A0, void, __ctor, (NameTable * __this));
IL2CPP_REGISTER_METHOD(0x0199DA70, String *, Add, (NameTable * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04742480, NameTable_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199DC20, String *, Add, (NameTable * __this, Char__Array * key, int32_t start, int32_t len));
IL2CPP_REGISTER_METHOD(0x0199DE20, String *, Get, (NameTable * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04767570, NameTable_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0199DFC0, String *, AddEntry, (NameTable * __this, String * str, int32_t hashCode));
IL2CPP_REGISTER_METHOD(0x0199E1D0, void, Grow, (NameTable * __this));
IL2CPP_REGISTER_METHOD(0x0199E370, bool, TextEquals, (String * str1, Char__Array * str2, int32_t str2Start, int32_t str2Length));
}
