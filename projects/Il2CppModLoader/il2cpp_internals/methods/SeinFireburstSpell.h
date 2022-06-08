using namespace app;

namespace app::methods::SeinFireburstSpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x006E4240, CharacterGravity *, get_CharacterGravity, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_CharacterLeftRightMovement, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADC4B0, void, Start, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADC760, void, OnSetReferenceToSein, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADC790, void, OnAwake, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADC880, void, OnDestroy, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADCBA0, void, ModifyGravityPlatformMovementSettings, (SeinFireburstSpell * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04726240, SeinFireburstSpell_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADCC30, void, ModifyHorizontalPlatformMovementSettings, (SeinFireburstSpell * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04732550, SeinFireburstSpell_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADCCA0, void, PlayAimAnimation, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADD480, bool, KeepPlayingAnimation, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x04705898, SeinFireburstSpell_KeepPlayingAnimation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADD4F0, void, OnStartAnimFinished, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHODINFO(0x047396D0, SeinFireburstSpell_OnStartAnimFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00ADD510, void, ActivateSpell, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADD9F0, void, DeactivateSpell, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADDA30, void, BeginCasting, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADDBF0, void, EndCasting, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADDD80, void, PlaySound, (SeinFireburstSpell * __this, SoundProvider * sound));
IL2CPP_REGISTER_METHOD(0x00ADDF10, void, OnExit, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADDF40, bool, get_IsStatePerforming, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADDF50, void, UpdateCharacterState, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADE010, void, UpdateNotCasting, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADE0B0, void, UpdateSpellActive, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADE3C0, void, UpdateCasting, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADEC60, void, UpdateParticleDamageDealing, (SeinFireburstSpell * __this));
IL2CPP_REGISTER_METHOD(0x00ADF110, bool, PointInsideParticles, (SeinFireburstSpell * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00ADF2A0, void, __ctor, (SeinFireburstSpell * __this));
}
