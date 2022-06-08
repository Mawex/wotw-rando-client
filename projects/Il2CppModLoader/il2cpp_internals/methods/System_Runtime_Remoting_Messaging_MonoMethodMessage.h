using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::MonoMethodMessage {
IL2CPP_REGISTER_METHOD(0x023180B0, void, InitMessage, (MonoMethodMessage * __this, MonoMethod * method_1, Object__Array * out_args));
IL2CPP_REGISTER_METHOD(0x02318410, void, __ctor, (MonoMethodMessage * __this, MethodInfo_1 * minfo, Object__Array * in_args, Object__Array * out_args));
IL2CPP_REGISTER_METHOD(0x023185B0, IDictionary *, get_Properties, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318710, int32_t, get_ArgCount, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object__Array *, get_Args, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, LogicalCallContext *, get_LogicalCallContext, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_LogicalCallContext, (MonoMethodMessage * __this, LogicalCallContext * value));
IL2CPP_REGISTER_METHOD(0x002FA280, MethodBase *, get_MethodBase, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318750, String *, get_MethodName, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318870, Object *, get_MethodSignature, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318A00, String *, get_TypeName, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_Uri, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Uri, (MonoMethodMessage * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02318B40, Object *, GetArg, (MonoMethodMessage * __this, int32_t arg_num));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Exception *, get_Exception, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318B80, int32_t, get_OutArgCount, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318BF0, Object__Array *, get_OutArgs, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Object *, get_ReturnValue, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Identity *, IInternalMessage_get_TargetIdentity, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, IInternalMessage_set_TargetIdentity, (MonoMethodMessage * __this, Identity * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, AsyncResult *, get_AsyncResult, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318DC0, CallType__Enum, get_CallType, (MonoMethodMessage * __this));
IL2CPP_REGISTER_METHOD(0x02318F30, bool, NeedsOutProcessing, (MonoMethodMessage * __this, int32_t * outCount));
IL2CPP_REGISTER_METHOD(0x02318FB0, void, __cctor, (MethodInfo * method));
}
