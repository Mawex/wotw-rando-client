using namespace app;

namespace app::methods::System::Threading::RegisteredWaitHandle {
IL2CPP_REGISTER_METHOD(0x0232A0F0, void, __ctor, (RegisteredWaitHandle * __this, WaitHandle * waitObject, WaitOrTimerCallback * callback, Object * state, TimeSpan timeout, bool executeOnlyOnce));
IL2CPP_REGISTER_METHOD(0x0232A290, void, Wait, (RegisteredWaitHandle * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04790C30, RegisteredWaitHandle_Wait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232A960, void, DoCallBack, (RegisteredWaitHandle * __this, Object * timedOut));
IL2CPP_REGISTER_METHODINFO(0x0476E660, RegisteredWaitHandle_DoCallBack__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0232AB40, bool, Unregister, (RegisteredWaitHandle * __this, WaitHandle * waitObject));
}
