using namespace app;

namespace app::methods::SeinRide {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAllowedNonZeroZPosition, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D17A0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D1840, SeinRidePuppet *, get_Puppet, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D1900, SeinRide_RideState *, get_CurrentRideState, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D19C0, bool, get_PlayerLockedToAttachmentPoint, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, IRideable *, get_Rideable, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D1A10, bool, get_IsStatePerforming, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D1A20, void, OnSetReferenceToSein, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D1B00, void, Serialize, (SeinRide * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005D1D70, void, Apply, (SeinRide * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x005D20E0, void, AfterLoadKu, (SeinRide * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B7E8, SeinRide_AfterLoadKu__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D23E0, IUberState__Array *, get_AffectingUberStates, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D2470, void, OnEnable, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D2510, void, OnDisable, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D25D0, void, Start, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D27F0, void, UpdateCharacterState, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D2850, void, LateUpdate, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D2BD0, void, StartRiding, (SeinRide * __this, IRideable * rideable, bool skipAnimation));
IL2CPP_REGISTER_METHOD(0x005D2E50, bool, get_ReadyToStart, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D2E60, bool, IsRiding, (SeinRide * __this));
IL2CPP_REGISTER_METHODINFO(0x0478CC08, SeinRide_IsRiding__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D2E80, void, StopRiding, (SeinRide * __this, Vector2 extraForce));
IL2CPP_REGISTER_METHOD(0x005D3550, void, OnDrawGizmos, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x005D3A20, void, __ctor, (SeinRide * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
