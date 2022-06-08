using namespace app;

namespace app::methods::Moon::SimpleSwayBossAnimPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02122DC0, bool, get_UseSway, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02122E60, void, set_UseSway, (bool value));
IL2CPP_REGISTER_METHOD(0x02122F40, void, RefreshUseSwayAll, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021230A0, void, RefreshUseSway, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02123200, void, Awake, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x021232F0, void, OnDestroy, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x021233D0, void, OnAddedToAnimator, (SimpleSwayBossAnimPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, (SimpleSwayBossAnimPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x021233E0, void, OnActivated, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x021233F0, void, Process, (SimpleSwayBossAnimPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x02123510, void, ScheduleJob, (SimpleSwayBossAnimPostprocess * __this, SimpleSwayBossAnimPostprocess_PerFrameReadOnly common));
IL2CPP_REGISTER_METHOD(0x02123730, void, CompleteJob, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02123770, void, AllocateSway, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02123A80, void, InitSway, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02123D70, void, DisposeSway, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x02123DA0, void, UpdateSway, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x021241C0, void, __ctor, (SimpleSwayBossAnimPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x021241E0, void, __cctor, (MethodInfo * method));
}
