#include <interception_macros.h>

namespace app::methods::System::IO::FileNotFoundException {
IL2CPP_REGISTER_METHOD(0x01E09550, void, __ctor, (FileNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x01E095E0, void, __ctor, (FileNotFoundException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01E09600, void, __ctor, (FileNotFoundException * __this, String * message, String * fileName));
IL2CPP_REGISTER_METHOD(0x01E09640, String *, get_Message, (FileNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x01E09700, void, SetMessageField, (FileNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x01E097B0, String *, ToString, (FileNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x01E09A70, void, __ctor, (FileNotFoundException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBC60, String *, get_FusionLog, (FileNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x01E09B80, void, GetObjectData, (FileNotFoundException * __this, SerializationInfo * info, StreamingContext context));
}
