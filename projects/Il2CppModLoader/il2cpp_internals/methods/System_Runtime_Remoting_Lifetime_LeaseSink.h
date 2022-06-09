#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Lifetime::LeaseSink {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::LeaseSink * this_ptr, app::IMessageSink * next_sink));
    IL2CPP_REGISTER_METHOD(0x02308A50, app::IMessage *, SyncProcessMessage, (app::LeaseSink * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHOD(0x02308B00, app::IMessageCtrl *, AsyncProcessMessage, (app::LeaseSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
    IL2CPP_REGISTER_METHOD(0x02308BC0, void, RenewLease, (app::LeaseSink * this_ptr, app::IMessage * msg));
}
