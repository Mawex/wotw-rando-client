using namespace app;

namespace app::methods::System::Threading::Tasks::ThreadPoolTaskScheduler {
IL2CPP_REGISTER_METHOD(0x02340880, void, __ctor, (ThreadPoolTaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x023409B0, void, LongRunningThreadWork, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04711EF8, ThreadPoolTaskScheduler_LongRunningThreadWork__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02340AB0, void, QueueTask, (ThreadPoolTaskScheduler * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x02340CA0, bool, TryExecuteTaskInline, (ThreadPoolTaskScheduler * __this, Task * task, bool taskWasPreviouslyQueued));
IL2CPP_REGISTER_METHOD(0x02340DA0, bool, TryDequeue, (ThreadPoolTaskScheduler * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x02340DB0, IEnumerable_1_System_Threading_Tasks_Task_ *, GetScheduledTasks, (ThreadPoolTaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x02340ED0, IEnumerable_1_System_Threading_Tasks_Task_ *, FilterTasksFromWorkItems, (ThreadPoolTaskScheduler * __this, IEnumerable_1_System_Threading_IThreadPoolWorkItem_ * tpwItems));
IL2CPP_REGISTER_METHOD(0x02341060, void, NotifyWorkItemProgress, (ThreadPoolTaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresAtomicStartTransition, (ThreadPoolTaskScheduler * __this));
IL2CPP_REGISTER_METHOD(0x02341070, void, __cctor, (MethodInfo * method));
}
