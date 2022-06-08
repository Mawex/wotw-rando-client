using namespace app;

namespace app::methods::System::BadImageFormatException {
IL2CPP_REGISTER_METHOD(0x0229BCD0, void, __ctor, (BadImageFormatException * __this));
IL2CPP_REGISTER_METHOD(0x0229BD60, void, __ctor, (BadImageFormatException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0229BD80, void, __ctor, (BadImageFormatException * __this, String * message, Exception * inner));
IL2CPP_REGISTER_METHOD(0x0229BDA0, void, __ctor, (BadImageFormatException * __this, String * message, String * fileName));
IL2CPP_REGISTER_METHOD(0x0229BDE0, String *, get_Message, (BadImageFormatException * __this));
IL2CPP_REGISTER_METHOD(0x0229BEA0, void, SetMessageField, (BadImageFormatException * __this));
IL2CPP_REGISTER_METHOD(0x0229BF50, String *, ToString, (BadImageFormatException * __this));
IL2CPP_REGISTER_METHOD(0x0229C210, void, __ctor, (BadImageFormatException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_FusionLog, (BadImageFormatException * __this));
IL2CPP_REGISTER_METHOD(0x0229C320, void, GetObjectData, (BadImageFormatException * __this, SerializationInfo * info, StreamingContext context));
}
