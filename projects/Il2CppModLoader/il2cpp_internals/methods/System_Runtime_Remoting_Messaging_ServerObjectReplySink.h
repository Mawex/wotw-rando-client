#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::ServerObjectReplySink {
    IL2CPP_REGISTER_METHOD(0x01A9AC30, void, __ctor, (app::ServerObjectReplySink * this_ptr, app::ServerIdentity * identity, app::IMessageSink * reply_sink));
    IL2CPP_REGISTER_METHOD(0x0231A250, app::IMessage *, SyncProcessMessage, (app::ServerObjectReplySink * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHOD(0x0231A320, app::IMessageCtrl *, AsyncProcessMessage, (app::ServerObjectReplySink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
    IL2CPP_REGISTER_METHODINFO(0x04763498, ServerObjectReplySink_AsyncProcessMessage__MethodInfo);
}
