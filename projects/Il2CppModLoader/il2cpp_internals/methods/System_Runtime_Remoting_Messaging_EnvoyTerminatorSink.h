#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::EnvoyTerminatorSink {
IL2CPP_REGISTER_METHOD(0x023101D0, IMessage *, SyncProcessMessage, (EnvoyTerminatorSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x023102A0, IMessageCtrl *, AsyncProcessMessage, (EnvoyTerminatorSink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EnvoyTerminatorSink * __this));
IL2CPP_REGISTER_METHOD(0x02310380, void, __cctor, ());
}
