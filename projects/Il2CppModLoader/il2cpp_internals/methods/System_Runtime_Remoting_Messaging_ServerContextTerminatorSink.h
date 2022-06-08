#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ServerContextTerminatorSink {
IL2CPP_REGISTER_METHOD(0x02319F80, IMessage *, SyncProcessMessage, (ServerContextTerminatorSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0231A100, IMessageCtrl *, AsyncProcessMessage, (ServerContextTerminatorSink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ServerContextTerminatorSink * __this));
}
