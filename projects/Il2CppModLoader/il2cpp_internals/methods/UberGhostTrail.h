using namespace app;

namespace app::methods::UberGhostTrail {
IL2CPP_REGISTER_METHOD(0x013EE640, Renderer *, get_TargetRenderer, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EE750, void, Reset, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EE830, Renderer *, get_Renderer, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EE900, void, WarmUpResource, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x013EE9E0, void, Awake, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EEA80, void, OnDestroy, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EEB20, void, OnEnable, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF0F0, void, SetSettings, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF230, void, UpdateComponents, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF310, void, Update, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF540, bool, get_DoUpdate, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF5F0, void, UpdateTrail, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013EF890, void, EmitQuads, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013F0540, UberScreenMode__Enum, GetExternalUberScreenMode, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013F0930, float, GetUberTweakValue, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013F0D20, bool, DoesProvideAtlas, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_IsSuspended, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x01016070, void, set_IsSuspended, (UberGhostTrail * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00CBCEC0, SuspendableMask__Enum, get_Mask, (UberGhostTrail * __this));
IL2CPP_REGISTER_METHOD(0x013F1110, void, set_Mask, (UberGhostTrail * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x013F11D0, void, __ctor, (UberGhostTrail * __this));
}
