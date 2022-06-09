#include <interception_macros.h>

namespace app::methods::System::Security::Principal::WindowsIdentity {
    IL2CPP_REGISTER_METHOD(0x01E1CBF0, void, __ctor_1, (app::WindowsIdentity * this_ptr, void * user_token, app::String * type, app::WindowsAccountType__Enum acct_type, bool is_authenticated));
    IL2CPP_REGISTER_METHOD(0x01E1CC80, void, __ctor_2, (app::WindowsIdentity * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01E1CCD0, void, __ctor_3, (app::WindowsIdentity * this_ptr, app::ClaimsIdentity * claims_identity, void * user_token));
    IL2CPP_REGISTER_METHOD(0x01E1CD80, void, Dispose, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E1CE10, app::WindowsIdentity *, GetCurrent, ());
    IL2CPP_REGISTER_METHOD(0x01E1CFC0, app::WindowsImpersonationContext *, Impersonate, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String *, get_AuthenticationType, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E1D010, app::String *, get_Name, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E1D0C0, void, IDeserializationCallback_OnDeserialization, (app::WindowsIdentity * this_ptr, app::Object * sender));
    IL2CPP_REGISTER_METHODINFO(0x0477D560, WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01E1D3B0, void, ISerializable_GetObjectData, (app::WindowsIdentity * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01E1D4F0, app::ClaimsIdentity *, CloneAsBase, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBBE0, void *, GetTokenInternal, (app::WindowsIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E1D500, void, SetToken, (app::WindowsIdentity * this_ptr, void * token));
    IL2CPP_REGISTER_METHODINFO(0x04745800, WindowsIdentity_SetToken__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00420EE0, void *, GetCurrentToken, ());
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String *, GetTokenName, (void * token));
    IL2CPP_REGISTER_METHOD(0x01E1D610, void, __cctor, ());
}
