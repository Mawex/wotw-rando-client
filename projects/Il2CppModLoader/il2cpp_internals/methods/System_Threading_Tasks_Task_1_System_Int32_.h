#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x02A58F00, int32_t, get_Result, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04743AD0, Task_1_System_Int32__get_Result__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Int32_, GetAwaiter, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0473F888, Task_1_System_Int32__GetAwaiter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57EC0, void, __ctor, (Task_1_System_Int32_ * __this, bool canceled, int32_t result, TaskCreationOptions__Enum creationOptions, CancellationToken ct));
IL2CPP_REGISTER_METHODINFO(0x0475DEF0, Task_1_System_Int32___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57FB0, void, __ctor, (Task_1_System_Int32_ * __this, Func_2_Object_Int32_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x04759638, Task_1_System_Int32___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Int32_, ConfigureAwait, (Task_1_System_Int32_ * __this, bool continueOnCapturedContext));
IL2CPP_REGISTER_METHODINFO(0x04711150, Task_1_System_Int32__ConfigureAwait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A57C20, void, __ctor, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02A57CD0, void, __ctor, (Task_1_System_Int32_ * __this, Object * state, TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02A57DA0, void, __ctor, (Task_1_System_Int32_ * __this, int32_t result));
IL2CPP_REGISTER_METHOD(0x02A580F0, void, __ctor, (Task_1_System_Int32_ * __this, Func_1_Int32_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A58220, void, __ctor, (Task_1_System_Int32_ * __this, Func_1_Int32_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0477AC30, Task_1_System_Int32___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58370, void, __ctor, (Task_1_System_Int32_ * __this, Func_2_Object_Int32_ * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A584A0, void, __ctor, (Task_1_System_Int32_ * __this, Delegate * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04763500, Task_1_System_Int32___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58600, Task_1_System_Int32_ *, StartNew, (Task * parent, Func_1_Int32_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04777E30, Task_1_System_Int32__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58910, Task_1_System_Int32_ *, StartNew, (Task * parent, Func_2_Object_Int32_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04791940, Task_1_System_Int32__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A58C20, String *, get_DebuggerDisplayResultDescription, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02A58D10, String *, get_DebuggerDisplayMethodDescription, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02A58E00, bool, TrySetResult, (Task_1_System_Int32_ * __this, int32_t result));
IL2CPP_REGISTER_METHOD(0x02A58EB0, void, DangerousSetResult, (Task_1_System_Int32_ * __this, int32_t result));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ResultOnSuccess, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02A58F50, int32_t, GetResultCore, (Task_1_System_Int32_ * __this, bool waitCompletionNotification));
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (Task_1_System_Int32_ * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled, (Task_1_System_Int32_ * __this, CancellationToken tokenToRecord));
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled, (Task_1_System_Int32_ * __this, CancellationToken tokenToRecord, Object * cancellationException));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_System_Int32_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x02A58FF0, void, InnerInvoke, (Task_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02A590C0, Task *, ContinueWith, (Task_1_System_Int32_ * __this, Action_1_System_Threading_Tasks_Task_1__7 * continuationAction));
IL2CPP_REGISTER_METHOD(0x02A591C0, Task *, ContinueWith, (Task_1_System_Int32_ * __this, Action_1_System_Threading_Tasks_Task_1__7 * continuationAction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x0472C248, Task_1_System_Int32__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
