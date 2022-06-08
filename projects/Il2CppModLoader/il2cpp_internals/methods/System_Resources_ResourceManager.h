#include <interception_macros.h>

namespace app::methods::System::Resources::ResourceManager {
IL2CPP_REGISTER_METHOD(0x01A84750, void, Init, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x01A84920, void, __ctor, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x01A84C00, void, __ctor, (ResourceManager * __this, String * baseName, Assembly * assembly));
IL2CPP_REGISTER_METHODINFO(0x047324F0, ResourceManager__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A84F20, void, __ctor, (ResourceManager * __this, Type * resourceSource));
IL2CPP_REGISTER_METHODINFO(0x047026A0, ResourceManager__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A85280, void, OnDeserializing, (ResourceManager * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01A852A0, void, OnDeserialized, (ResourceManager * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01A85740, void, OnSerializing, (ResourceManager * __this, StreamingContext ctx));
IL2CPP_REGISTER_METHOD(0x01A858A0, void, CommonAssemblyInit, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_BaseName, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IgnoreCase, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x003FF2B0, UltimateResourceFallbackLocation__Enum, get_FallbackLocation, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x01A85D60, String *, GetResourceFileName, (ResourceManager * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01A85F80, ResourceSet *, GetFirstResourceSet, (ResourceManager * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01A864C0, ResourceSet *, GetResourceSet, (ResourceManager * __this, CultureInfo * culture, bool createIfNotExists, bool tryParents));
IL2CPP_REGISTER_METHODINFO(0x04706520, ResourceManager_GetResourceSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A86890, ResourceSet *, InternalGetResourceSet, (ResourceManager * __this, CultureInfo * culture, bool createIfNotExists, bool tryParents));
IL2CPP_REGISTER_METHOD(0x01A868C0, ResourceSet *, InternalGetResourceSet, (ResourceManager * __this, CultureInfo * requestedCulture, bool createIfNotExists, bool tryParents, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x01A86FF0, void, AddResourceSet, (Dictionary_2_System_String_System_Resources_ResourceSet_ * localResourceSets, String * cultureName, ResourceSet * * rs));
IL2CPP_REGISTER_METHOD(0x01A87210, Version *, GetSatelliteContractVersion, (Assembly * a));
IL2CPP_REGISTER_METHODINFO(0x04763538, ResourceManager_GetSatelliteContractVersion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A87850, CultureInfo *, GetNeutralResourcesLanguage, (Assembly * a));
IL2CPP_REGISTER_METHOD(0x01A87870, bool, CompareNames, (String * asmTypeName1, String * typeName2, AssemblyName * asmName2));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAppXConfiguration, (ResourceManager * __this));
IL2CPP_REGISTER_METHOD(0x01A87DA0, String *, GetString, (ResourceManager * __this, String * name, CultureInfo * culture));
IL2CPP_REGISTER_METHODINFO(0x0472DCC8, ResourceManager_GetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88280, void, __cctor, ());
}
