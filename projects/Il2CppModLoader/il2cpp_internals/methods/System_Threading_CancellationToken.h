#include <interception_macros.h>

namespace app::methods::System::Threading::CancellationToken {
IL2CPP_REGISTER_METHOD(0x00420EE0, CancellationToken, get_None, ());
IL2CPP_REGISTER_METHOD(0x00206AE0, bool, get_IsCancellationRequested, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206B00, bool, get_CanBeCanceled, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (CancellationToken__Boxed * __this, CancellationTokenSource * source));
IL2CPP_REGISTER_METHOD(0x027D87E0, void, ActionToActionObjShunt, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04713A58, CancellationToken_ActionToActionObjShunt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206B20, CancellationTokenRegistration, Register, (CancellationToken__Boxed * __this, Action * callback));
IL2CPP_REGISTER_METHODINFO(0x0476BC18, CancellationToken_Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206B50, CancellationTokenRegistration, InternalRegisterWithoutEC, (CancellationToken__Boxed * __this, Action_1_Object_ * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x00206B90, CancellationTokenRegistration, Register, (CancellationToken__Boxed * __this, Action_1_Object_ * callback, Object * state, bool useSynchronizationContext, bool useExecutionContext));
IL2CPP_REGISTER_METHODINFO(0x04775428, CancellationToken_Register_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00206BE0, bool, Equals, (CancellationToken__Boxed * __this, CancellationToken other));
IL2CPP_REGISTER_METHOD(0x00206BF0, bool, Equals, (CancellationToken__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x00206C00, int32_t, GetHashCode, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x027D8D80, bool, operator___, (CancellationToken left, CancellationToken right));
IL2CPP_REGISTER_METHOD(0x027D8DA0, bool, operator___, (CancellationToken left, CancellationToken right));
IL2CPP_REGISTER_METHOD(0x00206CE0, void, ThrowIfCancellationRequested, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206D10, void, ThrowIfSourceDisposed, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00206D20, void, ThrowOperationCanceledException, (CancellationToken__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04716A40, CancellationToken_ThrowOperationCanceledException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D8EE0, void, ThrowObjectDisposedException, ());
IL2CPP_REGISTER_METHODINFO(0x04739F68, CancellationToken_ThrowObjectDisposedException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027D8F50, void, __cctor, ());
}
