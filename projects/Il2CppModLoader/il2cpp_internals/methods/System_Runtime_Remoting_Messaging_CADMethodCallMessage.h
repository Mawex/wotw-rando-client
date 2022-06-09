#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::CADMethodCallMessage {
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Uri, (app::CADMethodCallMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x0230C790, CADMethodCallMessage *, Create, (app::IMessage * call_msg));
IL2CPP_REGISTER_METHOD(0x0230CA20, void, __ctor, (app::CADMethodCallMessage * this_ptr, app::IMethodCallMessage * call_msg));
IL2CPP_REGISTER_METHOD(0x0230CB90, ArrayList *, GetArguments, (app::CADMethodCallMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x0230CE00, Object__Array *, GetArgs, (app::CADMethodCallMessage * this_ptr, app::ArrayList * args));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_PropertiesCount, (app::CADMethodCallMessage * this_ptr));
}
