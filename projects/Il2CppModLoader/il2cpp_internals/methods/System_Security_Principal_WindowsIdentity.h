using namespace app;

namespace app::methods::System::Security::Principal::WindowsIdentity {
IL2CPP_REGISTER_METHOD(0x01E1CBF0, void, __ctor, (WindowsIdentity * __this, void * userToken, String * type, WindowsAccountType__Enum acctType, bool isAuthenticated));
IL2CPP_REGISTER_METHOD(0x01E1CC80, void, __ctor, (WindowsIdentity * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E1CCD0, void, __ctor, (WindowsIdentity * __this, ClaimsIdentity * claimsIdentity, void * userToken));
IL2CPP_REGISTER_METHOD(0x01E1CD80, void, Dispose, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1CE10, WindowsIdentity *, GetCurrent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E1CFC0, WindowsImpersonationContext *, Impersonate, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, String *, get_AuthenticationType, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1D010, String *, get_Name, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1D0C0, void, IDeserializationCallback_OnDeserialization, (WindowsIdentity * __this, Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0477D560, WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E1D3B0, void, ISerializable_GetObjectData, (WindowsIdentity * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E1D4F0, ClaimsIdentity *, CloneAsBase, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, void *, GetTokenInternal, (WindowsIdentity * __this));
IL2CPP_REGISTER_METHOD(0x01E1D500, void, SetToken, (WindowsIdentity * __this, void * token));
IL2CPP_REGISTER_METHODINFO(0x04745800, WindowsIdentity_SetToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, void *, GetCurrentToken, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, GetTokenName, (void * token));
IL2CPP_REGISTER_METHOD(0x01E1D610, void, __cctor, (MethodInfo * method));
}
