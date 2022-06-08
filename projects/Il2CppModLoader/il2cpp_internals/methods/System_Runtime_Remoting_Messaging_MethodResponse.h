#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::MethodResponse {
IL2CPP_REGISTER_METHOD(0x023165E0, void, __ctor, (MethodResponse * __this, Exception * e, IMethodCallMessage * msg));
IL2CPP_REGISTER_METHOD(0x023166C0, void, __ctor, (MethodResponse * __this, Object * returnValue, Object__Array * outArgs, LogicalCallContext * callCtx, IMethodCallMessage * msg));
IL2CPP_REGISTER_METHOD(0x02316790, void, __ctor, (MethodResponse * __this, IMethodCallMessage * msg, CADMethodReturnMessage * retmsg));
IL2CPP_REGISTER_METHOD(0x02310120, void, __ctor, (MethodResponse * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02316AA0, void, InitMethodProperty, (MethodResponse * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x02316EC0, int32_t, get_ArgCount, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Object__Array *, get_Args, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Exception *, get_Exception, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02316ED0, LogicalCallContext *, get_LogicalCallContext, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02317020, MethodBase *, get_MethodBase, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02317250, String *, get_MethodName, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02317300, Object *, get_MethodSignature, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x023173E0, Object__Array *, get_OutArgs, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02317590, IDictionary *, get_Properties, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Object *, get_ReturnValue, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x02317720, String *, get_TypeName, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x023177D0, String *, get_Uri, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Uri, (MethodResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x023177D0, String *, IInternalMessage_get_Uri, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, IInternalMessage_set_Uri, (MethodResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02317880, Object *, GetArg, (MethodResponse * __this, int32_t argNum));
IL2CPP_REGISTER_METHOD(0x023178C0, void, GetObjectData, (MethodResponse * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Identity *, IInternalMessage_get_TargetIdentity, (MethodResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, IInternalMessage_set_TargetIdentity, (MethodResponse * __this, Identity * value));
}
