#include <interception_macros.h>

namespace app::methods::Moon::MeleeComboMoveSwordCharge {
IL2CPP_REGISTER_METHOD(0x002FBC20, SeinCharacter *, get_Sein, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x00417920, ButtonInputType__Enum, get_ButtonInputType, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Restricted, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01116E10, bool, CanExecute, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01117010, bool, get_OnAttackButtonPressed, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x011170E0, void, Initialize, (MeleeComboMoveSwordCharge * __this, SeinComboHandler * handler, MeleeWeapon * weapon));
IL2CPP_REGISTER_METHOD(0x01117330, void, OnDamageReceived, (MeleeComboMoveSwordCharge * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0477F040, MeleeComboMoveSwordCharge_OnDamageReceived__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01117450, void, OnDestroy, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01117670, void, EnterMove, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01117740, void, ExitMove, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01117810, void, OnUpdate, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01117AD0, void, ChangeState, (MeleeComboMoveSwordCharge * __this, MeleeComboMoveSwordCharge_State__Enum state));
IL2CPP_REGISTER_METHOD(0x01117C40, float, get_EffectiveDamage, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01117C60, void, OnEnterCharging, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x011181E0, void, OnExitCharging, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01118480, void, OnEnterCharged, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01118A90, void, OnExitCharged, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01118D90, void, UpdateStates, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01118F10, void, UpdateNormal, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01119140, void, UpdateCharging, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x011191E0, void, UpdateCharged, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAttacking, (MeleeComboMoveSwordCharge * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldUpdateWhileDisabled, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x01119200, void, __ctor, (MeleeComboMoveSwordCharge * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
