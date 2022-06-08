#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ServerObjectTerminatorSink * __this, IMessageSink * nextSink));
IL2CPP_REGISTER_METHOD(0x0231A370, IMessage *, SyncProcessMessage, (ServerObjectTerminatorSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0231A4E0, IMessageCtrl *, AsyncProcessMessage, (ServerObjectTerminatorSink * __this, IMessage * msg, IMessageSink * replySink));
}
