using namespace app;

namespace app::methods::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation {
IL2CPP_REGISTER_METHOD(0x0232FE20, void, __ctor, (SynchronizationContextAwaitTaskContinuation * __this, SynchronizationContext * context, Action * action, bool flowExecutionContext, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x0232FE60, void, Run, (SynchronizationContextAwaitTaskContinuation * __this, Task * task, bool canInlineContinuationTask));
IL2CPP_REGISTER_METHOD(0x02330020, void, PostAction, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x0474EBA0, SynchronizationContextAwaitTaskContinuation_PostAction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02330120, ContextCallback *, GetPostActionCallback, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023302E0, void, __cctor, (MethodInfo * method));
}
