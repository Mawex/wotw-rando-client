using namespace app;

namespace app::methods::System::Reflection::MemberInfoSerializationHolder {
IL2CPP_REGISTER_METHOD(0x0268B610, void, GetSerializationInfo, (SerializationInfo * info, String * name, RuntimeType * reflectedClass, String * signature, MemberTypes__Enum type));
IL2CPP_REGISTER_METHOD(0x0268B640, void, GetSerializationInfo, (SerializationInfo * info, String * name, RuntimeType * reflectedClass, String * signature, String * signature2, MemberTypes__Enum type, Type__Array * genericArguments));
IL2CPP_REGISTER_METHODINFO(0x0478C1E8, MemberInfoSerializationHolder_GetSerializationInfo_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268B900, void, __ctor, (MemberInfoSerializationHolder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04739820, MemberInfoSerializationHolder__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268BB70, void, GetObjectData, (MemberInfoSerializationHolder * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04748370, MemberInfoSerializationHolder_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0268BBE0, Object *, GetRealObject, (MemberInfoSerializationHolder * __this, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0476CE48, MemberInfoSerializationHolder_GetRealObject__MethodInfo);
}
