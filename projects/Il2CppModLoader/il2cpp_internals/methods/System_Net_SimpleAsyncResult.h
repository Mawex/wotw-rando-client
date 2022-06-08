using namespace app;

namespace app::methods::System::Net::SimpleAsyncResult {
IL2CPP_REGISTER_METHOD(0x01BDA2F0, void, __ctor, (SimpleAsyncResult * __this, SimpleAsyncCallback * cb));
IL2CPP_REGISTER_METHOD(0x01BDA440, void, __ctor, (SimpleAsyncResult * __this, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHOD(0x01BDA740, void, Run, (Func_2_System_Net_SimpleAsyncResult_Boolean_ * func, SimpleAsyncCallback * callback));
IL2CPP_REGISTER_METHOD(0x01BDAA30, void, RunWithLock, (Object * locker, Func_2_System_Net_SimpleAsyncResult_Boolean_ * func, SimpleAsyncCallback * callback));
IL2CPP_REGISTER_METHOD(0x01BDAD50, void, Reset_internal, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDAE40, void, SetCompleted, (SimpleAsyncResult * __this, bool synch, Exception * e));
IL2CPP_REGISTER_METHOD(0x01BDAE80, void, SetCompleted, (SimpleAsyncResult * __this, bool synch));
IL2CPP_REGISTER_METHOD(0x01BDAEC0, void, SetCompleted_internal, (SimpleAsyncResult * __this, bool synch, Exception * e));
IL2CPP_REGISTER_METHOD(0x01BDAFB0, void, SetCompleted_internal, (SimpleAsyncResult * __this, bool synch));
IL2CPP_REGISTER_METHOD(0x01BDAFC0, void, DoCallback_private, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDAFF0, void, DoCallback_internal, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDB020, void, WaitUntilComplete, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDB070, bool, WaitUntilComplete, (SimpleAsyncResult * __this, int32_t timeout, bool exitContext));
IL2CPP_REGISTER_METHOD(0x002FBB00, Object *, get_AsyncState, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDB0F0, WaitHandle *, get_AsyncWaitHandle, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDB340, bool, get_CompletedSynchronously, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_CompletedSynchronouslyPeek, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01BDB500, bool, get_IsCompleted, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00938880, bool, get_GotException, (SimpleAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Exception *, get_Exception, (SimpleAsyncResult * __this));
}
