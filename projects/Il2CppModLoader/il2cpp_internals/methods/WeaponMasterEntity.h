using namespace app;

namespace app::methods::WeaponMasterEntity {
IL2CPP_REGISTER_METHOD(0x008E79D0, bool, get_OnGround, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E7AC0, void, set_OnGround, (WeaponMasterEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008E7AD0, bool, get_CanTurn, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E7B00, void, Awake, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E7C00, void, OnEnable, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E7E80, void, OnDisable, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E8100, void, LeftTree, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x04704968, WeaponMasterEntity_LeftTree__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008E8120, String *, get_DialogActorName, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E81A0, String *, get_InteractionActorName, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E8220, void, OnUpdate, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x008E8320, bool, CanInteractWithCharacter, (WeaponMasterEntity * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x008E8580, bool, get_CanEffectivelyStartInteraction, (WeaponMasterEntity * __this));
IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (WeaponMasterEntity * __this));
}
