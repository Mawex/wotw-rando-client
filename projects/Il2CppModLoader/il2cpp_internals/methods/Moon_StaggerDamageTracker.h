using namespace app;

namespace app::methods::Moon::StaggerDamageTracker {
IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_Acumulator, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E2F890, float, get_Timer, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00504E70, float, get_ImunityTimer, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E2F8A0, void, Initialize, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E2F8D0, void, Step, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E2F9B0, void, RegisterDamage, (StaggerDamageTracker * __this, EntityDamageEvent * damageEvent, StaggerSettings * staggerSettings));
IL2CPP_REGISTER_METHOD(0x00E2FA50, bool, CanRegisterStagger, (StaggerDamageTracker * __this, EntityDamageEvent * damageEvent, StaggerSettings * staggerSettings));
IL2CPP_REGISTER_METHOD(0x00E2FD10, void, Play, (StaggerDamageTracker * __this, EntityDamageEvent * damageEvent, StaggerSettings * staggerSettings));
IL2CPP_REGISTER_METHOD(0x00E30190, void, Reset, (StaggerDamageTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E301A0, void, __ctor, (StaggerDamageTracker * __this));
}
