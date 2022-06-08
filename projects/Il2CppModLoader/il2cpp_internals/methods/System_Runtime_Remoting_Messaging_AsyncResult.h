using namespace app;

namespace app::methods::System::Runtime::Remoting::Messaging::AsyncResult {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02309B50, void, __ctor, (AsyncResult * __this, WaitCallback * cb, Object * state, bool capture_context));
IL2CPP_REGISTER_METHOD(0x02309D00, void, WaitCallback_Context, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x04719470, AsyncResult_WaitCallback_Context__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_AsyncState, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x02309DF0, WaitHandle *, get_AsyncWaitHandle, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_CompletedSynchronously, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_IsCompleted, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004379E0, bool, get_EndInvokeCalled, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004379F0, void, set_EndInvokeCalled, (AsyncResult * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_AsyncDelegate, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, IMessageSink *, get_NextSink, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0230A030, IMessageCtrl *, AsyncProcessMessage, (AsyncResult * __this, IMessage * msg, IMessageSink * replySink));
IL2CPP_REGISTER_METHODINFO(0x0472A2E8, AsyncResult_AsyncProcessMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBBC0, IMessage *, GetReplyMessage, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetMessageCtrl, (AsyncResult * __this, IMessageCtrl * mc));
IL2CPP_REGISTER_METHOD(0x00447370, void, SetCompletedSynchronously, (AsyncResult * __this, bool completed));
IL2CPP_REGISTER_METHOD(0x0230A080, IMessage *, EndInvoke, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0230A1C0, IMessage *, SyncProcessMessage, (AsyncResult * __this, IMessage * msg));
IL2CPP_REGISTER_METHOD(0x002FBB80, MonoMethodMessage *, get_CallMessage, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_CallMessage, (AsyncResult * __this, MonoMethodMessage * value));
IL2CPP_REGISTER_METHOD(0x0230A370, void, IThreadPoolWorkItem_ExecuteWorkItem, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, (AsyncResult * __this, ThreadAbortException * tae));
IL2CPP_REGISTER_METHOD(0x0230A370, Object *, Invoke, (AsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0230A380, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0230A4E0, void, __ctor_b__17_0, (AsyncResult * __this, Object * _p0_));
IL2CPP_REGISTER_METHODINFO(0x04772590, AsyncResult___ctor_b__17_0__MethodInfo);
}
