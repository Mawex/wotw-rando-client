using namespace app;

namespace app::methods::System::Threading::SynchronizationContext {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x0232E1D0, void, Send, (SynchronizationContext * __this, SendOrPostCallback * d, Object * state));
IL2CPP_REGISTER_METHOD(0x0232E200, void, Post, (SynchronizationContext * __this, SendOrPostCallback * d, Object * state));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OperationStarted, (SynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OperationCompleted, (SynchronizationContext * __this));
IL2CPP_REGISTER_METHOD(0x0232E360, void, SetSynchronizationContext, (SynchronizationContext * syncContext));
IL2CPP_REGISTER_METHOD(0x0232E3A0, SynchronizationContext *, get_Current, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0232E3D0, SynchronizationContext *, get_CurrentNoFlow, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00420EE0, SynchronizationContext *, GetThreadLocalContext, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0232E400, SynchronizationContext *, CreateCopy, (SynchronizationContext * __this));
}
