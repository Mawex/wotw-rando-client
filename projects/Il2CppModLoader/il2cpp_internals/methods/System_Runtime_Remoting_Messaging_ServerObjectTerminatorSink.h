#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::ServerObjectTerminatorSink {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::ServerObjectTerminatorSink * this_ptr, app::IMessageSink * next_sink));
IL2CPP_REGISTER_METHOD(0x0231A370, IMessage *, SyncProcessMessage, (app::ServerObjectTerminatorSink * this_ptr, app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0231A4E0, IMessageCtrl *, AsyncProcessMessage, (app::ServerObjectTerminatorSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
}
