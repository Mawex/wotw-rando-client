#include <interception_macros.h>

namespace app::methods::System::Resources::ResourceReader {
IL2CPP_REGISTER_METHOD(0x01A887D0, void, __ctor, (ResourceReader * __this, Stream * stream, Dictionary_2_System_String_System_Resources_ResourceLocator_ * resCache));
IL2CPP_REGISTER_METHOD(0x01A88990, void, Close, (ResourceReader * __this));
IL2CPP_REGISTER_METHOD(0x01A88990, void, Dispose, (ResourceReader * __this));
IL2CPP_REGISTER_METHOD(0x01A889F0, void, Dispose, (ResourceReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A88A50, int32_t, ReadUnalignedI4, (int32_t * p));
IL2CPP_REGISTER_METHOD(0x01A88A70, void, SkipString, (ResourceReader * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A530, ResourceReader_SkipString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88BA0, int32_t, GetNameHash, (ResourceReader * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A88C20, int32_t, GetNamePosition, (ResourceReader * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04710DC8, ResourceReader_GetNamePosition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88DB0, IEnumerator *, IEnumerable_GetEnumerator, (ResourceReader * __this));
IL2CPP_REGISTER_METHOD(0x01A88DC0, IDictionaryEnumerator *, GetEnumerator, (ResourceReader * __this));
IL2CPP_REGISTER_METHODINFO(0x04720F38, ResourceReader_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88F60, ResourceReader_ResourceEnumerator *, GetEnumeratorInternal, (ResourceReader * __this));
IL2CPP_REGISTER_METHOD(0x01A890B0, int32_t, FindPosForResource, (ResourceReader * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04721DC0, ResourceReader_FindPosForResource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A89540, bool, CompareStringEqualsName, (ResourceReader * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04723EF0, ResourceReader_CompareStringEqualsName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A89890, String *, AllocateStringForNameIndex, (ResourceReader * __this, int32_t index, int32_t * dataOffset));
IL2CPP_REGISTER_METHODINFO(0x04729690, ResourceReader_AllocateStringForNameIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A090, Object *, GetValueForNameIndex, (ResourceReader * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04746318, ResourceReader_GetValueForNameIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A390, String *, LoadString, (ResourceReader * __this, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x0476C700, ResourceReader_LoadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A6C0, Object *, LoadObject, (ResourceReader * __this, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01A8A6F0, Object *, LoadObject, (ResourceReader * __this, int32_t pos, ResourceTypeCode__Enum * typeCode));
IL2CPP_REGISTER_METHOD(0x01A8A7D0, Object *, LoadObjectV1, (ResourceReader * __this, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x0471D1D0, ResourceReader_LoadObjectV1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A8F0, Object *, _LoadObjectV1, (ResourceReader * __this, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01A8B0B0, Object *, LoadObjectV2, (ResourceReader * __this, int32_t pos, ResourceTypeCode__Enum * typeCode));
IL2CPP_REGISTER_METHODINFO(0x0479A168, ResourceReader_LoadObjectV2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8B1E0, Object *, _LoadObjectV2, (ResourceReader * __this, int32_t pos, ResourceTypeCode__Enum * typeCode));
IL2CPP_REGISTER_METHODINFO(0x04795C60, ResourceReader__LoadObjectV2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8BE50, Object *, DeserializeObject, (ResourceReader * __this, int32_t typeIndex));
IL2CPP_REGISTER_METHODINFO(0x0478C350, ResourceReader_DeserializeObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8C060, void, ReadResources, (ResourceReader * __this));
IL2CPP_REGISTER_METHODINFO(0x04776DC8, ResourceReader_ReadResources__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8C260, void, _ReadResources, (ResourceReader * __this));
IL2CPP_REGISTER_METHODINFO(0x04702900, ResourceReader__ReadResources__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8CD20, RuntimeType *, FindType, (ResourceReader * __this, int32_t typeIndex));
IL2CPP_REGISTER_METHODINFO(0x0473BFD0, ResourceReader_FindType__MethodInfo);
}
