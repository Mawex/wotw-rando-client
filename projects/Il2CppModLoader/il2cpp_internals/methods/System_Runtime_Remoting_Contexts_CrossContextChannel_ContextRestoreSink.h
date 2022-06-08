#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Contexts::CrossContextChannel_ContextRestoreSink {
IL2CPP_REGISTER_METHOD(0x00522850, void, __ctor, (CrossContextChannel_ContextRestoreSink * __this, IMessageSink * next, Context * context, IMessage * call));
IL2CPP_REGISTER_METHOD(0x02305200, IMessage *, SyncProcessMessage, (CrossContextChannel_ContextRestoreSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x02305500, IMessageCtrl *, AsyncProcessMessage, (CrossContextChannel_ContextRestoreSink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHODINFO(0x0470FD90, CrossContextChannel_ContextRestoreSink_AsyncProcessMessage__MethodInfo);
}
