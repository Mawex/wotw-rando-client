#include <interception_macros.h>

namespace app::methods::BashAttackGame {
IL2CPP_REGISTER_METHOD(0x00F8D5E0, void, add_BashGameComplete, (BashAttackGame * __this, Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00F8D6D0, void, remove_BashGameComplete, (BashAttackGame * __this, Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_UsingJumpToBash, (BashAttackGame * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_UsingJumpToBash, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (BashAttackGame * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F8D7C0, void, OnPoolSpawned, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8D880, void, ChangeState, (BashAttackGame * __this, BashAttackGame_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00F8D9B0, void, EnterStateAppearing, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8DBD0, void, ExitStateAppearing, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8DD90, void, EnterStatePlaying, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F4BDE0, void, ExitStatePlaying, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8DE30, void, EnterStateDisappearing, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8E0D0, void, ExitStateDisappearing, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8E290, void, OnAppearingTimelineEnded, (BashAttackGame * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BEC8, BashAttackGame_OnAppearingTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F8E2A0, void, OnDisappearingTimelineEnded, (BashAttackGame * __this));
IL2CPP_REGISTER_METHODINFO(0x04765850, BashAttackGame_OnDisappearingTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F8E3F0, void, UpdateMode, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8E4F0, void, UpdateDPadAngle, (bool smooth, float * angleInOut, float * kbdSpeedInOut, float * kbdAngleInOut, bool * kbdClockwiseInOut));
IL2CPP_REGISTER_METHOD(0x00F8E810, void, FixedUpdate, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8EF40, void, SendDirection, (BashAttackGame * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x00F8EF70, void, UpdateState, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDisappearingState, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8EFF0, void, UpdatePlayingState, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAppearingState, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8F310, void, OnEnable, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8F370, void, GameFinished, (BashAttackGame * __this));
IL2CPP_REGISTER_METHOD(0x00F8F5F0, void, __ctor, (BashAttackGame * __this));
}
