using namespace app;

namespace app::methods::AchievementsStateValidator {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BBF40, IUberState__Array *, get_AffectingUberStates, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BC560, List_1_UnityEngine_GameObject_ *, get_AllTargets, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BC720, void, OnEnable, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BC8F0, void, OnDisable, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BCAC0, void, Apply, (AchievementsStateValidator * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x004BCAC0, void, OnCreateCheckpoint, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHODINFO(0x04716BB0, AchievementsStateValidator_OnCreateCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004BCAD0, void, ValidateStates, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BCF90, void, ValidateStatesOnGameLoad, (AchievementsStateValidator * __this));
IL2CPP_REGISTER_METHOD(0x004BD210, void, __ctor, (AchievementsStateValidator * __this));
}
