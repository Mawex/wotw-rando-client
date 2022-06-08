using namespace app;

namespace app::methods::WindVent {
IL2CPP_REGISTER_METHOD(0x005790E0, void, FixedUpdate, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x00579260, void, StartAnticipation, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x005795E0, void, StartBurst, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x00579C50, void, ActivateVentGraphic, (WindVent * __this, bool active));
IL2CPP_REGISTER_METHOD(0x00579D80, void, ChangeState, (WindVent * __this, WindVent_State__Enum state));
IL2CPP_REGISTER_METHOD(0x0057A0A0, void, StartCooldown, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A130, void, Awake, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A200, void, OnDestroy, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A2A0, void, Start, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A2D0, void, EnableBeamParticleEmission, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A3B0, void, DisableBeamParticleEmission, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A490, void, Serialize, (WindVent * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_IsSuspended, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A590, void, set_IsSuspended, (WindVent * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0057A5A0, SuspendableMask__Enum, get_Mask, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A5B0, void, set_Mask, (WindVent * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, GameObject *, GetDynamicGraphicTarget, (WindVent * __this));
IL2CPP_REGISTER_METHOD(0x0057A670, void, __ctor, (WindVent * __this));
}
