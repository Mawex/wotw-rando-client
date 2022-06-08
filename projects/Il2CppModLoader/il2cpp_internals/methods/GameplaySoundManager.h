#include <interception_macros.h>

namespace app::methods::GameplaySoundManager {
IL2CPP_REGISTER_METHOD(0x004108F0, bool, get_ShowCinematicDebug, ());
IL2CPP_REGISTER_METHOD(0x00410990, void, set_ShowCinematicDebug, (bool value));
IL2CPP_REGISTER_METHOD(0x00410AC0, void, SetAudioQuality, (GameplaySoundManager * __this, GameplaySoundManager_AudioQualitySetting__Enum qualitySetting));
IL2CPP_REGISTER_METHOD(0x00410BE0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00410CA0, void, Awake, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00410D70, void, Start, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00411020, void, CacheCinematicStateId, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHODINFO(0x047386E0, GameplaySoundManager_CacheCinematicStateId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00411090, void, OnDestroy, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00411130, void, FixedUpdate, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x004111F0, void, ProcessOriHit, (GameplaySoundManager * __this, DamageResult damageResult, GameObject * weapon, AbilityType__Enum abilityType, String * hitName));
IL2CPP_REGISTER_METHOD(0x004119A0, void, ProcessSurfaceHit, (GameplaySoundManager * __this, GameObject * weapon, AbilityType__Enum abilityType, String * hitName));
IL2CPP_REGISTER_METHOD(0x00411C60, void, TriggerWeaponHitEvent, (GameplaySoundManager * __this, GameObject * weapon, AbilityType__Enum abilityType, ArtificialSoundHostReference host));
IL2CPP_REGISTER_METHOD(0x00411D60, void, SetWeaponDamageRtpc, (GameplaySoundManager * __this, Damage * damage, GameObject * go));
IL2CPP_REGISTER_METHOD(0x00411EA0, void, ProcessEnemyReceivedHit, (GameplaySoundManager * __this, DamageResult damageResult, EnemyEntity * enemy));
IL2CPP_REGISTER_METHOD(0x004123C0, void, UpdateWwisePauseState, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00412C10, bool, IsGameSoftPaused, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00412DC0, void, UpdateMusicLoopEvent, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00413000, void, SyncedMusicCueCallback, (GameplaySoundManager * __this, Object * in_cookie, AkCallbackType__Enum in_type, AkCallbackInfo * in_info));
IL2CPP_REGISTER_METHODINFO(0x04701BD0, GameplaySoundManager_SyncedMusicCueCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsSuspended, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsSuspended, (GameplaySoundManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00413180, SuspendableMask__Enum, get_Mask, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00413190, void, set_Mask, (GameplaySoundManager * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004131A0, void, SetCinematicScope, ());
IL2CPP_REGISTER_METHOD(0x004132B0, void, UpdateCinematicState, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x004133D0, void, OnGUI, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00413B70, bool, get_IsCharacterInputLocked, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00414040, void, __ctor, (GameplaySoundManager * __this));
IL2CPP_REGISTER_METHOD(0x00414060, void, __cctor, ());
}
