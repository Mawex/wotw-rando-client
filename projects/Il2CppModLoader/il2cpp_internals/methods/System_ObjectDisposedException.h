#include <interception_macros.h>

namespace app::methods::System::ObjectDisposedException {
IL2CPP_REGISTER_METHOD(0x0227B460, void, __ctor, (ObjectDisposedException * __this));
IL2CPP_REGISTER_METHOD(0x0227B500, void, __ctor, (ObjectDisposedException * __this, String * objectName));
IL2CPP_REGISTER_METHOD(0x0227B5A0, void, __ctor, (ObjectDisposedException * __this, String * objectName, String * message));
IL2CPP_REGISTER_METHOD(0x0227B5E0, String *, get_Message, (ObjectDisposedException * __this));
IL2CPP_REGISTER_METHOD(0x0227B740, String *, get_ObjectName, (ObjectDisposedException * __this));
IL2CPP_REGISTER_METHOD(0x0227B810, void, __ctor, (ObjectDisposedException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0227B8E0, void, GetObjectData, (ObjectDisposedException * __this, SerializationInfo * info, StreamingContext context));
}
