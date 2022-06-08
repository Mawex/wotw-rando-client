using namespace app;

namespace app::methods::System::MissingMemberException {
IL2CPP_REGISTER_METHOD(0x0226A340, void, __ctor, (MissingMemberException * __this));
IL2CPP_REGISTER_METHOD(0x0226A3D0, void, __ctor, (MissingMemberException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0226A3F0, void, __ctor, (MissingMemberException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0226A560, String *, get_Message, (MissingMemberException * __this));
IL2CPP_REGISTER_METHOD(0x0173D7D0, String *, FormatSignature, (Byte__Array * signature));
IL2CPP_REGISTER_METHOD(0x0226A6D0, void, GetObjectData, (MissingMemberException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0470D870, MissingMemberException_GetObjectData__MethodInfo);
}
