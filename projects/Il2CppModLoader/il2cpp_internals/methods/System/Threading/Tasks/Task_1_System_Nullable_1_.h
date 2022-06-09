#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::Task_1_System_Nullable_1_ {
    IL2CPP_REGISTER_METHOD(0x0277FBD0, app::ConfiguredTaskAwaitable_1_System_Nullable_1_, ConfigureAwait, (app::Task_1_System_Nullable_1_ * this_ptr, bool continue_on_captured_context));
    IL2CPP_REGISTER_METHODINFO(0x04795D08, Task_1_System_Nullable_1__ConfigureAwait__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A59480, void, __ctor_1, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A59530, void, __ctor_2, (app::Task_1_System_Nullable_1_ * this_ptr, app::Object * state, app::TaskCreationOptions__Enum options));
    IL2CPP_REGISTER_METHOD(0x02A59600, void, __ctor_3, (app::Task_1_System_Nullable_1_ * this_ptr, app::Nullable_1_Int32_ result));
    IL2CPP_REGISTER_METHOD(0x02A59720, void, __ctor_4, (app::Task_1_System_Nullable_1_ * this_ptr, bool canceled, app::Nullable_1_Int32_ result, app::TaskCreationOptions__Enum creation_options, app::CancellationToken ct));
    IL2CPP_REGISTER_METHOD(0x02A59810, void, __ctor_5, (app::Task_1_System_Nullable_1_ * this_ptr, app::Func_2_Object_Nullable_1_Int32_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options));
    IL2CPP_REGISTER_METHOD(0x02A59950, void, __ctor_6, (app::Task_1_System_Nullable_1_ * this_ptr, app::Func_1_Nullable_1_Int32_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x02A59A80, void, __ctor_7, (app::Task_1_System_Nullable_1_ * this_ptr, app::Func_1_Nullable_1_Int32_ * value_selector, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHODINFO(0x04744948, Task_1_System_Nullable_1___ctor_6__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A59BD0, void, __ctor_8, (app::Task_1_System_Nullable_1_ * this_ptr, app::Func_2_Object_Nullable_1_Int32_ * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHOD(0x02A59D00, void, __ctor_9, (app::Task_1_System_Nullable_1_ * this_ptr, app::Delegate * value_selector, app::Object * state, app::Task * parent, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHODINFO(0x0470D688, Task_1_System_Nullable_1___ctor_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A59E60, app::Task_1_System_Nullable_1_ *, StartNew_1, (app::Task * parent, app::Func_1_Nullable_1_Int32_ * function, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x04740DE0, Task_1_System_Nullable_1__StartNew__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5A170, app::Task_1_System_Nullable_1_ *, StartNew_2, (app::Task * parent, app::Func_2_Object_Nullable_1_Int32_ * function, app::Object * state, app::CancellationToken cancellation_token, app::TaskCreationOptions__Enum creation_options, app::InternalTaskOptions__Enum internal_options, app::TaskScheduler * scheduler, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x04724BF8, Task_1_System_Nullable_1__StartNew_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02A5A480, app::String *, get_DebuggerDisplayResultDescription, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5A570, app::String *, get_DebuggerDisplayMethodDescription, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5A660, bool, TrySetResult, (app::Task_1_System_Nullable_1_ * this_ptr, app::Nullable_1_Int32_ result));
    IL2CPP_REGISTER_METHOD(0x02A5A710, void, DangerousSetResult, (app::Task_1_System_Nullable_1_ * this_ptr, app::Nullable_1_Int32_ result));
    IL2CPP_REGISTER_METHOD(0x02A5A760, app::Nullable_1_Int32_, get_Result, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Int32_, get_ResultOnSuccess, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5A7B0, app::Nullable_1_Int32_, GetResultCore, (app::Task_1_System_Nullable_1_ * this_ptr, bool wait_completion_notification));
    IL2CPP_REGISTER_METHOD(0x0277F8C0, bool, TrySetException, (app::Task_1_System_Nullable_1_ * this_ptr, app::Object * exception_object));
    IL2CPP_REGISTER_METHOD(0x0277F950, bool, TrySetCanceled_1, (app::Task_1_System_Nullable_1_ * this_ptr, app::CancellationToken token_to_record));
    IL2CPP_REGISTER_METHOD(0x0277F980, bool, TrySetCanceled_2, (app::Task_1_System_Nullable_1_ * this_ptr, app::CancellationToken token_to_record, app::Object * cancellation_exception));
    IL2CPP_REGISTER_METHOD(0x0277FA00, app::TaskFactory_1_System_Nullable_1_ *, get_Factory, ());
    IL2CPP_REGISTER_METHOD(0x02A5A860, void, InnerInvoke, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::TaskAwaiter_1_System_Nullable_1_, GetAwaiter, (app::Task_1_System_Nullable_1_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A5A930, app::Task *, ContinueWith_1, (app::Task_1_System_Nullable_1_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__8 * continuation_action));
    IL2CPP_REGISTER_METHOD(0x02A5AA30, app::Task *, ContinueWith_2, (app::Task_1_System_Nullable_1_ * this_ptr, app::Action_1_System_Threading_Tasks_Task_1__8 * continuation_action, app::TaskScheduler * scheduler, app::CancellationToken cancellation_token, app::TaskContinuationOptions__Enum continuation_options, app::StackCrawlMark__Enum * stack_mark));
    IL2CPP_REGISTER_METHODINFO(0x047474E8, Task_1_System_Nullable_1__ContinueWith_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02780010, void, __cctor, ());
}
