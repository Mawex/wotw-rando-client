using namespace app;

namespace app::methods::System::Threading::SemaphoreSlim {
IL2CPP_REGISTER_METHOD(0x0232AD00, int32_t, get_CurrentCount, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232AD10, void, __ctor, (SemaphoreSlim * __this, int32_t initialCount));
IL2CPP_REGISTER_METHOD(0x0232AD20, void, __ctor, (SemaphoreSlim * __this, int32_t initialCount, int32_t maxCount));
IL2CPP_REGISTER_METHODINFO(0x04789EF8, SemaphoreSlim__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232AFA0, void, Wait, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232AFB0, bool, Wait, (SemaphoreSlim * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x0232AFC0, bool, Wait, (SemaphoreSlim * __this, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04780980, SemaphoreSlim_Wait_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232B5C0, bool, WaitUntilCountOrTimeout, (SemaphoreSlim * __this, int32_t millisecondsTimeout, uint32_t startTime, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0232B670, Task *, WaitAsync, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232B680, Task_1_System_Boolean_ *, WaitAsync, (SemaphoreSlim * __this, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04781368, SemaphoreSlim_WaitAsync_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232BAB0, SemaphoreSlim_TaskNode *, CreateAndAddAsyncWaiter, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232BD20, bool, RemoveAsyncWaiter, (SemaphoreSlim * __this, SemaphoreSlim_TaskNode * task));
IL2CPP_REGISTER_METHOD(0x0232BDB0, Task_1_System_Boolean_ *, WaitUntilCountOrTimeoutAsync, (SemaphoreSlim * __this, SemaphoreSlim_TaskNode * asyncWaiter, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x0232BEF0, int32_t, Release, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232BF00, int32_t, Release, (SemaphoreSlim * __this, int32_t releaseCount));
IL2CPP_REGISTER_METHODINFO(0x04776B48, SemaphoreSlim_Release_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232C210, void, QueueWaiterTask, (SemaphoreSlim_TaskNode * waiterTask));
IL2CPP_REGISTER_METHOD(0x0232C220, void, Dispose, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHOD(0x0232C2D0, void, Dispose, (SemaphoreSlim * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x0232C340, void, CancellationTokenCanceledEventHandler, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047105A0, SemaphoreSlim_CancellationTokenCanceledEventHandler__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232C4D0, void, CheckDispose, (SemaphoreSlim * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AA70, SemaphoreSlim_CheckDispose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004C50A0, String *, GetResourceString, (String * str));
IL2CPP_REGISTER_METHOD(0x0232C5B0, void, __cctor, (MethodInfo * method));
}
