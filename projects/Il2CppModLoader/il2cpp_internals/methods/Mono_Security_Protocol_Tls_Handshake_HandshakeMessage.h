#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage {
IL2CPP_REGISTER_METHOD(0x002FB9D0, Context_1 *, get_Context, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, HandshakeType__Enum, get_HandshakeType, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHOD(0x00614BA0, ContentType__Enum, get_ContentType, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHOD(0x01F704E0, void, __ctor, (HandshakeMessage * __this, Context_1 * context, HandshakeType__Enum handshakeType));
IL2CPP_REGISTER_METHOD(0x01F70520, void, __ctor, (HandshakeMessage * __this, Context_1 * context, HandshakeType__Enum handshakeType, ContentType__Enum contentType));
IL2CPP_REGISTER_METHOD(0x01F70570, void, __ctor, (HandshakeMessage * __this, Context_1 * context, HandshakeType__Enum handshakeType, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x01F705B0, void, Process, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHODINFO(0x04761EC8, HandshakeMessage_Process__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F706B0, void, Update, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHOD(0x01F70790, Byte__Array *, EncodeMessage, (HandshakeMessage * __this));
IL2CPP_REGISTER_METHOD(0x01F70970, bool, Compare, (Byte__Array * buffer1, Byte__Array * buffer2));
}
