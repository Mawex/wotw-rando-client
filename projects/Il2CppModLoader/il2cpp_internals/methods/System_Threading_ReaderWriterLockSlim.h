using namespace app;

namespace app::methods::System::Threading::ReaderWriterLockSlim {
IL2CPP_REGISTER_METHOD(0x02FD2290, void, InitializeThreadCounts, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD22A0, void, __ctor, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD2340, void, __ctor, (ReaderWriterLockSlim * __this, LockRecursionPolicy__Enum recursionPolicy));
IL2CPP_REGISTER_METHOD(0x02FD2400, bool, IsRWEntryEmpty, (ReaderWriterCount * rwc));
IL2CPP_REGISTER_METHOD(0x02FD2440, bool, IsRwHashEntryChanged, (ReaderWriterLockSlim * __this, ReaderWriterCount * lrwc));
IL2CPP_REGISTER_METHOD(0x02FD2460, ReaderWriterCount *, GetThreadRWCount, (ReaderWriterLockSlim * __this, bool dontAllocate));
IL2CPP_REGISTER_METHOD(0x02FD26D0, void, EnterWriteLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD2710, bool, TryEnterWriteLock, (ReaderWriterLockSlim * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x02FD2750, bool, TryEnterWriteLock, (ReaderWriterLockSlim * __this, ReaderWriterLockSlim_TimeoutTracker timeout));
IL2CPP_REGISTER_METHOD(0x02FD2760, bool, TryEnterWriteLockCore, (ReaderWriterLockSlim * __this, ReaderWriterLockSlim_TimeoutTracker timeout));
IL2CPP_REGISTER_METHODINFO(0x04767A20, ReaderWriterLockSlim_TryEnterWriteLockCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FD2CA0, void, EnterUpgradeableReadLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD2CE0, bool, TryEnterUpgradeableReadLock, (ReaderWriterLockSlim * __this, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x02FD2D20, bool, TryEnterUpgradeableReadLock, (ReaderWriterLockSlim * __this, ReaderWriterLockSlim_TimeoutTracker timeout));
IL2CPP_REGISTER_METHOD(0x02FD2D30, bool, TryEnterUpgradeableReadLockCore, (ReaderWriterLockSlim * __this, ReaderWriterLockSlim_TimeoutTracker timeout));
IL2CPP_REGISTER_METHODINFO(0x0471F178, ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FD3180, void, ExitWriteLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHODINFO(0x047295A8, ReaderWriterLockSlim_ExitWriteLock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FD3380, void, ExitUpgradeableReadLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHODINFO(0x047202A0, ReaderWriterLockSlim_ExitUpgradeableReadLock__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FD3640, void, LazyCreateEvent, (ReaderWriterLockSlim * __this, EventWaitHandle * * waitEvent, bool makeAutoResetEvent));
IL2CPP_REGISTER_METHOD(0x02FD38B0, bool, WaitOnEvent, (ReaderWriterLockSlim * __this, EventWaitHandle * waitEvent, uint32_t * numWaiters, ReaderWriterLockSlim_TimeoutTracker timeout, bool isWriteWaiter));
IL2CPP_REGISTER_METHOD(0x02FD3AA0, void, ExitAndWakeUpAppropriateWaiters, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3B60, void, ExitAndWakeUpAppropriateWaitersPreferringWriters, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3C00, void, ExitAndWakeUpAppropriateReadWaiters, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3C90, bool, IsWriterAcquired, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CA0, void, SetWriterAcquired, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CB0, void, ClearWriterAcquired, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CC0, void, SetWritersWaiting, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CD0, void, ClearWritersWaiting, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CE0, void, SetUpgraderWaiting, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3CF0, void, ClearUpgraderWaiting, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3D00, uint32_t, GetNumReaders, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3D10, void, EnterMyLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3D80, void, EnterMyLockSpin, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3DF0, void, ExitMyLock, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3E00, void, SpinWait, (int32_t SpinCount));
IL2CPP_REGISTER_METHOD(0x02FD3E50, void, Dispose, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD3E60, void, Dispose, (ReaderWriterLockSlim * __this, bool disposing));
IL2CPP_REGISTER_METHODINFO(0x047877C8, ReaderWriterLockSlim_Dispose_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FD4300, bool, get_IsReadLockHeld, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD4400, bool, get_IsUpgradeableReadLockHeld, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD4570, bool, get_IsWriteLockHeld, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD46E0, int32_t, get_RecursiveReadCount, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD47D0, int32_t, get_RecursiveUpgradeCount, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x02FD4920, int32_t, get_RecursiveWriteCount, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_WaitingReadCount, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_WaitingUpgradeCount, (ReaderWriterLockSlim * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_WaitingWriteCount, (ReaderWriterLockSlim * __this));
}
