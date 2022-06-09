#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::MethodCall {
IL2CPP_REGISTER_METHOD(0x0230EC70, void, __ctor_1, (app::MethodCall * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02314970, void, __ctor_2, (app::MethodCall * this_ptr, app::CADMethodCallMessage * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_3, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x02314B70, void, CopyFrom, (app::MethodCall * this_ptr, app::IMethodMessage * call));
IL2CPP_REGISTER_METHOD(0x02314CF0, void, InitMethodProperty, (app::MethodCall * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x023150B0, void, GetObjectData, (app::MethodCall * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x023153B0, int32_t, get_ArgCount, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object__Array *, get_Args, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x023153D0, LogicalCallContext *, get_LogicalCallContext, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x02315520, MethodBase *, get_MethodBase, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x023155C0, String *, get_MethodName, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x02315600, Object *, get_MethodSignature, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x0230F550, IDictionary *, get_Properties, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x023157B0, void, InitDictionary, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x02315930, String *, get_TypeName, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Uri, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Uri, (app::MethodCall * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, IInternalMessage_get_Uri, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, IInternalMessage_set_Uri, (app::MethodCall * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x02315990, Object *, GetArg, (app::MethodCall * this_ptr, int32_t arg_num));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x023159D0, void, ResolveMethod, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047535D8, MethodCall_ResolveMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02316170, Type *, CastTo, (app::MethodCall * this_ptr, app::String * client_type, app::Type * server_type));
IL2CPP_REGISTER_METHOD(0x02316480, String *, GetTypeNameFromAssemblyQualifiedName, (app::String * aqname));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Identity *, IInternalMessage_get_TargetIdentity, (app::MethodCall * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, IInternalMessage_set_TargetIdentity, (app::MethodCall * this_ptr, app::Identity * value));
IL2CPP_REGISTER_METHOD(0x02316590, Type__Array *, get_GenericArguments, (app::MethodCall * this_ptr));
}
