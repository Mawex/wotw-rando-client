using namespace app;

namespace app::methods::Mono::Security::Protocol::Ntlm::MessageBase {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (MessageBase * __this, int32_t messageType));
IL2CPP_REGISTER_METHOD(0x00CC59E0, NtlmFlags__Enum, get_Flags, (MessageBase * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Flags, (MessageBase * __this, NtlmFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Type, (MessageBase * __this));
IL2CPP_REGISTER_METHOD(0x02A4B130, Byte__Array *, PrepareMessage, (MessageBase * __this, int32_t messageSize));
IL2CPP_REGISTER_METHOD(0x02A4B2A0, void, Decode, (MessageBase * __this, Byte__Array * message));
IL2CPP_REGISTER_METHODINFO(0x0475F380, MessageBase_Decode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A4B5B0, bool, CheckHeader, (MessageBase * __this, Byte__Array * message));
IL2CPP_REGISTER_METHOD(0x02A4B750, void, __cctor, (MethodInfo * method));
}
