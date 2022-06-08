#include <interception_macros.h>

namespace app::methods::System::Threading::ManualResetEventSlim {
IL2CPP_REGISTER_METHOD(0x027DE960, WaitHandle *, get_WaitHandle, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DE9A0, bool, get_IsSet, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DEA40, void, set_IsSet, (ManualResetEventSlim * __this, bool value));
IL2CPP_REGISTER_METHOD(0x027DEA70, int32_t, get_SpinCount, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DEB20, void, set_SpinCount, (ManualResetEventSlim * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x027DEB40, int32_t, get_Waiters, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DEBE0, void, set_Waiters, (ManualResetEventSlim * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04733200, ManualResetEventSlim_set_Waiters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DECE0, void, __ctor, (ManualResetEventSlim * __this, bool initialState));
IL2CPP_REGISTER_METHOD(0x027DED40, void, __ctor, (ManualResetEventSlim * __this, bool initialState, int32_t spinCount));
IL2CPP_REGISTER_METHODINFO(0x04730588, ManualResetEventSlim__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DEE90, void, Initialize, (ManualResetEventSlim * __this, bool initialState, int32_t spinCount));
IL2CPP_REGISTER_METHOD(0x027DEF00, void, EnsureLockObjectCreated, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DF060, bool, LazyInitializeEvent, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x0233B680, void, Set, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DF2F0, void, Set, (ManualResetEventSlim * __this, bool duringCancellation));
IL2CPP_REGISTER_METHOD(0x027DF510, bool, Wait, (ManualResetEventSlim * __this, int32_t millisecondsTimeout, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHODINFO(0x04750720, ManualResetEventSlim_Wait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DFC60, void, Dispose, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHOD(0x027DFD10, void, Dispose, (ManualResetEventSlim * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x027DFE20, void, ThrowIfDisposed, (ManualResetEventSlim * __this));
IL2CPP_REGISTER_METHODINFO(0x047181F8, ManualResetEventSlim_ThrowIfDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027DFEF0, void, CancellationTokenCallback, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0478B030, ManualResetEventSlim_CancellationTokenCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0080, void, UpdateStateAtomically, (ManualResetEventSlim * __this, int32_t newBits, int32_t updateBitsMask));
IL2CPP_REGISTER_METHOD(0x027E0180, int32_t, ExtractStatePortionAndShiftRight, (int32_t state, int32_t mask, int32_t rightBitShiftCount));
IL2CPP_REGISTER_METHOD(0x027E0190, int32_t, ExtractStatePortion, (int32_t state, int32_t mask));
IL2CPP_REGISTER_METHOD(0x027E01A0, void, __cctor, ());
}
