using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectWriter {
IL2CPP_REGISTER_METHOD(0x01D9A180, void, __ctor, (ObjectWriter * __this, ISurrogateSelector * selector, StreamingContext context, InternalFE * formatterEnums, SerializationBinder * binder));
IL2CPP_REGISTER_METHOD(0x01D9A3F0, void, Serialize, (ObjectWriter * __this, Object * graph, Header__Array * inHeaders, _BinaryWriter * serWriter, bool fCheck));
IL2CPP_REGISTER_METHODINFO(0x04743E28, ObjectWriter_Serialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, SerializationObjectManager *, get_ObjectManager, (ObjectWriter * __this));
IL2CPP_REGISTER_METHOD(0x01D9ABB0, void, Write, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * memberNameInfo, NameInfo * typeNameInfo));
IL2CPP_REGISTER_METHODINFO(0x04775B10, ObjectWriter_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D9B1F0, void, Write, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * memberNameInfo, NameInfo * typeNameInfo, String__Array * memberNames, Type__Array * memberTypes, Object__Array * memberData, WriteObjectInfo__Array * memberObjectInfos));
IL2CPP_REGISTER_METHOD(0x01D9B670, void, WriteMemberSetup, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * memberNameInfo, NameInfo * typeNameInfo, String * memberName, Type * memberType, Object * memberData, WriteObjectInfo * memberObjectInfo));
IL2CPP_REGISTER_METHOD(0x01D9B7E0, void, WriteMembers, (ObjectWriter * __this, NameInfo * memberNameInfo, NameInfo * memberTypeNameInfo, Object * memberData, WriteObjectInfo * objectInfo, NameInfo * typeNameInfo, WriteObjectInfo * memberObjectInfo));
IL2CPP_REGISTER_METHOD(0x01D9BCB0, void, WriteArray, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * memberNameInfo, WriteObjectInfo * memberObjectInfo));
IL2CPP_REGISTER_METHOD(0x01D9C840, void, WriteArrayMember, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * arrayElemTypeNameInfo, Object * data));
IL2CPP_REGISTER_METHOD(0x01D9CC50, void, WriteRectangle, (ObjectWriter * __this, WriteObjectInfo * objectInfo, int32_t rank, Int32__Array * maxA, Array * array, NameInfo * arrayElemNameTypeInfo, Int32__Array * lowerBoundA));
IL2CPP_REGISTER_METHOD(0x01D9CF40, Object *, GetNext, (ObjectWriter * __this, int64_t * objID));
IL2CPP_REGISTER_METHODINFO(0x04712148, ObjectWriter_GetNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D9D110, int64_t, InternalGetId, (ObjectWriter * __this, Object * obj, bool assignUniqueIdToValueType, Type * type, bool * isNew));
IL2CPP_REGISTER_METHOD(0x01D9D200, int64_t, Schedule, (ObjectWriter * __this, Object * obj, bool assignUniqueIdToValueType, Type * type));
IL2CPP_REGISTER_METHOD(0x01D9D280, int64_t, Schedule, (ObjectWriter * __this, Object * obj, bool assignUniqueIdToValueType, Type * type, WriteObjectInfo * objectInfo));
IL2CPP_REGISTER_METHOD(0x01D9D330, bool, WriteKnownValueClass, (ObjectWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo, Object * data));
IL2CPP_REGISTER_METHOD(0x01D9D4A0, void, WriteObjectRef, (ObjectWriter * __this, NameInfo * nameInfo, int64_t objectId));
IL2CPP_REGISTER_METHOD(0x01D9D4C0, void, WriteString, (ObjectWriter * __this, NameInfo * memberNameInfo, NameInfo * typeNameInfo, Object * stringObject));
IL2CPP_REGISTER_METHOD(0x01D9D680, bool, CheckForNull, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * memberNameInfo, NameInfo * typeNameInfo, Object * data));
IL2CPP_REGISTER_METHOD(0x01D9D780, void, WriteSerializedStreamHeader, (ObjectWriter * __this, int64_t topId, int64_t headerId));
IL2CPP_REGISTER_METHOD(0x01D9D7B0, NameInfo *, TypeToNameInfo, (ObjectWriter * __this, Type * type, WriteObjectInfo * objectInfo, InternalPrimitiveTypeE__Enum code, NameInfo * nameInfo));
IL2CPP_REGISTER_METHOD(0x01D9D870, NameInfo *, TypeToNameInfo, (ObjectWriter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01D9D8C0, NameInfo *, TypeToNameInfo, (ObjectWriter * __this, WriteObjectInfo * objectInfo));
IL2CPP_REGISTER_METHOD(0x01D9D970, NameInfo *, TypeToNameInfo, (ObjectWriter * __this, WriteObjectInfo * objectInfo, NameInfo * nameInfo));
IL2CPP_REGISTER_METHOD(0x01D9D9E0, void, TypeToNameInfo, (ObjectWriter * __this, Type * type, NameInfo * nameInfo));
IL2CPP_REGISTER_METHOD(0x01D9DA70, NameInfo *, MemberToNameInfo, (ObjectWriter * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01D9DAA0, InternalPrimitiveTypeE__Enum, ToCode, (ObjectWriter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01D9DB80, int64_t, GetAssemblyId, (ObjectWriter * __this, WriteObjectInfo * objectInfo));
IL2CPP_REGISTER_METHOD(0x013DD8B0, Type *, GetType, (ObjectWriter * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01D9DF40, NameInfo *, GetNameInfo, (ObjectWriter * __this));
IL2CPP_REGISTER_METHOD(0x01141CD0, bool, CheckTypeFormat, (ObjectWriter * __this, FormatterTypeStyle__Enum test, FormatterTypeStyle__Enum want));
IL2CPP_REGISTER_METHOD(0x01D9E110, void, PutNameInfo, (ObjectWriter * __this, NameInfo * nameInfo));
}
