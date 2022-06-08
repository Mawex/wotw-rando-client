using namespace app;

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA24F0, void, ObjectEnd, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA2530, void, InternalInit, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA2560, WriteObjectInfo *, Serialize, (Object * obj, ISurrogateSelector * surrogateSelector, StreamingContext context, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, ObjectWriter * objectWriter, SerializationBinder * binder));
IL2CPP_REGISTER_METHOD(0x01DA2610, void, InitSerialize, (WriteObjectInfo * __this, Object * obj, ISurrogateSelector * surrogateSelector, StreamingContext context, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, ObjectWriter * objectWriter, SerializationBinder * binder));
IL2CPP_REGISTER_METHODINFO(0x0477AFA0, WriteObjectInfo_InitSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA2C50, WriteObjectInfo *, Serialize, (Type * objectType, ISurrogateSelector * surrogateSelector, StreamingContext context, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, SerializationBinder * binder));
IL2CPP_REGISTER_METHOD(0x01DA2CF0, void, InitSerialize, (WriteObjectInfo * __this, Type * objectType, ISurrogateSelector * surrogateSelector, StreamingContext context, SerObjectInfoInit * serObjectInfoInit, IFormatterConverter * converter, SerializationBinder * binder));
IL2CPP_REGISTER_METHOD(0x01DA3310, void, InitSiWrite, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA3850, void, CheckTypeForwardedFrom, (SerObjectInfoCache * cache, Type * objectType, String * binderAssemblyString));
IL2CPP_REGISTER_METHODINFO(0x047545D8, WriteObjectInfo_CheckTypeForwardedFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA3970, void, InitNoMembers, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA3B60, void, InitMemberInfo, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA4020, String *, GetTypeFullName, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA4050, String *, GetAssemblyString, (WriteObjectInfo * __this));
IL2CPP_REGISTER_METHOD(0x01DA4080, void, InvokeSerializationBinder, (WriteObjectInfo * __this, SerializationBinder * binder));
IL2CPP_REGISTER_METHOD(0x01DA40C0, Type *, GetMemberType, (WriteObjectInfo * __this, MemberInfo_1 * objMember));
IL2CPP_REGISTER_METHODINFO(0x0471F498, WriteObjectInfo_GetMemberType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA4340, void, GetMemberInfo, (WriteObjectInfo * __this, String__Array * * outMemberNames, Type__Array * * outMemberTypes, Object__Array * * outMemberData));
IL2CPP_REGISTER_METHODINFO(0x0478E3B0, WriteObjectInfo_GetMemberInfo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DA4460, WriteObjectInfo *, GetObjectInfo, (SerObjectInfoInit * serObjectInfoInit));
IL2CPP_REGISTER_METHOD(0x01DA4670, void, PutObjectInfo, (SerObjectInfoInit * serObjectInfoInit, WriteObjectInfo * objectInfo));
}
