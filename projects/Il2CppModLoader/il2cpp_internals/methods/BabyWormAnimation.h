using namespace app;

namespace app::methods::BabyWormAnimation {
IL2CPP_REGISTER_METHOD(0x00F7FA90, void, SetTurnParameter, (BabyWormAnimation * __this, float turnParameter));
IL2CPP_REGISTER_METHOD(0x00F7FBF0, void, PlaySpawnAnimation, (BabyWormAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00F7FC00, void, PlayMoveAnimation, (BabyWormAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00F7FC10, void, PlayAttackAnticipationAnimation, (BabyWormAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00F7FC50, void, PlayDashAttackAnimation, (BabyWormAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00F7FC60, void, PlayTimeline, (BabyWormAnimation * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00F7FD30, void, SetMoveAnimSpeed, (BabyWormAnimation * __this, float speed));
IL2CPP_REGISTER_METHOD(0x00F7FE00, void, __ctor, (BabyWormAnimation * __this));
}
