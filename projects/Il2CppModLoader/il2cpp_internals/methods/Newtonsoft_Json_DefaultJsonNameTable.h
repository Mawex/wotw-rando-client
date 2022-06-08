using namespace app;

namespace app::methods::Newtonsoft::Json::DefaultJsonNameTable {
IL2CPP_REGISTER_METHOD(0x01A63F40, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01A63FF0, void, __ctor, (DefaultJsonNameTable * __this));
IL2CPP_REGISTER_METHOD(0x01A64080, String *, Get, (DefaultJsonNameTable * __this, Char__Array * key, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x01A642A0, String *, Add, (DefaultJsonNameTable * __this, String * key));
IL2CPP_REGISTER_METHODINFO(0x04717610, DefaultJsonNameTable_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A64480, String *, AddEntry, (DefaultJsonNameTable * __this, String * str, int32_t hashCode));
IL2CPP_REGISTER_METHOD(0x01A64690, void, Grow, (DefaultJsonNameTable * __this));
IL2CPP_REGISTER_METHOD(0x0199E370, bool, TextEquals, (String * str1, Char__Array * str2, int32_t str2Start, int32_t str2Length));
}
