#include <interception_macros.h>

namespace app::methods::System::Resources::ManifestBasedResourceGroveler {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ManifestBasedResourceGroveler * __this, ResourceManager_ResourceManagerMediator * mediator));
IL2CPP_REGISTER_METHOD(0x01A814A0, ResourceSet *, GrovelForResourceSet, (ManifestBasedResourceGroveler * __this, CultureInfo * culture, Dictionary_2_System_String_System_Resources_ResourceSet_ * localResourceSets, bool tryParents, bool createIfNotExists, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x01A818D0, CultureInfo *, UltimateFallbackFixup, (ManifestBasedResourceGroveler * __this, CultureInfo * lookForCulture));
IL2CPP_REGISTER_METHOD(0x01A81AB0, CultureInfo *, GetNeutralResourcesLanguage, (Assembly * a, UltimateResourceFallbackLocation__Enum * fallbackLocation));
IL2CPP_REGISTER_METHODINFO(0x04778880, ManifestBasedResourceGroveler_GetNeutralResourcesLanguage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A81DD0, ResourceSet *, CreateResourceSet, (ManifestBasedResourceGroveler * __this, Stream * store, Assembly * assembly));
IL2CPP_REGISTER_METHODINFO(0x0473DC88, ManifestBasedResourceGroveler_CreateResourceSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A828A0, Stream *, GetManifestResourceStream, (ManifestBasedResourceGroveler * __this, RuntimeAssembly * satellite, String * fileName, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x01A82A40, Stream *, CaseInsensitiveManifestResourceStreamLookup, (ManifestBasedResourceGroveler * __this, RuntimeAssembly * satellite, String * name));
IL2CPP_REGISTER_METHODINFO(0x04729D98, ManifestBasedResourceGroveler_CaseInsensitiveManifestResourceStreamLookup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A82F60, RuntimeAssembly *, GetSatelliteAssembly, (ManifestBasedResourceGroveler * __this, CultureInfo * lookForCulture, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x01A83240, bool, CanUseDefaultResourceClasses, (ManifestBasedResourceGroveler * __this, String * readerTypeName, String * resSetTypeName));
IL2CPP_REGISTER_METHOD(0x01A834C0, String *, GetSatelliteAssemblyName, (ManifestBasedResourceGroveler * __this));
IL2CPP_REGISTER_METHOD(0x01A83590, void, HandleSatelliteMissing, (ManifestBasedResourceGroveler * __this));
IL2CPP_REGISTER_METHODINFO(0x047719D8, ManifestBasedResourceGroveler_HandleSatelliteMissing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A83B10, void, HandleResourceStreamMissing, (ManifestBasedResourceGroveler * __this, String * fileName));
IL2CPP_REGISTER_METHODINFO(0x047192F0, ManifestBasedResourceGroveler_HandleResourceStreamMissing__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A83EE0, bool, GetNeutralResourcesLanguageAttribute, (Assembly * assembly, String * * cultureName, int16_t * fallbackLocation));
}
