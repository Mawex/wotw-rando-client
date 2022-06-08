using namespace app;

namespace app::methods::System::Threading::SpinLock {
IL2CPP_REGISTER_METHOD(0x001E6AC0, void, __ctor, (SpinLock__Boxed * __this, bool enableThreadOwnerTracking));
IL2CPP_REGISTER_METHOD(0x001E6AF0, void, Enter, (SpinLock__Boxed * __this, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x001E6B00, void, TryEnter, (SpinLock__Boxed * __this, int32_t millisecondsTimeout, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x001E6B10, void, ContinueTryEnter, (SpinLock__Boxed * __this, int32_t millisecondsTimeout, bool * lockTaken));
IL2CPP_REGISTER_METHODINFO(0x047142F0, SpinLock_ContinueTryEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6B20, void, DecrementWaiters, (SpinLock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E6B30, void, ContinueTryEnterWithThreadTracking, (SpinLock__Boxed * __this, int32_t millisecondsTimeout, uint32_t startTime, bool * lockTaken));
IL2CPP_REGISTER_METHODINFO(0x047342A8, SpinLock_ContinueTryEnterWithThreadTracking__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6B40, void, Exit, (SpinLock__Boxed * __this, bool useMemoryBarrier));
IL2CPP_REGISTER_METHOD(0x001E6B50, void, ExitSlowPath, (SpinLock__Boxed * __this, bool useMemoryBarrier));
IL2CPP_REGISTER_METHODINFO(0x04779040, SpinLock_ExitSlowPath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6B60, bool, get_IsHeld, (SpinLock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E6B90, bool, get_IsHeldByCurrentThread, (SpinLock__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D898, SpinLock_get_IsHeldByCurrentThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001E6BA0, bool, get_IsThreadOwnerTrackingEnabled, (SpinLock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0232DF20, void, __cctor, (MethodInfo * method));
}
