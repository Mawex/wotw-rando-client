using namespace app;

namespace app::methods::Moon::Race::ReplayValidator {
IL2CPP_REGISTER_METHOD(0x00C499E0, bool, IsValid, (String * raceId, String * replayData, int32_t score, ITrialData * trialData, RaceSettings * raceSettings, bool uploading));
IL2CPP_REGISTER_METHOD(0x00C49AF0, ReplayValidator_ValidReason, IsValidReason, (String * raceId, String * replayData, int32_t score, ReplayValidatorData * validatorData, RaceSettings * raceSettings, bool uploading));
IL2CPP_REGISTER_METHOD(0x00C4C170, bool, InfiniteJumpsUsed, (int32_t jumpCount, float startY, Nullable_1_UnityEngine_Vector3_ endPos));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
