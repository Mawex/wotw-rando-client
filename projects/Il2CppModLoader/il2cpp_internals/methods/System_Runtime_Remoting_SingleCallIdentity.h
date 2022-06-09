#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::SingleCallIdentity {
IL2CPP_REGISTER_METHOD(0x01D836D0, void, __ctor, (app::SingleCallIdentity * this_ptr, app::String * object_uri, app::Context * context, app::Type * object_type));
IL2CPP_REGISTER_METHOD(0x01D84BC0, IMessage *, SyncObjectProcessMessage, (app::SingleCallIdentity * this_ptr, app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01D84C20, IMessageCtrl *, AsyncObjectProcessMessage, (app::SingleCallIdentity * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
}
