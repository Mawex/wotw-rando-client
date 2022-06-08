#include <interception_macros.h>

namespace app::methods::SkipCutscene {
IL2CPP_REGISTER_METHOD(0x006C0B30, List_1_ICondition_ *, get_ResolvedConditions, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C0D60, List_1_ISkipCutsceneAction_ *, get_ResolvedReactions, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C0F90, Vector3, get_DesiredPositionAfterSkip, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C1260, bool, get_ShouldHandleSceneLoadingUnloading, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C13C0, MoonTimeline *, get_ResolvedTimeline, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_ValidForCutsceneSkiping, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_ValidForCutsceneSkiping, (SkipCutscene * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_SkipCutscenePriority, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C14E0, void, OnValidate, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C14F0, void, OnEnable, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C1600, void, OnDisable, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C1780, void, LateUpdate, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C1920, void, CollectCustomTriggers, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C1B80, void, OnSkip, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C2C20, void, OnAfterTandemSpawn, (SkipCutscene * __this));
IL2CPP_REGISTER_METHODINFO(0x0471B4E8, SkipCutscene_OnAfterTandemSpawn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x006C2ED0, bool, ConditionsPassed, (SkipCutscene * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SkipCutscene * __this));
}
