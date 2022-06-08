using namespace app;

namespace app::methods::System::IO::FileLoadException {
IL2CPP_REGISTER_METHOD(0x01E08E00, void, __ctor, (FileLoadException * __this));
IL2CPP_REGISTER_METHOD(0x01E08E90, void, __ctor, (FileLoadException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01E08EB0, String *, get_Message, (FileLoadException * __this));
IL2CPP_REGISTER_METHOD(0x01E08EE0, void, SetMessageField, (FileLoadException * __this));
IL2CPP_REGISTER_METHOD(0x01E08F10, String *, ToString, (FileLoadException * __this));
IL2CPP_REGISTER_METHOD(0x01E091D0, void, __ctor, (FileLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC60, String *, get_FusionLog, (FileLoadException * __this));
IL2CPP_REGISTER_METHOD(0x01E092E0, void, GetObjectData, (FileLoadException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01E09450, String *, FormatFileLoadExceptionMessage, (String * fileName, int32_t hResult));
}
