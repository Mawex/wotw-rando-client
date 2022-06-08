#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::ErrorMessage {
IL2CPP_REGISTER_METHOD(0x023104C0, void, __ctor, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgCount, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object__Array *, get_Args, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MethodBase *, get_MethodBase, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x02310550, String *, get_MethodName, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, get_MethodSignature, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IDictionary *, get_Properties, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x023105D0, String *, get_TypeName, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Uri, (ErrorMessage * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, GetArg, (ErrorMessage * __this, int32_t arg_num));
IL2CPP_REGISTER_METHOD(0x00420EE0, LogicalCallContext *, get_LogicalCallContext, (ErrorMessage * __this));
}
