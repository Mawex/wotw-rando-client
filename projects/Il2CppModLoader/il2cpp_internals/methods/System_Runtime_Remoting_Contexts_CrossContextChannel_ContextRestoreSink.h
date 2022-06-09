#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Contexts::CrossContextChannel_ContextRestoreSink {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessageSink * next, app::Context * context, app::IMessage * call));
IL2CPP_REGISTER_METHOD(0x02305200, IMessage *, SyncProcessMessage, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x02305500, IMessageCtrl *, AsyncProcessMessage, (app::CrossContextChannel_ContextRestoreSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
IL2CPP_REGISTER_METHODINFO(0x0470FD90, CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__MethodInfo);
}
