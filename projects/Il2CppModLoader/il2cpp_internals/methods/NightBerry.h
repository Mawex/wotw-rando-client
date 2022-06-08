using namespace app;

namespace app::methods::NightBerry {
IL2CPP_REGISTER_METHOD(0x005FF4C0, float, get_SafeFromDamageRadius, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FF4D0, void, SetRespawnPosition, (NightBerry * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x005FF510, Vector3, get_Position, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FF5A0, void, set_Position, (NightBerry * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x005FF620, bool, get_IsCarried, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FF650, void, SetToDropMode, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FF680, void, Awake, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FFB20, void, OnGameReset, (NightBerry * __this));
IL2CPP_REGISTER_METHODINFO(0x0475A060, NightBerry_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005FFC50, void, OnDestroy, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x005FFFA0, void, Serialize, (NightBerry * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00600010, void, OnReleaseNightberry, (NightBerry * __this));
IL2CPP_REGISTER_METHODINFO(0x0473F328, NightBerry_OnReleaseNightberry__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006001B0, void, FixedUpdate, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x00600ED0, void, ShrinkSpiritRing, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x00600FB0, void, GrowSpiritRing, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (NightBerry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, SuspendableMask__Enum, get_Mask, (NightBerry * __this));
IL2CPP_REGISTER_METHOD(0x006010A0, void, set_Mask, (NightBerry * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00601160, void, __ctor, (NightBerry * __this));
}
