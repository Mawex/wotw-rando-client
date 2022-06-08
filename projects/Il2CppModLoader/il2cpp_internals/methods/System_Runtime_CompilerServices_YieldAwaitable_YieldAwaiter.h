using namespace app;

namespace app::methods::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter {
IL2CPP_REGISTER_METHOD(0x0018F210, bool, get_IsCompleted, (YieldAwaitable_YieldAwaiter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0018F220, void, OnCompleted, (YieldAwaitable_YieldAwaiter__Boxed * __this, Action * continuation));
IL2CPP_REGISTER_METHOD(0x0018F2C0, void, UnsafeOnCompleted, (YieldAwaitable_YieldAwaiter__Boxed * __this, Action * continuation));
IL2CPP_REGISTER_METHOD(0x01A932C0, void, QueueContinuation, (Action * continuation, bool flowContext));
IL2CPP_REGISTER_METHODINFO(0x0477A7E8, YieldAwaitable_YieldAwaiter_QueueContinuation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A93560, void, RunAction, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x04769088, YieldAwaitable_YieldAwaiter_RunAction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00002890, void, GetResult, (YieldAwaitable_YieldAwaiter__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01A93610, void, __cctor, (MethodInfo * method));
}
