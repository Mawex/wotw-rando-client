using namespace app;

namespace app::methods::Moon::Timeline::EntityPhysicsAnimator {
IL2CPP_REGISTER_METHOD(0x00766190, CharacterPlatformMovement *, get_Movement, (EntityPhysicsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00766270, MovementProcessor *, get_MovementProcessor, (EntityPhysicsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00766470, void, OnStartPlayback, (EntityPhysicsAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00766C90, void, OnStopPlayback, (EntityPhysicsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00766DE0, void, UpdateTargetSpeed, (EntityPhysicsAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00767340, void, OnUpdateEntity, (EntityPhysicsAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x007673C0, void, SynchronizeData, (EntityPhysicsAnimator * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00767530, void, __ctor, (EntityPhysicsAnimator * __this));
}
