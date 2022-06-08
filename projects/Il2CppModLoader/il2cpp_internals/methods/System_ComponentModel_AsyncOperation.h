using namespace app;

namespace app::methods::System::ComponentModel::AsyncOperation {
IL2CPP_REGISTER_METHOD(0x024A0500, void, __ctor, (AsyncOperation * __this, Object * userSuppliedState, SynchronizationContext * syncContext));
IL2CPP_REGISTER_METHOD(0x024A0540, void, Finalize, (AsyncOperation * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_UserSuppliedState, (AsyncOperation * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, SynchronizationContext *, get_SynchronizationContext, (AsyncOperation * __this));
IL2CPP_REGISTER_METHOD(0x024A05D0, void, Post, (AsyncOperation * __this, SendOrPostCallback * d, Object * arg));
IL2CPP_REGISTER_METHOD(0x024A06E0, void, PostOperationCompleted, (AsyncOperation * __this, SendOrPostCallback * d, Object * arg));
IL2CPP_REGISTER_METHOD(0x024A0700, void, OperationCompleted, (AsyncOperation * __this));
IL2CPP_REGISTER_METHOD(0x024A0720, void, OperationCompletedCore, (AsyncOperation * __this));
IL2CPP_REGISTER_METHOD(0x024A0840, void, VerifyNotCompleted, (AsyncOperation * __this));
IL2CPP_REGISTER_METHODINFO(0x04766698, AsyncOperation_VerifyNotCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A0900, void, VerifyDelegateNotNull, (AsyncOperation * __this, SendOrPostCallback * d));
IL2CPP_REGISTER_METHODINFO(0x0472BC90, AsyncOperation_VerifyDelegateNotNull__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024A09D0, AsyncOperation *, CreateOperation, (Object * userSuppliedState, SynchronizationContext * syncContext));
IL2CPP_REGISTER_METHOD(0x024A0B40, void, __ctor, (AsyncOperation * __this));
IL2CPP_REGISTER_METHODINFO(0x04793558, AsyncOperation__ctor_1__MethodInfo);
}
