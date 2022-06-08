using namespace app;

namespace app::methods::System::Threading::Tasks::TaskScheduler {
IL2CPP_REGISTER_METHOD(0x0233EC50, bool, TryRunInline, (TaskScheduler * __this, Task * task, bool taskWasPreviouslyQueued));
IL2CPP_REGISTER_METHODINFO(0x0477A6F0, TaskScheduler_TryRunInline__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, TryDequeue, (TaskScheduler * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyWorkItemProgress, (TaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RequiresAtomicStartTransition, (TaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0233EED0, void, InternalQueueTask, (TaskScheduler * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x0233EF00, void, __ctor, (TaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0233EFB0, void, AddToActiveTaskSchedulers, (TaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0233F190, TaskScheduler *, get_Default, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0233F230, TaskScheduler *, get_Current, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0233F2F0, TaskScheduler *, get_InternalCurrent, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0233F3B0, int32_t, get_Id, (TaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0233F490, void, PublishUnobservedTaskException, (Object * sender, UnobservedTaskExceptionEventArgs * ueea));
IL2CPP_REGISTER_METHOD(0x0233F650, void, __cctor, (MethodInfo * method));
}
