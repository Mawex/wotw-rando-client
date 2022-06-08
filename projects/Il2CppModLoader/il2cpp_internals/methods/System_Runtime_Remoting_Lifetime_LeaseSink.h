#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Lifetime::LeaseSink {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LeaseSink * __this, IMessageSink * nextSink));
IL2CPP_REGISTER_METHOD(0x02308A50, IMessage *, SyncProcessMessage, (LeaseSink * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x02308B00, IMessageCtrl *, AsyncProcessMessage, (LeaseSink * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHOD(0x02308BC0, void, RenewLease, (LeaseSink * __this, IMessage * msg));
}
