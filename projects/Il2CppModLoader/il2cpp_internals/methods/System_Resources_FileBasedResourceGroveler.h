using namespace app;

namespace app::methods::System::Resources::FileBasedResourceGroveler {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FileBasedResourceGroveler * __this, ResourceManager_ResourceManagerMediator * mediator));
IL2CPP_REGISTER_METHOD(0x02699B70, ResourceSet *, GrovelForResourceSet, (FileBasedResourceGroveler * __this, CultureInfo * culture, Dictionary_2_System_String_System_Resources_ResourceSet_ * localResourceSets, bool tryParents, bool createIfNotExists, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04741D00, FileBasedResourceGroveler_GrovelForResourceSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0269A0D0, String *, FindResourceFile, (FileBasedResourceGroveler * __this, CultureInfo * culture, String * fileName));
IL2CPP_REGISTER_METHOD(0x0269A200, ResourceSet *, CreateResourceSet, (FileBasedResourceGroveler * __this, String * file));
IL2CPP_REGISTER_METHODINFO(0x04727ED8, FileBasedResourceGroveler_CreateResourceSet__MethodInfo);
}
