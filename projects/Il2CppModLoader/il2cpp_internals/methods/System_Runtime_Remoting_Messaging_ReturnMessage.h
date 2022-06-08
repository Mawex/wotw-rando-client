#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ReturnMessage {
IL2CPP_REGISTER_METHOD(0x02319710, void, __ctor, (ReturnMessage * __this, Object * ret, Object__Array * outArgs, int32_t outArgsCount, LogicalCallContext * callCtx, IMethodCallMessage * mcm));
IL2CPP_REGISTER_METHOD(0x02319800, void, __ctor, (ReturnMessage * __this, Exception * e, IMethodCallMessage * mcm));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_ArgCount, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object__Array *, get_Args, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x023198C0, LogicalCallContext *, get_LogicalCallContext, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, MethodBase *, get_MethodBase, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x02319A10, String *, get_MethodName, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x02319A60, Object *, get_MethodSignature, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x02319C10, IDictionary *, get_Properties, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x02319D70, String *, get_TypeName, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Uri, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Uri, (ReturnMessage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, IInternalMessage_get_Uri, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, IInternalMessage_set_Uri, (ReturnMessage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01A92420, Object *, GetArg, (ReturnMessage * __this, int32_t argNum));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Exception *, get_Exception, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x02319DE0, Object__Array *, get_OutArgs, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_ReturnValue, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Identity *, IInternalMessage_get_TargetIdentity, (ReturnMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, IInternalMessage_set_TargetIdentity, (ReturnMessage * __this, Identity * value));
}
