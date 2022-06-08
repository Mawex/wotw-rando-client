#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_VoidTaskResult_ {
IL2CPP_REGISTER_METHOD(0x02A5C300, void, __ctor, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04729030, Task_1_VoidTaskResult___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled, (Task_1_VoidTaskResult_ * __this, CancellationToken tokenToRecord));
IL2CPP_REGISTER_METHODINFO(0x047321A8, Task_1_VoidTaskResult__TrySetCanceled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5D4E0, bool, TrySetResult, (Task_1_VoidTaskResult_ * __this, VoidTaskResult result));
IL2CPP_REGISTER_METHODINFO(0x04749D08, Task_1_VoidTaskResult__TrySetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (Task_1_VoidTaskResult_ * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHODINFO(0x04710348, Task_1_VoidTaskResult__TrySetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled, (Task_1_VoidTaskResult_ * __this, CancellationToken tokenToRecord, Object * cancellationException));
IL2CPP_REGISTER_METHODINFO(0x04708508, Task_1_VoidTaskResult__TrySetCanceled_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5C3B0, void, __ctor, (Task_1_VoidTaskResult_ * __this, Object * state, TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02A5C480, void, __ctor, (Task_1_VoidTaskResult_ * __this, VoidTaskResult result));
IL2CPP_REGISTER_METHOD(0x02A5C5A0, void, __ctor, (Task_1_VoidTaskResult_ * __this, bool canceled, VoidTaskResult result, TaskCreationOptions__Enum creationOptions, CancellationToken ct));
IL2CPP_REGISTER_METHOD(0x02A5C690, void, __ctor, (Task_1_VoidTaskResult_ * __this, Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x02A5C7D0, void, __ctor, (Task_1_VoidTaskResult_ * __this, Func_1_System_Threading_Tasks_VoidTaskResult_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A5C900, void, __ctor, (Task_1_VoidTaskResult_ * __this, Func_1_System_Threading_Tasks_VoidTaskResult_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0472F3A8, Task_1_VoidTaskResult___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5CA50, void, __ctor, (Task_1_VoidTaskResult_ * __this, Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A5CB80, void, __ctor, (Task_1_VoidTaskResult_ * __this, Delegate * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0471FC98, Task_1_VoidTaskResult___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5CCE0, Task_1_VoidTaskResult_ *, StartNew, (Task * parent, Func_1_System_Threading_Tasks_VoidTaskResult_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x0474ECA0, Task_1_VoidTaskResult__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5CFF0, Task_1_VoidTaskResult_ *, StartNew, (Task * parent, Func_2_Object_System_Threading_Tasks_VoidTaskResult_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04789A18, Task_1_VoidTaskResult__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5D300, String *, get_DebuggerDisplayResultDescription, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5D3F0, String *, get_DebuggerDisplayMethodDescription, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x0277F770, void, DangerousSetResult, (Task_1_VoidTaskResult_ * __this, VoidTaskResult result));
IL2CPP_REGISTER_METHOD(0x0277F7C0, VoidTaskResult, get_Result, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, VoidTaskResult, get_ResultOnSuccess, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x0277F810, VoidTaskResult, GetResultCore, (Task_1_VoidTaskResult_ * __this, bool waitCompletionNotification));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_VoidTaskResult_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x0277FB00, void, InnerInvoke, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Threading_Tasks_VoidTaskResult_, GetAwaiter, (Task_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Threading_Tasks_VoidTaskResult_, ConfigureAwait, (Task_1_VoidTaskResult_ * __this, bool continueOnCapturedContext));
IL2CPP_REGISTER_METHOD(0x02A5D590, Task *, ContinueWith, (Task_1_VoidTaskResult_ * __this, Action_1_System_Threading_Tasks_Task_1__9 * continuationAction));
IL2CPP_REGISTER_METHOD(0x02A5D690, Task *, ContinueWith, (Task_1_VoidTaskResult_ * __this, Action_1_System_Threading_Tasks_Task_1__9 * continuationAction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04767A48, Task_1_VoidTaskResult__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
