using namespace app;

namespace app::methods::System::Diagnostics::Tracing::ManifestBuilder {
IL2CPP_REGISTER_METHOD(0x019FF750, void, __ctor, (ManifestBuilder * __this, String * providerName, Guid providerGuid, String * dllName, ResourceManager * resources, EventManifestOptions__Enum flags));
IL2CPP_REGISTER_METHOD(0x01A000C0, void, AddOpcode, (ManifestBuilder * __this, String * name, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A004F0, void, AddTask, (ManifestBuilder * __this, String * name, int32_t value));
IL2CPP_REGISTER_METHOD(0x01A009C0, void, AddKeyword, (ManifestBuilder * __this, String * name, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01A01180, void, StartEvent, (ManifestBuilder * __this, String * eventName, EventAttribute * eventAttribute));
IL2CPP_REGISTER_METHOD(0x01A01630, void, AddEventParameter, (ManifestBuilder * __this, Type * type, String * name));
IL2CPP_REGISTER_METHOD(0x01A01E70, void, EndEvent, (ManifestBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01A02140, Byte__Array *, CreateManifest, (ManifestBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, IList_1_System_String_ *, get_Errors, (ManifestBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01A02180, void, ManifestError, (ManifestBuilder * __this, String * msg, bool runtimeCritical));
IL2CPP_REGISTER_METHODINFO(0x04716DC8, ManifestBuilder_ManifestError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A02270, String *, CreateManifestString, (ManifestBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01A043B0, void, WriteNameAndMessageAttribs, (ManifestBuilder * __this, StringBuilder * stringBuilder, String * elementName, String * name));
IL2CPP_REGISTER_METHOD(0x01A044C0, void, WriteMessageAttrib, (ManifestBuilder * __this, StringBuilder * stringBuilder, String * elementName, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x01A047B0, String *, GetLocalizedMessage, (ManifestBuilder * __this, String * key, CultureInfo * ci, bool etwFormat));
IL2CPP_REGISTER_METHOD(0x01A04970, List_1_System_Globalization_CultureInfo_ *, GetSupportedCultures, (ResourceManager * resources));
IL2CPP_REGISTER_METHOD(0x01A04C40, String *, GetLevelName, (EventLevel__Enum level));
IL2CPP_REGISTER_METHOD(0x01A04D10, String *, GetTaskName, (ManifestBuilder * __this, EventTask__Enum task, String * eventName));
IL2CPP_REGISTER_METHOD(0x01A04F70, String *, GetOpcodeName, (ManifestBuilder * __this, EventOpcode__Enum opcode, String * eventName));
IL2CPP_REGISTER_METHOD(0x01A05220, String *, GetKeywords, (ManifestBuilder * __this, uint64_t keywords, String * eventName));
IL2CPP_REGISTER_METHOD(0x01A05510, String *, GetTypeName, (ManifestBuilder * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01A05960, void, UpdateStringBuilder, (StringBuilder * * stringBuilder, String * eventMessage, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x01A05B00, String *, TranslateToManifestConvention, (ManifestBuilder * __this, String * eventMessage, String * evtName));
IL2CPP_REGISTER_METHOD(0x01A06A70, int32_t, TranslateIndexToManifestConvention, (ManifestBuilder * __this, int32_t idx, String * evtName));
}
