#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::ReturnMessage {
IL2CPP_REGISTER_METHOD(0x02319710, void, __ctor_1, (app::ReturnMessage * this_ptr, app::Object * ret, app::Object__Array * out_args, int32_t out_args_count, app::LogicalCallContext * call_ctx, app::IMethodCallMessage * mcm));
IL2CPP_REGISTER_METHOD(0x02319800, void, __ctor_2, (app::ReturnMessage * this_ptr, app::Exception * e, app::IMethodCallMessage * mcm));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_ArgCount, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Object__Array *, get_Args, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x023198C0, LogicalCallContext *, get_LogicalCallContext, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, MethodBase *, get_MethodBase, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02319A10, String *, get_MethodName, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02319A60, Object *, get_MethodSignature, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02319C10, IDictionary *, get_Properties, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02319D70, String *, get_TypeName, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Uri, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Uri, (app::ReturnMessage * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, IInternalMessage_get_Uri, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, IInternalMessage_set_Uri, (app::ReturnMessage * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01A92420, Object *, GetArg, (app::ReturnMessage * this_ptr, int32_t arg_num));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Exception *, get_Exception, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02319DE0, Object__Array *, get_OutArgs, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_ReturnValue, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Identity *, IInternalMessage_get_TargetIdentity, (app::ReturnMessage * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, IInternalMessage_set_TargetIdentity, (app::ReturnMessage * this_ptr, app::Identity * value));
}
