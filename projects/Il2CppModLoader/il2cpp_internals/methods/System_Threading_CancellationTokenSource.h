#include <interception_macros.h>

namespace app::methods::System::Threading::CancellationTokenSource {
IL2CPP_REGISTER_METHOD(0x027D94A0, void, LinkedTokenCancelDelegate, (Object * source));
IL2CPP_REGISTER_METHODINFO(0x047486B0, CancellationTokenSource_LinkedTokenCancelDelegate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D95B0, bool, get_IsCancellationRequested, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D95C0, bool, get_IsCancellationCompleted, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsDisposed, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D95D0, void, set_ThreadIDExecutingCallbacks, (CancellationTokenSource * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x027D95E0, int32_t, get_ThreadIDExecutingCallbacks, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D95F0, CancellationToken, get_Token, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D9610, bool, get_CanBeCanceled, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D9620, CancellationCallbackInfo *, get_ExecutingCallback, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D9630, void, __ctor, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D9650, void, __ctor, (CancellationTokenSource * __this, bool set));
IL2CPP_REGISTER_METHOD(0x027D9670, void, Cancel, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D96A0, void, Cancel, (CancellationTokenSource * __this, bool throwOnFirstException));
IL2CPP_REGISTER_METHOD(0x027D96D0, void, TimerCallbackLogic, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04735008, CancellationTokenSource_TimerCallbackLogic__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D97F0, void, Dispose, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D98A0, void, Dispose, (CancellationTokenSource * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x027D9990, void, ThrowIfDisposed, (CancellationTokenSource * __this));
IL2CPP_REGISTER_METHOD(0x027D9A30, void, ThrowObjectDisposedException, ());
IL2CPP_REGISTER_METHODINFO(0x0471FFE0, CancellationTokenSource_ThrowObjectDisposedException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D9AA0, CancellationTokenSource *, InternalGetStaticSource, (bool set));
IL2CPP_REGISTER_METHOD(0x027D9B80, CancellationTokenRegistration, InternalRegister, (CancellationTokenSource * __this, Action_1_Object_ * callback, Object * stateForCallback, SynchronizationContext * targetSyncContext, ExecutionContext * executionContext));
IL2CPP_REGISTER_METHOD(0x027DA160, void, NotifyCancellation, (CancellationTokenSource * __this, bool throwOnFirstException));
IL2CPP_REGISTER_METHODINFO(0x04779138, CancellationTokenSource_NotifyCancellation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DA2D0, void, ExecuteCallbackHandlers, (CancellationTokenSource * __this, bool throwOnFirstException));
IL2CPP_REGISTER_METHODINFO(0x04715228, CancellationTokenSource_ExecuteCallbackHandlers__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DA880, void, CancellationCallbackCoreWork_OnSyncContext, (CancellationTokenSource * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0476FDC8, CancellationTokenSource_CancellationCallbackCoreWork_OnSyncContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DA940, void, CancellationCallbackCoreWork, (CancellationTokenSource * __this, CancellationCallbackCoreWorkArguments args));
IL2CPP_REGISTER_METHOD(0x027DAA70, CancellationTokenSource *, CreateLinkedTokenSource, (CancellationToken token1, CancellationToken token2));
IL2CPP_REGISTER_METHOD(0x027DAD80, CancellationTokenSource *, CreateLinkedTokenSource, (CancellationToken__Array * tokens));
IL2CPP_REGISTER_METHODINFO(0x04784628, CancellationTokenSource_CreateLinkedTokenSource_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DB080, void, WaitForCallbackToComplete, (CancellationTokenSource * __this, CancellationCallbackInfo * callbackInfo));
IL2CPP_REGISTER_METHOD(0x027DB160, void, __cctor, ());
}
