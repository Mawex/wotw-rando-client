#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::ClientContextTerminatorSink {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::ClientContextTerminatorSink * this_ptr, app::Context * ctx));
IL2CPP_REGISTER_METHOD(0x0230E6A0, IMessage *, SyncProcessMessage, (app::ClientContextTerminatorSink * this_ptr, app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x0230E8A0, IMessageCtrl *, AsyncProcessMessage, (app::ClientContextTerminatorSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
}
