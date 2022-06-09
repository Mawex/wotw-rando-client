#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::DisposerReplySink {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::DisposerReplySink * this_ptr, app::IMessageSink * next, app::IDisposable * disposable));
    IL2CPP_REGISTER_METHOD(0x02306340, app::IMessage *, SyncProcessMessage, (app::DisposerReplySink * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHOD(0x02306400, app::IMessageCtrl *, AsyncProcessMessage, (app::DisposerReplySink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
    IL2CPP_REGISTER_METHODINFO(0x04772DB8, DisposerReplySink_AsyncProcessMessage__MethodInfo);
}
