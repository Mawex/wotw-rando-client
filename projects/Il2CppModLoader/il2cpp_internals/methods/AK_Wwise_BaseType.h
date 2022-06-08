using namespace app;

namespace app::methods::AK::Wwise::BaseType {
IL2CPP_REGISTER_METHOD(0x026C1570, String *, get_Name, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x026C1620, uint32_t, get_Id, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x026C1730, void, set_Id, (BaseType * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C1740, uint32_t, GetId, (BaseType * __this, Object_1 * context, String * contextMessage));
IL2CPP_REGISTER_METHOD(0x026C1B40, uint32_t, get_GuidHash, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x026C1B80, bool, IsValid, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x026C1C40, bool, Validate, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Verify, (BaseType * __this, AKRESULT__Enum result));
IL2CPP_REGISTER_METHOD(0x026C1C60, String *, ToString, (BaseType * __this));
IL2CPP_REGISTER_METHOD(0x026C1D40, bool, Equals, (BaseType * __this, BaseType * other));
IL2CPP_REGISTER_METHOD(0x026C1D90, void, __ctor, (BaseType * __this));
}
