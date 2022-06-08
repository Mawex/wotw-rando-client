#include <interception_macros.h>

namespace app::methods::System::Threading::ExecutionContext_Reader {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (ExecutionContext_Reader__Boxed * __this, ExecutionContext * ec));
IL2CPP_REGISTER_METHOD(0x00107C00, ExecutionContext *, DangerousGetRawExecutionContext, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206E90, bool, IsDefaultFTContext, (ExecutionContext_Reader__Boxed * __this, bool ignoreSyncCtx));
IL2CPP_REGISTER_METHOD(0x00206EB0, bool, get_IsFlowSuppressed, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206ED0, SynchronizationContext *, get_SynchronizationContext, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206EE0, SynchronizationContext *, get_SynchronizationContextNoFlow, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206EF0, LogicalCallContext_Reader, get_LogicalCallContext, (ExecutionContext_Reader__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206F10, Object *, GetLocalValue, (ExecutionContext_Reader__Boxed * __this, IAsyncLocal * local));
IL2CPP_REGISTER_METHOD(0x00206F20, bool, HasSameLocalValues, (ExecutionContext_Reader__Boxed * __this, ExecutionContext * other));
}
