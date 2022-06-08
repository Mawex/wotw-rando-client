using namespace app;

namespace app::methods::System::Security::SecurityDocument {
IL2CPP_REGISTER_METHOD(0x01E1DF90, void, __ctor, (SecurityDocument * __this, int32_t numData));
IL2CPP_REGISTER_METHOD(0x01E1E030, void, GuaranteeSize, (SecurityDocument * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x01E1E120, void, AddString, (SecurityDocument * __this, String * str, int32_t * position));
IL2CPP_REGISTER_METHOD(0x01E1E2C0, void, AppendString, (SecurityDocument * __this, String * str, int32_t * position));
IL2CPP_REGISTER_METHODINFO(0x04730B38, SecurityDocument_AppendString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1E400, int32_t, EncodedStringSize, (String * str));
IL2CPP_REGISTER_METHOD(0x01E1E420, String *, GetString, (SecurityDocument * __this, int32_t * position, bool bCreate));
IL2CPP_REGISTER_METHOD(0x01E1E8A0, void, AddToken, (SecurityDocument * __this, uint8_t b, int32_t * position));
IL2CPP_REGISTER_METHOD(0x01E1E910, SecurityElement *, GetRootElement, (SecurityDocument * __this));
IL2CPP_REGISTER_METHOD(0x01E1E940, SecurityElement *, GetElement, (SecurityDocument * __this, int32_t position, bool bCreate));
IL2CPP_REGISTER_METHOD(0x01E1E960, SecurityElement *, InternalGetElement, (SecurityDocument * __this, int32_t * position, bool bCreate));
IL2CPP_REGISTER_METHODINFO(0x04724DA8, SecurityDocument_InternalGetElement__MethodInfo);
}
