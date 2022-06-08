#include <interception_macros.h>

namespace app::methods::ChallengeShrineManager {
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_IsChallengeOngoing, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01041740, void, OnEnable, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x010417D0, void, Start, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x010422C0, void, OnDestroy, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01042C80, void, OnDisable, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01042D60, void, Update, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01042E70, void, RewardPickedUp, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04732048, ChallengeShrineManager_RewardPickedUp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01042EA0, void, HandleDeath, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHODINFO(0x047619C8, ChallengeShrineManager_HandleDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010430A0, void, ResetChallenge, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01043470, void, StartChallenge, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01043880, void, PauseTimer, (ChallengeShrineManager * __this, bool paused));
IL2CPP_REGISTER_METHOD(0x01043940, void, NextWave, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01043E10, void, StartWave, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01043FA0, void, TeleportBackToStart, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x010440C0, void, AddTime, (ChallengeShrineManager * __this, float timeToAdd));
IL2CPP_REGISTER_METHOD(0x01044110, void, AddTimeFromTrigger, (ChallengeShrineManager * __this, LegacyTrigger * trigger));
IL2CPP_REGISTER_METHODINFO(0x047055D0, ChallengeShrineManager_AddTimeFromTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010442E0, void, FinishWave, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHODINFO(0x047700E8, ChallengeShrineManager_FinishWave__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01044310, void, ChallengeFailed, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01044540, void, ChallengeCompleted, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01044760, void, ActivateShrineUI, (ChallengeShrineManager * __this, bool on));
IL2CPP_REGISTER_METHOD(0x01044850, void, MoveCurrentCharacterToPosition, (ChallengeShrineManager * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x01044940, void, Trigger, (ChallengeShrineManager * __this, ChallengeShrineTrigger * trigger));
IL2CPP_REGISTER_METHOD(0x01044A80, void, HandleTrigger, (ChallengeShrineManager * __this, ChallengeShrineTrigger * trigger));
IL2CPP_REGISTER_METHOD(0x01044B20, void, HandleTriggerType, (ChallengeShrineManager * __this, ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum type));
IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (ChallengeShrineManager * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FFCE0, SuspendableMask__Enum, get_Mask, (ChallengeShrineManager * __this));
IL2CPP_REGISTER_METHOD(0x01044E30, void, set_Mask, (ChallengeShrineManager * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01044EF0, void, __ctor, (ChallengeShrineManager * __this));
}
