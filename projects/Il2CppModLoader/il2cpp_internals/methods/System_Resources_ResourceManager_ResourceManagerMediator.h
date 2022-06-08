#include <interception_macros.h>

namespace app::methods::System::Resources::ResourceManager_ResourceManagerMediator {
IL2CPP_REGISTER_METHOD(0x01A88460, void, __ctor, (ResourceManager_ResourceManagerMediator * __this, ResourceManager * rm));
IL2CPP_REGISTER_METHODINFO(0x0476DA10, ResourceManager_ResourceManagerMediator__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88520, String *, get_ModuleDir, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A88540, Type *, get_LocationInfo, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A88560, Type *, get_UserResourceSet, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01052DF0, String *, get_BaseNameField, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x00824120, CultureInfo *, get_NeutralResourcesCulture, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01869F10, String *, GetResourceFileName, (ResourceManager_ResourceManagerMediator * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01A88580, bool, get_LookedForSatelliteContractVersion, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A885A0, void, set_LookedForSatelliteContractVersion, (ResourceManager_ResourceManagerMediator * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01A885C0, Version *, get_SatelliteContractVersion, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A885E0, void, set_SatelliteContractVersion, (ResourceManager_ResourceManagerMediator * __this, Version * value));
IL2CPP_REGISTER_METHOD(0x01A88600, Version *, ObtainSatelliteContractVersion, (ResourceManager_ResourceManagerMediator * __this, Assembly * a));
IL2CPP_REGISTER_METHOD(0x01A886A0, UltimateResourceFallbackLocation__Enum, get_FallbackLoc, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x010648A0, RuntimeAssembly *, get_CallingAssembly, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A886C0, RuntimeAssembly *, get_MainAssembly, (ResourceManager_ResourceManagerMediator * __this));
IL2CPP_REGISTER_METHOD(0x01A887A0, String *, get_BaseName, (ResourceManager_ResourceManagerMediator * __this));
}
