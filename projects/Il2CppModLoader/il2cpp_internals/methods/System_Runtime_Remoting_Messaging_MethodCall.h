#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::MethodCall {
IL2CPP_REGISTER_METHOD(0x0230EC70, void, __ctor, (MethodCall * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02314970, void, __ctor, (MethodCall * __this, CADMethodCallMessage * msg));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x02314B70, void, CopyFrom, (MethodCall * __this, IMethodMessage * call));
IL2CPP_REGISTER_METHOD(0x02314CF0, void, InitMethodProperty, (MethodCall * __this, String * key, Object * value));
IL2CPP_REGISTER_METHOD(0x023150B0, void, GetObjectData, (MethodCall * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x023153B0, int32_t, get_ArgCount, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object__Array *, get_Args, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x023153D0, LogicalCallContext *, get_LogicalCallContext, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x02315520, MethodBase *, get_MethodBase, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x023155C0, String *, get_MethodName, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x02315600, Object *, get_MethodSignature, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x0230F550, IDictionary *, get_Properties, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x023157B0, void, InitDictionary, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x02315930, String *, get_TypeName, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Uri, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Uri, (MethodCall * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, IInternalMessage_get_Uri, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, IInternalMessage_set_Uri, (MethodCall * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02315990, Object *, GetArg, (MethodCall * __this, int32_t argNum));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x023159D0, void, ResolveMethod, (MethodCall * __this));
IL2CPP_REGISTER_METHODINFO(0x047535D8, MethodCall_ResolveMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02316170, Type *, CastTo, (MethodCall * __this, String * clientType, Type * serverType));
IL2CPP_REGISTER_METHOD(0x02316480, String *, GetTypeNameFromAssemblyQualifiedName, (String * aqname));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Identity *, IInternalMessage_get_TargetIdentity, (MethodCall * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, IInternalMessage_set_TargetIdentity, (MethodCall * __this, Identity * value));
IL2CPP_REGISTER_METHOD(0x02316590, Type__Array *, get_GenericArguments, (MethodCall * __this));
}
