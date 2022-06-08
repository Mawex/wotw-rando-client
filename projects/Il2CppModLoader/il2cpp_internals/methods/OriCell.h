using namespace app;

namespace app::methods::OriCell {
IL2CPP_REGISTER_METHOD(0x00623200, void, SetShowCondition, (OriCell * __this, Func_1_Boolean_ * shouldShowNow));
IL2CPP_REGISTER_METHOD(0x00623240, float, get_CurrentValue, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623250, void, set_CurrentValue, (OriCell * __this, float value));
IL2CPP_REGISTER_METHOD(0x00623260, float, get_MaxValue, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623270, void, set_MaxValue, (OriCell * __this, float value));
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsVisible, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623280, void, OnAwake, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623480, void, OnRestoreCheckpoint, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x006234B0, bool, get_ShouldBeShown, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623590, void, UpdateValue, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623720, void, ForceUpdateVisual, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623760, void, DoUpdate, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623AB0, bool, get_FreezeTimedOut, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623BC0, void, UpdateVisuals, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00623EB0, void, PlayShowTimeline, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00624000, void, PlayHideTimeline, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00624130, void, Show, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x006242B0, void, Hide, (OriCell * __this));
IL2CPP_REGISTER_METHOD(0x00624400, void, __ctor, (OriCell * __this));
}
