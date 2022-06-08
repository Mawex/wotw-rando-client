#include <interception_macros.h>

namespace app::methods::System::Runtime::CompilerServices::TaskAwaiter {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (TaskAwaiter__Boxed * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x0018EEE0, bool, get_IsCompleted, (TaskAwaiter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0018F1B0, void, OnCompleted, (TaskAwaiter__Boxed * __this, Action * continuation));
IL2CPP_REGISTER_METHOD(0x0018F1E0, void, UnsafeOnCompleted, (TaskAwaiter__Boxed * __this, Action * continuation));
IL2CPP_REGISTER_METHOD(0x0018EF60, void, GetResult, (TaskAwaiter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01A92BB0, void, ValidateEnd, (Task * task));
IL2CPP_REGISTER_METHOD(0x01A92C60, void, HandleNonSuccessAndDebuggerNotification, (Task * task));
IL2CPP_REGISTER_METHOD(0x01A92CF0, void, ThrowForNonSuccess, (Task * task));
IL2CPP_REGISTER_METHODINFO(0x04769BE8, TaskAwaiter_ThrowForNonSuccess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A92ED0, void, OnCompletedInternal, (Task * task, Action * continuation, bool continueOnCapturedContext, bool flowExecutionContext));
IL2CPP_REGISTER_METHODINFO(0x0478FC20, TaskAwaiter_OnCompletedInternal__MethodInfo);
}
