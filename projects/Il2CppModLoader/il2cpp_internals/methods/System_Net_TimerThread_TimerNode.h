using namespace app;

namespace app::methods::System::Net::TimerThread_TimerNode {
IL2CPP_REGISTER_METHOD(0x020A9190, void, __ctor, (TimerThread_TimerNode * __this, TimerThread_Callback * callback, Object * context, int32_t durationMilliseconds, Object * queueLock));
IL2CPP_REGISTER_METHOD(0x020A9210, void, __ctor, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHOD(0x020A9270, bool, get_HasExpired, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, TimerThread_TimerNode *, get_Next, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Next, (TimerThread_TimerNode * __this, TimerThread_TimerNode * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, TimerThread_TimerNode *, get_Prev, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Prev, (TimerThread_TimerNode * __this, TimerThread_TimerNode * value));
IL2CPP_REGISTER_METHOD(0x020A9280, bool, Cancel, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHOD(0x020A93F0, bool, Fire, (TimerThread_TimerNode * __this));
IL2CPP_REGISTER_METHODINFO(0x04764060, TimerThread_TimerNode_Fire__MethodInfo);
}
