#include <interception_macros.h>

namespace app::methods::System::Threading::Monitor {
IL2CPP_REGISTER_METHOD(0x027E0300, void, Enter, (Object * obj));
IL2CPP_REGISTER_METHOD(0x027E0330, void, Enter, (Object * obj, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x027E0360, void, ThrowLockTakenException, ());
IL2CPP_REGISTER_METHODINFO(0x047580B8, Monitor_ThrowLockTakenException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E03D0, void, Exit, (Object * obj));
IL2CPP_REGISTER_METHOD(0x027E0400, void, TryEnter, (Object * obj, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x027E0430, bool, Wait, (Object * obj, int32_t millisecondsTimeout, bool exitContext));
IL2CPP_REGISTER_METHODINFO(0x0477E808, Monitor_Wait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E05E0, bool, Wait, (Object * obj, int32_t millisecondsTimeout));
IL2CPP_REGISTER_METHOD(0x027E05F0, void, Pulse, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0477D3E8, Monitor_Pulse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0790, void, PulseAll, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04703150, Monitor_PulseAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0930, bool, Monitor_test_synchronised, (Object * obj));
IL2CPP_REGISTER_METHOD(0x027E0980, void, Monitor_pulse, (Object * obj));
IL2CPP_REGISTER_METHOD(0x027E0A00, void, ObjPulse, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047335A8, Monitor_ObjPulse__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0B30, void, Monitor_pulse_all, (Object * obj));
IL2CPP_REGISTER_METHOD(0x027E0BB0, void, ObjPulseAll, (Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04767300, Monitor_ObjPulseAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0CD0, bool, Monitor_wait, (Object * obj, int32_t ms));
IL2CPP_REGISTER_METHOD(0x027E0D00, bool, ObjWait, (bool exitContext, int32_t millisecondsTimeout, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x047191F0, Monitor_ObjWait__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0E30, void, try_enter_with_atomic_var, (Object * obj, int32_t millisecondsTimeout, bool * lockTaken));
IL2CPP_REGISTER_METHOD(0x027E0E90, void, ReliableEnterTimeout, (Object * obj, int32_t timeout, bool * lockTaken));
IL2CPP_REGISTER_METHODINFO(0x04707A20, Monitor_ReliableEnterTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027E0FC0, void, ReliableEnter, (Object * obj, bool * lockTaken));
}
