using namespace app;

namespace app::methods::System::Net::LazyAsyncResult {
IL2CPP_REGISTER_METHOD(0x01E6B520, LazyAsyncResult_ThreadContext *, get_CurrentThreadContext, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01E6B6E0, void, __ctor, (LazyAsyncResult * __this, Object * myObject, Object * myState, AsyncCallback * myCallBack));
IL2CPP_REGISTER_METHOD(0x01E6B7C0, void, __ctor, (LazyAsyncResult * __this, Object * myObject, Object * myState, AsyncCallback * myCallBack, Object * result));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_AsyncObject, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_AsyncState, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, AsyncCallback *, get_AsyncCallback, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_AsyncCallback, (LazyAsyncResult * __this, AsyncCallback * value));
IL2CPP_REGISTER_METHOD(0x01E6B7F0, WaitHandle *, get_AsyncWaitHandle, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6B8E0, bool, LazilyCreateEvent, (LazyAsyncResult * __this, ManualResetEvent * * waitHandle));
IL2CPP_REGISTER_METHODINFO(0x04733CC0, LazyAsyncResult_LazilyCreateEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugProtectState, (LazyAsyncResult * __this, bool protect));
IL2CPP_REGISTER_METHOD(0x01E6BB30, bool, get_CompletedSynchronously, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6BB50, bool, get_IsCompleted, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6BB70, bool, get_InternalPeekCompleted, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6BB80, Object *, get_Result, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Result, (LazyAsyncResult * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_EndCalled, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_EndCalled, (LazyAsyncResult * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ErrorCode, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_ErrorCode, (LazyAsyncResult * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E6BC50, void, ProtectedInvokeCallback, (LazyAsyncResult * __this, Object * result, void * userToken));
IL2CPP_REGISTER_METHODINFO(0x04740860, LazyAsyncResult_ProtectedInvokeCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6BE10, void, InvokeCallback, (LazyAsyncResult * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x01E6BEA0, void, InvokeCallback, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6BF20, void, Complete, (LazyAsyncResult * __this, void * userToken));
IL2CPP_REGISTER_METHOD(0x01E6C1A0, void, WorkerThreadComplete, (LazyAsyncResult * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04754760, LazyAsyncResult_WorkerThreadComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Cleanup, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6C260, Object *, InternalWaitForCompletion, (LazyAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6C270, Object *, WaitForCompletion, (LazyAsyncResult * __this, bool snap));
IL2CPP_REGISTER_METHOD(0x01E6C4F0, void, InternalCleanup, (LazyAsyncResult * __this));
}
