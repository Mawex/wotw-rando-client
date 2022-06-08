using namespace app;

namespace app::methods::System::ComponentModel::LicenseManager_LicenseInteropHelper {
IL2CPP_REGISTER_METHOD(0x01FF34B0, Object *, AllocateAndValidateLicense, (RuntimeTypeHandle rth, void * bstrKey, int32_t fDesignTime));
IL2CPP_REGISTER_METHODINFO(0x047892A0, LicenseManager_LicenseInteropHelper_AllocateAndValidateLicense__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FF37A0, int32_t, RequestLicKey, (RuntimeTypeHandle rth, void * * pbstrKey));
IL2CPP_REGISTER_METHOD(0x01FF3940, void, GetLicInfo, (LicenseManager_LicenseInteropHelper * __this, RuntimeTypeHandle rth, int32_t * pRuntimeKeyAvail, int32_t * pLicVerified));
IL2CPP_REGISTER_METHOD(0x01FF3D10, void, GetCurrentContextInfo, (LicenseManager_LicenseInteropHelper * __this, int32_t * fDesignTime, void * * bstrKey, RuntimeTypeHandle rth));
IL2CPP_REGISTER_METHOD(0x01FF3EC0, void, SaveKeyInCurrentContext, (LicenseManager_LicenseInteropHelper * __this, void * bstrKey));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LicenseManager_LicenseInteropHelper * __this));
}
