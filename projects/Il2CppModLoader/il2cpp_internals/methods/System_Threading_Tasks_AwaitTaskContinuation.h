#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::AwaitTaskContinuation {
IL2CPP_REGISTER_METHOD(0x0232E5F0, void, __ctor, (AwaitTaskContinuation * __this, Action * action, bool flowExecutionContext, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x0232E6C0, void, __ctor, (AwaitTaskContinuation * __this, Action * action, bool flowExecutionContext));
IL2CPP_REGISTER_METHOD(0x0232E780, Task *, CreateTask, (AwaitTaskContinuation * __this, Action_1_Object_ * action, Object * state, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0232E960, void, Run, (AwaitTaskContinuation * __this, Task * task, bool canInlineContinuationTask));
IL2CPP_REGISTER_METHOD(0x0232EAA0, bool, get_IsValidLocationForInlining, ());
IL2CPP_REGISTER_METHOD(0x0232EC00, void, ExecuteWorkItemHelper, (AwaitTaskContinuation * __this));
IL2CPP_REGISTER_METHOD(0x0232ED60, void, IThreadPoolWorkItem_ExecuteWorkItem, (AwaitTaskContinuation * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (AwaitTaskContinuation * __this, ThreadAbortException * tae));
IL2CPP_REGISTER_METHOD(0x0232ED90, void, InvokeAction, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x04703390, AwaitTaskContinuation_InvokeAction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232EE40, ContextCallback *, GetInvokeActionCallback, ());
IL2CPP_REGISTER_METHOD(0x0232EFC0, void, RunCallback, (AwaitTaskContinuation * __this, ContextCallback * callback, Object * state, Task * * currentTask));
IL2CPP_REGISTER_METHOD(0x0232F180, void, RunOrScheduleAction, (Action * action, bool allowInlining, Task * * currentTask));
IL2CPP_REGISTER_METHOD(0x0232F320, void, UnsafeScheduleAction, (Action * action, Task * task));
IL2CPP_REGISTER_METHOD(0x0232F4C0, void, ThrowAsyncIfNecessary, (Exception * exc));
}
