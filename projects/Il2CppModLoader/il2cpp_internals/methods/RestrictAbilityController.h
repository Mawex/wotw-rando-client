using namespace app;

namespace app::methods::RestrictAbilityController {
IL2CPP_REGISTER_METHOD(0x0090D040, AnimationSwapSet *, get_AnimationSet, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0090D0E0, void, set_AnimationSet, (AnimationSwapSet * value));
IL2CPP_REGISTER_METHOD(0x0090D190, bool, IsRestricted, (SeinAbilityRestrictZoneMask__Enum restrictMasks));
IL2CPP_REGISTER_METHOD(0x0090D290, bool, IsRestricted, (SeinAbilityRestrictZoneMask__Enum currentMask, SeinAbilityRestrictZoneMask__Enum restrictMasks));
IL2CPP_REGISTER_METHOD(0x0090D2B0, bool, CanCreateCheckpoint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0090D350, bool, IsRestricted, (AbilityType__Enum ability, SeinAbilityRestrictZoneMask__Enum restrictMask));
IL2CPP_REGISTER_METHOD(0x0090D4B0, bool, IsRestricted, (SeinAbilityRestrictZoneMask__Enum currentMask, AbilityType__Enum ability, SeinAbilityRestrictZoneMask__Enum restrictMasks));
IL2CPP_REGISTER_METHOD(0x0090D5D0, SeinAbilityRestrictZoneMask__Enum, GetCurrentRestrictZoneMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0090D6A0, bool, IsRestricted, (Input_Command__Enum button, SeinAbilityRestrictZoneMask__Enum restrictMask));
IL2CPP_REGISTER_METHOD(0x0090D7D0, void, Restrict, (SeinAbilityRestrictZoneMask__Enum mask));
IL2CPP_REGISTER_METHOD(0x0090D880, void, Restrict, (AnimationSwapSet * set, bool blockTurning));
IL2CPP_REGISTER_METHOD(0x0090D9D0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateBufferedCheckpoint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0043D9E0, UpdateType__Enum, get_UpdateType, (RestrictAbilityController * __this));
IL2CPP_REGISTER_METHOD(0x0090DB60, void, OnEnable, (RestrictAbilityController * __this));
IL2CPP_REGISTER_METHOD(0x0090DC00, void, OnDisable, (RestrictAbilityController * __this));
IL2CPP_REGISTER_METHOD(0x0090DCA0, void, OnFixedUpdate, (RestrictAbilityController * __this, float delta));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RestrictAbilityController * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
