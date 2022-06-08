using namespace app;

namespace app::methods::TeleportRestrictZone {
IL2CPP_REGISTER_METHOD(0x00CE9850, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00CE9910, void, OnEnable, (TeleportRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CE99F0, void, OnDisable, (TeleportRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CE9AB0, void, FixedUpdate, (TeleportRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CE9C90, bool, IsPlayerInside, (TeleportRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CE9DA0, bool, IsInside, (TeleportRestrictZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00CE9F90, bool, IsPlayerInTeleportRestrictZone, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TeleportRestrictZone * __this));
IL2CPP_REGISTER_METHOD(0x00CEA160, void, __cctor, (MethodInfo * method));
}
