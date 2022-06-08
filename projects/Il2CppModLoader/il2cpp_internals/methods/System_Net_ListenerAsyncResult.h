using namespace app;

namespace app::methods::System::Net::ListenerAsyncResult {
IL2CPP_REGISTER_METHOD(0x01E6C530, void, __ctor, (ListenerAsyncResult * __this, AsyncCallback * cb, Object * state));
IL2CPP_REGISTER_METHOD(0x01E6C690, void, Complete, (ListenerAsyncResult * __this, Exception * exc));
IL2CPP_REGISTER_METHOD(0x01E6C970, void, InvokeCallback, (Object * o));
IL2CPP_REGISTER_METHODINFO(0x047010A8, ListenerAsyncResult_InvokeCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6CAB0, void, Complete, (ListenerAsyncResult * __this, HttpListenerContext * context));
IL2CPP_REGISTER_METHOD(0x01E6CAC0, void, Complete, (ListenerAsyncResult * __this, HttpListenerContext * context, bool synch));
IL2CPP_REGISTER_METHOD(0x01E6D230, HttpListenerContext *, GetContext, (ListenerAsyncResult * __this));
IL2CPP_REGISTER_METHODINFO(0x047940C8, ListenerAsyncResult_GetContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E6D2E0, Object *, get_AsyncState, (ListenerAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6D300, WaitHandle *, get_AsyncWaitHandle, (ListenerAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6D560, bool, get_CompletedSynchronously, (ListenerAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6D580, bool, get_IsCompleted, (ListenerAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x01E6D690, void, __cctor, (MethodInfo * method));
}
