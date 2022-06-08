#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectMap {
IL2CPP_REGISTER_METHOD(0x01D93850, void, __ctor, (ObjectMap * __this, String * objectName, Type * objectType, String__Array * memberNames, ObjectReader * objectReader, int32_t objectId, BinaryAssemblyInfo * assemblyInfo));
IL2CPP_REGISTER_METHOD(0x01D93B40, void, __ctor, (ObjectMap * __this, String * objectName, String__Array * memberNames, BinaryTypeEnum__Enum__Array * binaryTypeEnumA, Object__Array * typeInformationA, Int32__Array * memberAssemIds, ObjectReader * objectReader, int32_t objectId, BinaryAssemblyInfo * assemblyInfo, SizedArray * assemIdToAssemblyTable));
IL2CPP_REGISTER_METHODINFO(0x047666A8, ObjectMap__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D93F90, ReadObjectInfo *, CreateObjectInfo, (ObjectMap * __this, SerializationInfo * * si, Object__Array * * memberData));
IL2CPP_REGISTER_METHOD(0x01D93FF0, ObjectMap *, Create, (String * name, Type * objectType, String__Array * memberNames, ObjectReader * objectReader, int32_t objectId, BinaryAssemblyInfo * assemblyInfo));
IL2CPP_REGISTER_METHOD(0x01D94180, ObjectMap *, Create, (String * name, String__Array * memberNames, BinaryTypeEnum__Enum__Array * binaryTypeEnumA, Object__Array * typeInformationA, Int32__Array * memberAssemIds, ObjectReader * objectReader, int32_t objectId, BinaryAssemblyInfo * assemblyInfo, SizedArray * assemIdToAssemblyTable));
}
