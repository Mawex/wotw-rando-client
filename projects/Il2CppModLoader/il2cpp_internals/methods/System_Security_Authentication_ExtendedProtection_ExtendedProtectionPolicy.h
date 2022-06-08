using namespace app;

namespace app::methods::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ExtendedProtectionPolicy * __this, PolicyEnforcement__Enum policyEnforcement));
IL2CPP_REGISTER_METHOD(0x021BC6F0, void, __ctor, (ExtendedProtectionPolicy * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0476AC50, ExtendedProtectionPolicy__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BC740, ChannelBinding *, get_CustomChannelBinding, (ExtendedProtectionPolicy * __this));
IL2CPP_REGISTER_METHODINFO(0x04758778, ExtendedProtectionPolicy_get_CustomChannelBinding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BC790, PolicyEnforcement__Enum, get_PolicyEnforcement, (ExtendedProtectionPolicy * __this));
IL2CPP_REGISTER_METHODINFO(0x04702B10, ExtendedProtectionPolicy_get_PolicyEnforcement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E16610, String *, ToString, (ExtendedProtectionPolicy * __this));
IL2CPP_REGISTER_METHOD(0x021BC7E0, void, ISerializable_GetObjectData, (ExtendedProtectionPolicy * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04766FC8, ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
}
