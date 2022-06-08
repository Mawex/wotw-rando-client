#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicenseManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LicenseManager * __this));
IL2CPP_REGISTER_METHOD(0x01FF0F20, LicenseContext *, get_CurrentContext, ());
IL2CPP_REGISTER_METHOD(0x01FF1240, void, set_CurrentContext, (LicenseContext * value));
IL2CPP_REGISTER_METHODINFO(0x04794C08, LicenseManager_set_CurrentContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF1440, LicenseUsageMode__Enum, get_UsageMode, ());
IL2CPP_REGISTER_METHOD(0x01FF1550, void, CacheProvider, (Type * type, LicenseProvider * provider));
IL2CPP_REGISTER_METHOD(0x01FF1930, Object *, CreateWithContext, (Type * type, LicenseContext * creationContext));
IL2CPP_REGISTER_METHOD(0x01FF1A00, Object *, CreateWithContext, (Type * type, LicenseContext * creationContext, Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04771E10, LicenseManager_CreateWithContext_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF1CD0, bool, GetCachedNoLicenseProvider, (Type * type));
IL2CPP_REGISTER_METHOD(0x01FF1DE0, LicenseProvider *, GetCachedProvider, (Type * type));
IL2CPP_REGISTER_METHOD(0x01FF1F50, LicenseProvider *, GetCachedProviderInstance, (Type * providerType));
IL2CPP_REGISTER_METHOD(0x01FF20C0, void *, GetLicenseInteropHelperType, ());
IL2CPP_REGISTER_METHOD(0x01FF2180, bool, IsLicensed, (Type * type));
IL2CPP_REGISTER_METHOD(0x01FF2260, bool, IsValid, (Type * type));
IL2CPP_REGISTER_METHOD(0x01FF2340, bool, IsValid, (Type * type, Object * instance, License * * license));
IL2CPP_REGISTER_METHOD(0x01FF2410, void, LockContext, (Object * contextUser));
IL2CPP_REGISTER_METHODINFO(0x0472ACB8, LicenseManager_LockContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF2600, void, UnlockContext, (Object * contextUser));
IL2CPP_REGISTER_METHODINFO(0x04792140, LicenseManager_UnlockContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF27F0, bool, ValidateInternal, (Type * type, Object * instance, bool allowExceptions, License * * license));
IL2CPP_REGISTER_METHOD(0x01FF28E0, bool, ValidateInternalRecursive, (LicenseContext * context, Type * type, Object * instance, bool allowExceptions, License * * license, String * * licenseKey));
IL2CPP_REGISTER_METHOD(0x01FF3070, void, Validate, (Type * type));
IL2CPP_REGISTER_METHODINFO(0x04713410, LicenseManager_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF3170, License *, Validate, (Type * type, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x04751DB8, LicenseManager_Validate_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF3270, void, __cctor, ());
}
