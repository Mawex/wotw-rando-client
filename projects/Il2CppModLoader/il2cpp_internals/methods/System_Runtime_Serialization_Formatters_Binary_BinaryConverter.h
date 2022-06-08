using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryConverter {
IL2CPP_REGISTER_METHOD(0x01D8C320, BinaryTypeEnum__Enum, GetBinaryTypeInfo, (Type * type, WriteObjectInfo * objectInfo, String * typeName, ObjectWriter * objectWriter, Object * * typeInformation, int32_t * assemId));
IL2CPP_REGISTER_METHODINFO(0x047633A8, BinaryConverter_GetBinaryTypeInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8C6E0, BinaryTypeEnum__Enum, GetParserBinaryTypeInfo, (Type * type, Object * * typeInformation));
IL2CPP_REGISTER_METHOD(0x01D8C9B0, void, WriteTypeInfo, (BinaryTypeEnum__Enum binaryTypeEnum, Object * typeInformation, int32_t assemId, _BinaryWriter * sout));
IL2CPP_REGISTER_METHODINFO(0x04766028, BinaryConverter_WriteTypeInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8CC70, Object *, ReadTypeInfo, (BinaryTypeEnum__Enum binaryTypeEnum, _BinaryParser * input, int32_t * assemId));
IL2CPP_REGISTER_METHODINFO(0x0471F5C0, BinaryConverter_ReadTypeInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8CED0, void, TypeFromInfo, (BinaryTypeEnum__Enum binaryTypeEnum, Object * typeInformation, ObjectReader * objectReader, BinaryAssemblyInfo * assemblyInfo, InternalPrimitiveTypeE__Enum * primitiveTypeEnum, String * * typeString, Type * * type, bool * isVariant));
IL2CPP_REGISTER_METHODINFO(0x0478E9E0, BinaryConverter_TypeFromInfo__MethodInfo);
}
