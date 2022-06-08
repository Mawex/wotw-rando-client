#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_System::Nullable_1_ {
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Nullable_1_, ConfigureAwait, (Task_1_System_Nullable_1_ * __this, bool continueOnCapturedContext));
IL2CPP_REGISTER_METHODINFO(0x04795D08, Task_1_System_Nullable_1__ConfigureAwait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A59480, void, __ctor, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02A59530, void, __ctor, (Task_1_System_Nullable_1_ * __this, Object * state, TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02A59600, void, __ctor, (Task_1_System_Nullable_1_ * __this, Nullable_1_Int32_ result));
IL2CPP_REGISTER_METHOD(0x02A59720, void, __ctor, (Task_1_System_Nullable_1_ * __this, bool canceled, Nullable_1_Int32_ result, TaskCreationOptions__Enum creationOptions, CancellationToken ct));
IL2CPP_REGISTER_METHOD(0x02A59810, void, __ctor, (Task_1_System_Nullable_1_ * __this, Func_2_Object_Nullable_1_Int32_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x02A59950, void, __ctor, (Task_1_System_Nullable_1_ * __this, Func_1_Nullable_1_Int32_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A59A80, void, __ctor, (Task_1_System_Nullable_1_ * __this, Func_1_Nullable_1_Int32_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04744948, Task_1_System_Nullable_1___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A59BD0, void, __ctor, (Task_1_System_Nullable_1_ * __this, Func_2_Object_Nullable_1_Int32_ * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A59D00, void, __ctor, (Task_1_System_Nullable_1_ * __this, Delegate * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0470D688, Task_1_System_Nullable_1___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A59E60, Task_1_System_Nullable_1_ *, StartNew, (Task * parent, Func_1_Nullable_1_Int32_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04740DE0, Task_1_System_Nullable_1__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5A170, Task_1_System_Nullable_1_ *, StartNew, (Task * parent, Func_2_Object_Nullable_1_Int32_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04724BF8, Task_1_System_Nullable_1__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5A480, String *, get_DebuggerDisplayResultDescription, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5A570, String *, get_DebuggerDisplayMethodDescription, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5A660, bool, TrySetResult, (Task_1_System_Nullable_1_ * __this, Nullable_1_Int32_ result));
IL2CPP_REGISTER_METHOD(0x02A5A710, void, DangerousSetResult, (Task_1_System_Nullable_1_ * __this, Nullable_1_Int32_ result));
IL2CPP_REGISTER_METHOD(0x02A5A760, Nullable_1_Int32_, get_Result, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Nullable_1_Int32_, get_ResultOnSuccess, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5A7B0, Nullable_1_Int32_, GetResultCore, (Task_1_System_Nullable_1_ * __this, bool waitCompletionNotification));
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (Task_1_System_Nullable_1_ * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled, (Task_1_System_Nullable_1_ * __this, CancellationToken tokenToRecord));
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled, (Task_1_System_Nullable_1_ * __this, CancellationToken tokenToRecord, Object * cancellationException));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_System_Nullable_1_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Nullable_1_, GetAwaiter, (Task_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5A930, Task *, ContinueWith, (Task_1_System_Nullable_1_ * __this, Action_1_System_Threading_Tasks_Task_1__8 * continuationAction));
IL2CPP_REGISTER_METHOD(0x02A5AA30, Task *, ContinueWith, (Task_1_System_Nullable_1_ * __this, Action_1_System_Threading_Tasks_Task_1__8 * continuationAction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047474E8, Task_1_System_Nullable_1__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
