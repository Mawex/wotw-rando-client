#include <interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerFinished {
IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, __ctor, (TlsServerFinished_1 * __this, Context_1 * context, Byte__Array * buffer));
IL2CPP_REGISTER_METHOD(0x01F6F4F0, void, Update, (TlsServerFinished_1 * __this));
IL2CPP_REGISTER_METHOD(0x01F6F520, void, ProcessAsSsl3, (TlsServerFinished_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04775890, TlsServerFinished_1_ProcessAsSsl3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6F840, void, ProcessAsTls1, (TlsServerFinished_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04764778, TlsServerFinished_1_ProcessAsTls1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F6FAF0, void, __cctor, ());
}
