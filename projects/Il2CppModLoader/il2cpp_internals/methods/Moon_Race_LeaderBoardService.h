#include <interception_macros.h>

namespace app::methods::Moon::Race::LeaderBoardService {
IL2CPP_REGISTER_METHOD(0x00C430B0, float, GetPlayerTime, (LeaderBoardService * __this, String * raceName, RaceSettings * raceSettings, ReplayValidatorData * validatorData));
IL2CPP_REGISTER_METHOD(0x00C433C0, bool, HasScore, (LeaderBoardService * __this, String * raceName));
IL2CPP_REGISTER_METHOD(0x00C435C0, bool, HasScores, (LeaderBoardService * __this, String * raceName));
IL2CPP_REGISTER_METHOD(0x00C43670, bool, InTop, (LeaderBoardService * __this, String * raceName, int32_t amount));
IL2CPP_REGISTER_METHOD(0x00C43A60, float, GetBestTime, (LeaderBoardService * __this, String * raceName));
IL2CPP_REGISTER_METHOD(0x00C43B90, void, UploadReplay, (LeaderBoardService * __this, String * raceId, float duration, String * replayData, ITrialData * trialData));
IL2CPP_REGISTER_METHOD(0x00C43D90, bool, UploadReplay, (LeaderBoardService * __this, String * raceId, float duration, String * replayData, ReplayValidatorData * data));
IL2CPP_REGISTER_METHOD(0x00C43F70, void, __ctor, (LeaderBoardService * __this));
}
