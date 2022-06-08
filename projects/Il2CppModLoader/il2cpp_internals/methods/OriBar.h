using namespace app;

namespace app::methods::OriBar {
IL2CPP_REGISTER_METHOD(0x00621BF0, void, SetShowCondition, (OriBar * __this, Func_1_Boolean_ * shouldShowNow));
IL2CPP_REGISTER_METHOD(0x00621C60, float, get_CurrentValue, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00621C90, float, get_MaxValue, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00621CC0, void, Awake, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00622010, void, OnDestroy, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x006221B0, void, OnRestoreCheckpoint, (OriBar * __this));
IL2CPP_REGISTER_METHODINFO(0x04799788, OriBar_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00622230, bool, get_ShouldBeShown, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x006222E0, void, UpdateValue, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00622450, void, FixedUpdate, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00622810, void, UpdateVisuals, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00622C00, void, PlayShowTimeline, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00622E10, void, PlayHideTimeline, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00623080, void, Show, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x006230C0, void, Hide, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x006230E0, void, __ctor, (OriBar * __this));
IL2CPP_REGISTER_METHOD(0x00623190, void, _PlayHideTimeline_b__45_0, (OriBar * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DC60, OriBar__PlayHideTimeline_b__45_0__MethodInfo);
}
