using namespace app;

namespace app::methods::SeinDeadlyDarknessController {
IL2CPP_REGISTER_METHOD(0x006FD880, bool, get_ControllerShakeActive, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FD890, float, get_CurrentShake, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_ModifiedStrength, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FD900, ZoneDamageSettings *, get_DamageSettings, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FD9C0, bool, get_OriIsInsideDarkness, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006FDA40, void, set_OriIsInsideDarkness, (bool value));
IL2CPP_REGISTER_METHOD(0x006FDAD0, float, get_RemainingDuration, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006FDB50, void, OnEnable, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FDD60, void, OnDisable, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FDFB0, void, OnRestoreCheckpoint, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHODINFO(0x04745580, SeinDeadlyDarknessController_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006FE050, void, OriKilled, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE080, void, OriEnter, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE190, void, OriExit, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE190, void, StopFearSound, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE1B0, void, Start, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE270, void, Update, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE430, float, GetRTPCDarknessValue, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FE460, void, UpdateDarknessDetection, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (SeinDeadlyDarknessController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF3C0, SuspendableMask__Enum, get_Mask, (SeinDeadlyDarknessController * __this));
IL2CPP_REGISTER_METHOD(0x006FEDC0, void, set_Mask, (SeinDeadlyDarknessController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x006FEE70, void, __ctor, (SeinDeadlyDarknessController * __this));
}
