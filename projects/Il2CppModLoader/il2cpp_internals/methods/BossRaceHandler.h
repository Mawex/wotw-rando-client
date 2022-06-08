#include <interception_macros.h>

namespace app::methods::BossRaceHandler {
IL2CPP_REGISTER_METHOD(0x00D3D980, RaceStateMachineContext *, get_Context, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3DA30, void, OnEnable, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3DA70, void, Update, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGhostFinished, (BossRaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlayerFinished, (BossRaceHandler * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00D3DBF0, void, OnRaceFinished, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3DCB0, void, OnRaceFailed, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3DE00, IEnumerator *, ChallengeFailedFade, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3DF50, void, Suspend, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3E210, void, SetRaceInProgressState, (BossRaceHandler * __this, bool inProgress));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsInsideRaceArea, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3E3A0, void, StartMenuRace, (BossRaceHandler * __this, Action * onStart));
IL2CPP_REGISTER_METHOD(0x00D3E490, IEnumerator *, StartMenuRaceNextFrame, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3E5E0, void, OnStart, (BossRaceHandler * __this, bool spectate));
IL2CPP_REGISTER_METHOD(0x00D3E6F0, void, PlaceOriAtStart, (BossRaceHandler * __this));
IL2CPP_REGISTER_METHOD(0x00D3EB90, void, GetStartGroundPosition, (BossRaceHandler * __this, Vector3 * pos, Vector3 target));
IL2CPP_REGISTER_METHOD(0x00D3EE90, void, __ctor, (BossRaceHandler * __this));
}
