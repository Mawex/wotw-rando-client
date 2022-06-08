#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ClientContextTerminatorSink * __this, Context * ctx));
IL2CPP_REGISTER_METHOD(0x0230E6A0, IMessage *, SyncProcessMessage, (ClientContextTerminatorSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0230E8A0, IMessageCtrl *, AsyncProcessMessage, (ClientContextTerminatorSink * __this, IMessage * msg, IMessageSink * replySink));
}
