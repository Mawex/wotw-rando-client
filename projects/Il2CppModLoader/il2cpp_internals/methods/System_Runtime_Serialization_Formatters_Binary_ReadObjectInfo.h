using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ObjectEnd, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x00B1D780, void, PrepareForReuse, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01D9EBD0, ReadObjectInfo *, Create, (Type * objectType, ISurrogateSelector * surrogateSelector, StreamingContext context, ObjectManager * objectManager, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, bool bSimpleAssembly));
IL2CPP_REGISTER_METHOD(0x01D9EC80, void, Init, (ReadObjectInfo * __this, Type * objectType, ISurrogateSelector * surrogateSelector, StreamingContext context, ObjectManager * objectManager, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, bool bSimpleAssembly));
IL2CPP_REGISTER_METHOD(0x01D9ECE0, ReadObjectInfo *, Create, (Type * objectType, String__Array * memberNames, Type__Array * memberTypes, ISurrogateSelector * surrogateSelector, StreamingContext context, ObjectManager * objectManager, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, bool bSimpleAssembly));
IL2CPP_REGISTER_METHOD(0x01D9EDC0, void, Init, (ReadObjectInfo * __this, Type * objectType, String__Array * memberNames, Type__Array * memberTypes, ISurrogateSelector * surrogateSelector, StreamingContext context, ObjectManager * objectManager, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, bool bSimpleAssembly));
IL2CPP_REGISTER_METHOD(0x01D9EE50, void, InitReadConstructor, (ReadObjectInfo * __this, Type * objectType, ISurrogateSelector * surrogateSelector, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01D9F180, void, InitSiRead, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01D9F310, void, InitNoMembers, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01D9F460, void, InitMemberInfo, (ReadObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01D9F820, MemberInfo_1 *, GetMemberInfo, (ReadObjectInfo * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x04745218, ReadObjectInfo_GetMemberInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D9FA70, Type *, GetType, (ReadObjectInfo * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0472E0D0, ReadObjectInfo_GetType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D9FC30, void, AddValue, (ReadObjectInfo * __this, String * name, Object * value, SerializationInfo * * si, Object__Array * * memberData));
IL2CPP_REGISTER_METHOD(0x01D9FCE0, void, InitDataStore, (ReadObjectInfo * __this, SerializationInfo * * si, Object__Array * * memberData));
IL2CPP_REGISTER_METHOD(0x01D9FEB0, void, RecordFixup, (ReadObjectInfo * __this, int64_t objectId, String * name, int64_t idRef));
IL2CPP_REGISTER_METHOD(0x01D9FFA0, void, PopulateObjectMembers, (ReadObjectInfo * __this, Object * obj, Object__Array * memberData));
IL2CPP_REGISTER_METHOD(0x01DA0080, int32_t, Position, (ReadObjectInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01DA02C0, Type__Array *, GetMemberTypes, (ReadObjectInfo * __this, String__Array * inMemberNames, Type * objectType));
IL2CPP_REGISTER_METHODINFO(0x04700D50, ReadObjectInfo_GetMemberTypes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA0A60, Type *, GetMemberType, (ReadObjectInfo * __this, MemberInfo_1 * objMember));
IL2CPP_REGISTER_METHODINFO(0x04753258, ReadObjectInfo_GetMemberType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA0CE0, ReadObjectInfo *, GetObjectInfo, (SerObjectInfoInit * serObjectInfoInit));
}
