#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::LogicalCallContext {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LogicalCallContext * __this));
IL2CPP_REGISTER_METHOD(0x02310D00, void, __ctor, (LogicalCallContext * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02310FA0, void, GetObjectData, (LogicalCallContext * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04786A98, LogicalCallContext_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02311330, Object *, Clone, (LogicalCallContext * __this));
IL2CPP_REGISTER_METHOD(0x02311C10, void, Merge, (LogicalCallContext * __this, LogicalCallContext * lc));
IL2CPP_REGISTER_METHOD(0x02311F00, bool, get_HasInfo, (LogicalCallContext * __this));
IL2CPP_REGISTER_METHOD(0x023107C0, bool, get_HasUserData, (LogicalCallContext * __this));
IL2CPP_REGISTER_METHOD(0x02311F60, Hashtable *, get_Datastore, (LogicalCallContext * __this));
IL2CPP_REGISTER_METHOD(0x023120D0, void, __cctor, ());
}
