using namespace app;

namespace app::methods::KwolokTongueStatue_TongueState {
IL2CPP_REGISTER_METHOD(0x00EFB0C0, void, __ctor, (KwolokTongueStatue_TongueState * __this, KwolokTongueStatue * owner, KwolokTongueStatue_KwolowTongueStatueState__Enum desiredState, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00EFB0D0, bool, get_IsPerforming, (KwolokTongueStatue_TongueState * __this));
IL2CPP_REGISTER_METHOD(0x00EFB0F0, DesiredUberStateByte *, get_DesiredState, (KwolokTongueStatue_TongueState * __this));
IL2CPP_REGISTER_METHOD(0x00EFB150, DesiredUberStateByte *, CreateDesiredState, (KwolokTongueStatue_TongueState * __this, uint8_t desiredValue));
IL2CPP_REGISTER_METHOD(0x00EFB3A0, void, AsureStateCorrectness, (KwolokTongueStatue_TongueState * __this, DesiredUberStateByte * desiredState, uint8_t desiredValue));
IL2CPP_REGISTER_METHOD(0x00EFB3C0, void, Perform, (KwolokTongueStatue_TongueState * __this));
IL2CPP_REGISTER_METHOD(0x00EFB590, void, Interrupt, (KwolokTongueStatue_TongueState * __this));
IL2CPP_REGISTER_METHOD(0x00EFB5B0, void, OnTimelineStop, (KwolokTongueStatue_TongueState * __this));
IL2CPP_REGISTER_METHODINFO(0x04778368, KwolokTongueStatue_TongueState_OnTimelineStop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EFB830, void, WriteState, (KwolokTongueStatue_TongueState * __this));
}
