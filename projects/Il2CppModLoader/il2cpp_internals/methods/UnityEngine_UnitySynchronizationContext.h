using namespace app;

namespace app::methods::UnityEngine::UnitySynchronizationContext {
IL2CPP_REGISTER_METHOD(0x02C71310, void, __ctor, (UnitySynchronizationContext * __this, int32_t mainThreadID));
IL2CPP_REGISTER_METHOD(0x02C715B0, void, __ctor, (UnitySynchronizationContext * __this, List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * queue, int32_t mainThreadID));
IL2CPP_REGISTER_METHOD(0x02C71760, void, Send, (UnitySynchronizationContext * __this, SendOrPostCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x02C71AC0, void, OperationStarted, (UnitySynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x02C71AD0, void, OperationCompleted, (UnitySynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x02C71AE0, void, Post, (UnitySynchronizationContext * __this, SendOrPostCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x02C71C60, SynchronizationContext *, CreateCopy, (UnitySynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x02C71DC0, void, Exec, (UnitySynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x02C72110, bool, HasPendingTasks, (UnitySynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x02C721C0, void, InitializeSynchronizationContext, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C723A0, void, ExecuteTasks, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02C72460, bool, ExecutePendingTasks, (int64_t millisecondsTimeout));
}
