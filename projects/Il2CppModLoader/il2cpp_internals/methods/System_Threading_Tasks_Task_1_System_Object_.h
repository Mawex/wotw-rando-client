#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02A5BCF0, String *, get_DebuggerDisplayResultDescription, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5BDA0, String *, get_DebuggerDisplayMethodDescription, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5A760, Object *, get_Result, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04749FA8, Task_1_System_Object__get_Result__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, Object *, get_ResultOnSuccess, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0277FA00, TaskFactory_1_System_Object_ *, get_Factory, ());
IL2CPP_REGISTER_METHOD(0x02A5ACF0, void, __ctor, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A5ADA0, void, __ctor, (Task_1_System_Object_ * __this, Object * state, TaskCreationOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02A5AE70, void, __ctor, (Task_1_System_Object_ * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x02A5AF90, void, __ctor, (Task_1_System_Object_ * __this, bool canceled, Object * result, TaskCreationOptions__Enum creationOptions, CancellationToken ct));
IL2CPP_REGISTER_METHOD(0x02A5B080, void, __ctor, (Task_1_System_Object_ * __this, Func_2_Object_Object_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x02A5B1C0, void, __ctor, (Task_1_System_Object_ * __this, Func_1_Object_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A5B2F0, void, __ctor, (Task_1_System_Object_ * __this, Func_1_Object_ * valueSelector, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x04701AF0, Task_1_System_Object___ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5B440, void, __ctor, (Task_1_System_Object_ * __this, Func_2_Object_Object_ * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x02A5B570, void, __ctor, (Task_1_System_Object_ * __this, Delegate * valueSelector, Object * state, Task * parent, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHODINFO(0x0477A5F8, Task_1_System_Object___ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5B6D0, Task_1_System_Object_ *, StartNew, (Task * parent, Func_1_Object_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x0475FE08, Task_1_System_Object__StartNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5B9E0, Task_1_System_Object_ *, StartNew, (Task * parent, Func_2_Object_Object_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, TaskScheduler * scheduler, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x047552E0, Task_1_System_Object__StartNew_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5BE90, bool, TrySetResult, (Task_1_System_Object_ * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x02A5A710, void, DangerousSetResult, (Task_1_System_Object_ * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x02A5A7B0, Object *, GetResultCore, (Task_1_System_Object_ * __this, bool waitCompletionNotification));
IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (Task_1_System_Object_ * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled, (Task_1_System_Object_ * __this, CancellationToken tokenToRecord));
IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled, (Task_1_System_Object_ * __this, CancellationToken tokenToRecord, Object * cancellationException));
IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, TaskAwaiter_1_System_Object_, GetAwaiter, (Task_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0277FBD0, ConfiguredTaskAwaitable_1_System_Object_, ConfigureAwait, (Task_1_System_Object_ * __this, bool continueOnCapturedContext));
IL2CPP_REGISTER_METHOD(0x02A5BF40, Task *, ContinueWith, (Task_1_System_Object_ * __this, Action_1_System_Threading_Tasks_Task_1__2 * continuationAction));
IL2CPP_REGISTER_METHOD(0x02A5C040, Task *, ContinueWith, (Task_1_System_Object_ * __this, Action_1_System_Threading_Tasks_Task_1__2 * continuationAction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x04788B30, Task_1_System_Object__ContinueWith_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01542810, Task_1_System_Object_ *, ContinueWith, (Task_1_System_Object_ * __this, Func_2_System_Threading_Tasks_Task_1_Object_ * continuationFunction));
IL2CPP_REGISTER_METHOD(0x01542910, Task_1_System_Object_ *, ContinueWith, (Task_1_System_Object_ * __this, Func_2_System_Threading_Tasks_Task_1_Object_ * continuationFunction, TaskScheduler * scheduler, CancellationToken cancellationToken, TaskContinuationOptions__Enum continuationOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHODINFO(0x0474A1D8, Task_1_System_Object__ContinueWith_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
