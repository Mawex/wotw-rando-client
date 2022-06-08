#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::SingleCallIdentity {
IL2CPP_REGISTER_METHOD(0x01D836D0, void, __ctor, (SingleCallIdentity * __this, String * objectUri, Context * context, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01D84BC0, IMessage *, SyncObjectProcessMessage, (SingleCallIdentity * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01D84C20, IMessageCtrl *, AsyncObjectProcessMessage, (SingleCallIdentity * __this, IMessage * msg, IMessageSink * replySink));
}
