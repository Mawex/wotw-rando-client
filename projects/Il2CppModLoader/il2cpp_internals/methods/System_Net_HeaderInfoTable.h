using namespace app;

namespace app::methods::System::Net::HeaderInfoTable {
IL2CPP_REGISTER_METHOD(0x01D38EE0, String__Array *, ParseSingleValue, (String * value));
IL2CPP_REGISTER_METHODINFO(0x04702BF0, HeaderInfoTable_ParseSingleValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D38FD0, String__Array *, ParseMultiValue, (String * value));
IL2CPP_REGISTER_METHODINFO(0x04743190, HeaderInfoTable_ParseMultiValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D39420, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01D3D1B0, HeaderInfo *, get_Item, (HeaderInfoTable * __this, String * name));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (HeaderInfoTable * __this));
}
