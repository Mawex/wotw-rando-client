using namespace app;

namespace app::methods::GameTimer {
IL2CPP_REGISTER_METHOD(0x00404DA0, void, Awake, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x004050A0, void, OnEnable, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x004050D0, void, UpdateValueStoreOnDeath, (GameTimer * __this, UberStateValueStore * valueStore));
IL2CPP_REGISTER_METHOD(0x00405220, void, OnCheckpointPreRestore, (GameTimer * __this));
IL2CPP_REGISTER_METHODINFO(0x04708968, GameTimer_OnCheckpointPreRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00405240, void, OnCheckpointPostRestore, (GameTimer * __this));
IL2CPP_REGISTER_METHODINFO(0x047323B0, GameTimer_OnCheckpointPostRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00405260, void, OnDestroy, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405550, void, Update, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405810, String *, get_DisplayTimeAsString, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405A00, int32_t, get_Hours, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405AB0, String *, get_HoursAsString, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405BA0, int32_t, get_Minutes, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405BE0, String *, get_MinutesAsString, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405CE0, int32_t, get_TotalMinutes, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405DA0, int32_t, get_Seconds, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405E60, void, Reset, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (GameTimer * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00405E70, void, ResetSession, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405E80, void, Apply, (GameTimer * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_ApplyOnEditor, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, IUberState__Array *, get_AffectingUberStates, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, List_1_UnityEngine_GameObject_ *, get_AllTargets, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00405F60, void, OnBeforeSave, (GameTimer * __this));
IL2CPP_REGISTER_METHOD(0x00406040, void, __ctor, (GameTimer * __this));
}
