#include <interception_macros.h>

namespace app::methods::System::Threading::CancellationCallbackInfo {
IL2CPP_REGISTER_METHOD(0x00F70AB0, void, __ctor, (CancellationCallbackInfo * __this, Action_1_Object_ * callback, Object * stateForCallback, SynchronizationContext * targetSyncContext, ExecutionContext * targetExecutionContext, CancellationTokenSource * cancellationTokenSource));
IL2CPP_REGISTER_METHOD(0x027D8450, void, ExecuteCallback, (CancellationCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x027D86E0, void, ExecutionContextCallback, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0473A6A8, CancellationCallbackInfo_ExecutionContextCallback__MethodInfo);
}
