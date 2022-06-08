#include <interception_macros.h>

namespace app::methods::GhostManager {
IL2CPP_REGISTER_METHOD(0x00E22090, bool, get_IsPreRecordTrackingEnabled, ());
IL2CPP_REGISTER_METHOD(0x00E22120, void, Start, (GhostManager * __this));
IL2CPP_REGISTER_METHOD(0x00E22220, void, ResetStatics, (GhostManager * __this));
IL2CPP_REGISTER_METHOD(0x00E222B0, bool, ShouldSaveRaceDataOffline, ());
IL2CPP_REGISTER_METHOD(0x00E223E0, String *, GetRaceDirectory, (String * RaceID));
IL2CPP_REGISTER_METHOD(0x00E22500, String *, GetOfflineRaceDirectory, (String * RaceID));
IL2CPP_REGISTER_METHOD(0x00E22620, void, CreateDirectory, (String * directory));
IL2CPP_REGISTER_METHOD(0x00E22650, bool, FileExists, (String * filePath));
IL2CPP_REGISTER_METHOD(0x00E22660, void, WriteFileFromByteArray, (String * path, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x00E22670, Byte__Array *, ReadBytesFromFilePath, (String * filePath));
IL2CPP_REGISTER_METHOD(0x00E22680, String *, GetGhostFile, (String * directory));
IL2CPP_REGISTER_METHOD(0x00E22720, GhostPlayer *, createGhost, (GhostManager * __this, String * ghostInputFile));
IL2CPP_REGISTER_METHOD(0x00E229D0, GhostPlayer *, createGhost, (GhostManager * __this, String * displayName, String * replay));
IL2CPP_REGISTER_METHOD(0x00E22BA0, void, OnRaceFinish, (String * raceId, GhostRecorder * recorder, RaceTimer * timer, ScoreResult__Enum * result, ITrialData * trialData));
IL2CPP_REGISTER_METHOD(0x00E22D60, void, StoreRaceDataOffline, (String * raceName, GhostRecorder * recorder, RaceTimer * timer, ITrialData * trialData));
IL2CPP_REGISTER_METHOD(0x00E23920, void, DeleteGhostFile, (String * filePath));
IL2CPP_REGISTER_METHOD(0x00E23950, bool, get_IsRecording, ());
IL2CPP_REGISTER_METHOD(0x00E23A10, GhostRecorder *, GetRecorder, ());
IL2CPP_REGISTER_METHOD(0x00E23AF0, GhostRecorder *, GetOrCreateRecorder, ());
IL2CPP_REGISTER_METHOD(0x00E23C70, void, StartPreRecording, ());
IL2CPP_REGISTER_METHOD(0x00E23CF0, void, StopPreRecording, ());
IL2CPP_REGISTER_METHOD(0x00E23D70, void, OnDestroy, (GhostManager * __this));
IL2CPP_REGISTER_METHOD(0x00E23F50, void, NotifyInstantiation, (GameObject * instance, GameObject * prefab, String * prefabGuid));
IL2CPP_REGISTER_METHOD(0x00E24330, void, NotifySceneRecordableObjectExistence, (IRecordable * recordable));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterAnimatorForRecording, (MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00E243F0, void, NotifyUberStateValueChange, (IGenericUberState * uberState, float value));
IL2CPP_REGISTER_METHODINFO(0x0477C790, GhostManager_NotifyUberStateValueChange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (GhostManager * __this));
}
