using namespace app;

namespace app::methods::System::Threading::ThreadPoolWorkQueue_WorkStealingQueue {
IL2CPP_REGISTER_METHOD(0x02347FE0, void, LocalPush, (ThreadPoolWorkQueue_WorkStealingQueue * __this, IThreadPoolWorkItem * obj));
IL2CPP_REGISTER_METHOD(0x02348530, bool, LocalFindAndPop, (ThreadPoolWorkQueue_WorkStealingQueue * __this, IThreadPoolWorkItem * obj));
IL2CPP_REGISTER_METHOD(0x02348810, bool, LocalPop, (ThreadPoolWorkQueue_WorkStealingQueue * __this, IThreadPoolWorkItem * * obj));
IL2CPP_REGISTER_METHOD(0x02348BF0, bool, TrySteal, (ThreadPoolWorkQueue_WorkStealingQueue * __this, IThreadPoolWorkItem * * obj, bool * missedSteal));
IL2CPP_REGISTER_METHOD(0x02348C10, bool, TrySteal, (ThreadPoolWorkQueue_WorkStealingQueue * __this, IThreadPoolWorkItem * * obj, bool * missedSteal, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x02348F60, void, __ctor, (ThreadPoolWorkQueue_WorkStealingQueue * __this));
}
