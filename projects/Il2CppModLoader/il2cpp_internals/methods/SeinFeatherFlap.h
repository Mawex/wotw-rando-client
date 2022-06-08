#include <interception_macros.h>

namespace app::methods::SeinFeatherFlap {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_CharacterGravity, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD8BB0, Input_InputButtonProcessor *, get_Button, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD8BF0, bool, get_ButtonDown, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD8CF0, void, Start, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9200, void, OnDestroy, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9620, void, OnExit, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9650, void, ModifyGravityPlatformMovementSettings, (SeinFeatherFlap * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0478E568, SeinFeatherFlap_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD9730, void, ModifyHorizontalPlatformMovementSettings, (SeinFeatherFlap * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0474C710, SeinFeatherFlap_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD9860, MoonAnimator *, get_Leaf, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD98F0, bool, get_IsStatePerforming, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9900, bool, get_IsAttacking, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9910, void, UpdateCharacterState, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterIdle, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitIdle, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9920, void, UpdateIdle, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9A50, void, EnterAttack, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADAB90, void, ExitAttack, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADADF0, void, UpdateAttack, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00AD9620, void, Stop, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADB2D0, bool, get_CanLeafAttack, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeafDeployed, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTurnAnimFinished, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADB550, void, OnLeafAttackAnimationEnd, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHODINFO(0x047492A8, SeinFeatherFlap_OnLeafAttackAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADB990, void, SpawnWindFX, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHODINFO(0x04706798, SeinFeatherFlap_SpawnWindFX__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD9900, bool, ShouldLeafAttackAnimationKeepPlaying, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F8C8, SeinFeatherFlap_ShouldLeafAttackAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADBE20, SeinFeatherFlapPuppet *, get_Puppet, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADBEE0, void, OnSetReferenceToSein, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADBFB0, void, OnProcessRootMotion, (SeinFeatherFlap * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0474BD98, SeinFeatherFlap_OnProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AD9620, void, OnQuickGlowStarted, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FAC0, SeinFeatherFlap_OnQuickGlowStarted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADC2C0, void, ChangeState, (SeinFeatherFlap * __this, SeinFeatherFlap_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x00ADC310, void, UpdateState, (SeinFeatherFlap * __this));
IL2CPP_REGISTER_METHOD(0x00ADC460, void, __ctor, (SeinFeatherFlap * __this));
}
