using namespace app;

namespace app::methods::System::Threading::Timer_Scheduler {
IL2CPP_REGISTER_METHOD(0x02349F50, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0234A0A0, Timer_Scheduler *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0234A140, void, __ctor, (Timer_Scheduler * __this));
IL2CPP_REGISTER_METHOD(0x0234A600, void, Remove, (Timer_Scheduler * __this, Timer * timer));
IL2CPP_REGISTER_METHOD(0x0234A700, void, Change, (Timer_Scheduler * __this, Timer * timer, int64_t new_next_run));
IL2CPP_REGISTER_METHOD(0x0234A8E0, int32_t, FindByDueTime, (Timer_Scheduler * __this, int64_t nr));
IL2CPP_REGISTER_METHOD(0x0234AAB0, void, Add, (Timer_Scheduler * __this, Timer * timer));
IL2CPP_REGISTER_METHOD(0x0234AC50, int32_t, InternalRemove, (Timer_Scheduler * __this, Timer * timer));
IL2CPP_REGISTER_METHOD(0x0234ACC0, void, TimerCB, (Object * o));
IL2CPP_REGISTER_METHODINFO(0x04798060, Timer_Scheduler_TimerCB__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234AD80, void, SchedulerThread, (Timer_Scheduler * __this));
IL2CPP_REGISTER_METHODINFO(0x04710810, Timer_Scheduler_SchedulerThread__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0234B540, void, ShrinkIfNeeded, (Timer_Scheduler * __this, List_1_System_Threading_Timer_ * list, int32_t initial));
}
